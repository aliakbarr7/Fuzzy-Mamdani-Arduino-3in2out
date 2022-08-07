
//--------------------------ESP8266-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Include Library ESPWifi
#include <ESP8266WiFi.h>


//--------------------------Blynk-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Include Library Blynk
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT Serial

// Masukan Token Yang di Kirim dari Blynk Melalui Email
char auth[] = "tQRNG72EO3CR0pgQ93AXEqJbuEikjdAh";

//Masukkan Nama dan Kata Sandi Wifi
char ssid[] = "Variasi Aluminium";
char password[] = "hapisahsyukur1";

// Menginisialisasikan BlynkTimer. Timer ini digunakan sebagai interval waktu untuk pengiriman data ke server Blynk
BlynkTimer timer; 

//Menginisialisasikan Widget Yang di Gunakan
WidgetLCD LCD(V3);


//--------------------------Millis-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Inisialisasi Variabel Millis
unsigned long waktuterakhir1 = 0;
unsigned long waktuterakhir2 = 0;
unsigned long waktuterakhir3 = 0;
unsigned long waktuterakhir4 = 0;
unsigned long waktuterakhir5 = 0;


//Pembacaan Data Setiap 1000 = 1 Detik
unsigned long waktubacadata = 1000;

//Pemrosesan Fuzzifikasi Setiap 1000 = 1 Detik
unsigned long waktudefuzzifikasi = 1000;



//--------------------------DHT11-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Include Library DHT
#include "DHT.h" 

//Inisialisasi Pin DHT22
#define DHTPIN D1

//Inisialisasi Tipe DHT
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);


//--------------------------Soil Mosture-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Inisialisasi Pin SoilSensor
#define moisture_sens A0


//Inisialisasi Variabel Kelembaban Tanah
const int dry = 775;
const int wet = 376;


//--------------------------Fan-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Inisialisasi Pin Fan
#define fan1 D6
#define fan2 D7

//Inisialisasi Variabel PWM Fan
int pwmfan1 = 0;
int pwmfan2 = 0;



//--------------------------Pump-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Inisialisasi Pin Pompa
#define pin_pump D0
//Inisialisasi Kondisi Pompa
bool kondisipump=0;


//--------------------------Waktu-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
//Include Library Time
#include <time.h>
int timezone = 7 * 3600;
int dst = 0;


//--------------------------Fuzzy Logic-----------------------------------------------------------------------    
//------------------------------------------------------------------------------------------------------------------
#include <Fuzzy.h>
Fuzzy *fuzzy = new Fuzzy();

  //Membuat Fuzzy Set
  
  //Fuzzy Set Input
  
  //Inisialisai Fuzzy Set Suhu
  FuzzySet *dingin                 = new FuzzySet(0, 10, 10, 20);
  FuzzySet *normalmalam            = new FuzzySet(19, 21, 21, 22);
  FuzzySet *hangat                 = new FuzzySet(21, 25, 25, 29);
  FuzzySet *normalsiang            = new FuzzySet(28, 30, 30, 31);
  FuzzySet *panas                  = new FuzzySet(30, 65, 65, 100);

  //Inisialisai Fuzzy Set Kelembaban
  FuzzySet *kering                 = new FuzzySet(0, 13, 13, 25);
  FuzzySet *lembab                 = new FuzzySet(24, 40, 40, 50);
  FuzzySet *basah                  = new FuzzySet(49, 75, 75, 100);

  //Inisialisai Fuzzy Set Waktu
  FuzzySet *tengahmalam            = new FuzzySet(-1, 4, 4, 9);
  FuzzySet *siang                  = new FuzzySet(8, 12, 12, 17);
  FuzzySet *malam                  = new FuzzySet(16, 20, 20, 24);
 
 

  //Fuzzy Set Output
  
  //Inisialisai Fuzzy Set Kipas
  FuzzySet *m                     = new FuzzySet(0, 0, 0, 0);
  FuzzySet *s                     = new FuzzySet(30, 75, 75, 80);
  FuzzySet *c                     = new FuzzySet(255, 255, 255, 255);

  //Inisialisai Fuzzy Set Pompa
  FuzzySet *mati                  = new FuzzySet(0, 0, 0, 0);
  FuzzySet *sedang                = new FuzzySet(1, 3, 3, 5);
  FuzzySet *lama                  = new FuzzySet(4, 7, 7, 10);


//--------------------------MEMANGGGIL TAB LAIN-----------------------------------------------------------------------    
//--------------------------------------------------------------------------------------------------------------------
#include "fuzzy_rule.h"
#include "fuzzy_set.h"
  

