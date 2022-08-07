void fuzzyset(){

//Inisialisasi Fuzzy Input

  //Inisialisasi Fuzzy Input Suhu
  FuzzyInput *suhu = new FuzzyInput(1);
  suhu->addFuzzySet(dingin);
  suhu->addFuzzySet(normalmalam);
  suhu->addFuzzySet(hangat);
  suhu->addFuzzySet(normalsiang);
  suhu->addFuzzySet(panas);
  //Memasukan Data dari Fuzzy Input ke Dalam Logika Fuzzy
  fuzzy->addFuzzyInput(suhu);
  

  //Inisialisasi Fuzzy Input Kelembaban Tanah
  FuzzyInput *kelembaban = new FuzzyInput(2);
  kelembaban->addFuzzySet(kering);
  kelembaban->addFuzzySet(lembab);
  kelembaban->addFuzzySet(basah);
  //Memasukan Data dari Fuzzy Input ke Dalam Logika Fuzzy
  fuzzy->addFuzzyInput(kelembaban);


   //Inisialisasi Fuzzy Input Waktu
  FuzzyInput *waktu = new FuzzyInput(3);
  waktu->addFuzzySet(tengahmalam);
  waktu->addFuzzySet(siang);
  waktu->addFuzzySet(malam);
  //Memasukan Data dari Fuzzy Input ke Dalam Logika Fuzzy
  fuzzy->addFuzzyInput(waktu);


  
  
//Inisialisasi Fuzzy Output

  //Inisialisasi Fuzzy Output Kipas
  FuzzyOutput *kipas = new FuzzyOutput(1);
  kipas->addFuzzySet(m);
  kipas->addFuzzySet(s);
  kipas->addFuzzySet(c);
  //Memasukan Data dari Fuzzy Output ke Dalam Logika Fuzzy
  fuzzy->addFuzzyOutput(kipas);


  //Inisialisasi Fuzzy Output Pompa
  FuzzyOutput *pompa = new FuzzyOutput(2);
  pompa->addFuzzySet(mati);
  pompa->addFuzzySet(sedang);
  pompa->addFuzzySet(lama);
  //Memasukan Data dari Fuzzy Output ke Dalam Logika Fuzzy
  fuzzy->addFuzzyOutput(pompa);

}