void setup()
{
  //Memulai Komunikasi Serial
  Serial.begin(9600);
  Blynk.begin(auth, ssid, password);
  dht.begin();

  //Menghubungkan ke Wifi
  Serial.println("Menghubungkan Wifi ");
  Serial.println(ssid);

  WiFi.begin(ssid,password);
 
  Serial.println("\nMenghubungkan");

  //Memeriksa Koneksi
  while( WiFi.status() != WL_CONNECTED ){
      delay(1000);
      Serial.print(".");     
  }

  //Indikator Wifi Terhubung
  Serial.println("Wifi Terhubung!");
  Serial.print("IP : ");
  Serial.println(WiFi.localIP() );


  //Mengambil Sample Waktu di Internet
  configTime(timezone, dst, "pool.ntp.org","time.nist.gov");
  Serial.println("\nMenunggu NTP...");

  while(!time(nullptr)){
     Serial.print("*");
     
     delay(1000);
  }
  
  Serial.println("\nRespon Waktu....OK");   
  delay(1000);

  //Inisalisasi Pompa Sebagai Output
  pinMode(pin_pump, OUTPUT);

  //Memanggil Fungsi Logika Fuzzy
  fuzzyrule();
  fuzzyset();

}

void loop()
{

  //Menjalankan Fungsi Blynk
  Blynk.run();

  //Inisialisasi Variabel Sensor
  float t;
  int jam;

    //Membaca Nilai Suhu Atau Temperatur
    t = dht.readTemperature();

    //Cek Pembacaan Nilai Sensor, Apabila Gagal. Maka Ulang Secara Terus Menerus
    if (isnan(t)) {
      Serial.println("Gagal Membaca Nilai Sensor Suhu!");
      delay(500);
      return;
    }

    //Membaca Nilai Kelembapan Tanah
    int sens_value= analogRead(moisture_sens);
    int outputsensor= map(sens_value, wet, dry, 100, 0);
  
    //Mengambil Data Waktu dari Internet
    time_t now = time(nullptr);
    struct tm* p_tm = localtime(&now);
       
    //Mengambil Sampel Waktu Jam
    jam = p_tm->tm_hour;

  //Menampilkan Data Sensor
  if (millis() - waktuterakhir1 > waktubacadata) {

    waktuterakhir1 = millis();

    //Menampilkan Suhu dan Kelembaban
    Serial.print("Suhu : ");
    Serial.print(t);   Serial.println(" °C");
    Serial.print("Kelembaban Tanah : ");
    Serial.print(outputsensor);   Serial.println(" %");
    Serial.print("Waktu : Jam ");
    Serial.print(jam);
    Serial.print(":");
    Serial.print(p_tm->tm_min);
    Serial.print(":");
    Serial.print(p_tm->tm_sec);   Serial.println(" WIB");
    Serial.println("");
  
  
    Serial.print("[");
    Serial.print(t);
    Serial.print(" ");
    Serial.print(outputsensor);
    Serial.print(" ");
    Serial.print(jam);
    Serial.println("]");
    Serial.println("");

    }


//--------------------------Pembacaan Data Logika Fuzzy-----------------------------------------------------------------------  

    fuzzy->setInput(1, t);
    fuzzy->setInput(2, outputsensor);
    fuzzy->setInput(3, jam);
  
    //Memproses Fuzzifikasi
    fuzzy->fuzzify();
    
    //Memproses Defuzzifikasi
    int fan = fuzzy->defuzzify(1);
    int pump = fuzzy->defuzzify(2);

  //Menampilkan Hasil Proses Fuzzyfikasi
  if (millis() - waktuterakhir2 > waktudefuzzifikasi) {
    waktuterakhir2 = millis();
  
    Serial.println("");
    Serial.println("Hasil: ");
    Serial.print("\t\t\tKipas: ");
    Serial.println(fan);
    Serial.print("\t\t\tPompa: ");
    Serial.println(pump);
    Serial.println("");
    
    }

    //Konversi Nilai Analog 255 Menjadi 1023
    int nilaiPWM = map(fan, 0, 255, 0, 1023);
    
    //Inissialisasi Variabel PWM
    pwmfan1 = nilaiPWM;
    pwmfan2 = nilaiPWM;

    if (millis()- waktuterakhir3 > 1000){
      waktuterakhir3 = millis();
      analogWrite(fan1, pwmfan1);
      analogWrite(fan2, pwmfan2);
    }


    //Inisialisai Variabel Penampung Waktu Pompa
    unsigned long waktupump = pump * 1000;

    //Menyatakan Kondisi
    //Jika waktupump Lebih dari 0
    if (waktupump > 0){
      
    //Maka Nyalakan Pompa Selama waktupump
    if (millis()- waktuterakhir4 > waktupump){
      waktuterakhir4 = millis();
      kondisipump =! kondisipump;
      digitalWrite(pin_pump, kondisipump);
    }
     
    }

    //Jika Waktu Pump Sama Dengan 0
    else if  (waktupump == 0){
      digitalWrite(pin_pump, HIGH);
    }

    //Mengirim Data ke Blynk

    
    if (millis() - waktuterakhir5 > 500) {
    waktuterakhir5 = millis();
    Blynk.virtualWrite(V1, t);
    Blynk.virtualWrite(V2, outputsensor);
    Blynk.virtualWrite(V3, fan);
    Blynk.virtualWrite(V4, pump);
    }
   
}
