void fuzzyrule(){

//--------------------------MMEMBUAT FUZZY RULE-----------------------------------------------------------------------    
//--------------------------------------------------------------------------------------------------------------------

//FuzzyRule11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_kering_1 = new FuzzyRuleAntecedent();
  dingin_kering_1->joinWithAND(dingin, kering);
  FuzzyRuleAntecedent *tengahmalam_1 = new FuzzyRuleAntecedent();
  tengahmalam_1->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_dingin_kering_tengahmalam_1 = new FuzzyRuleAntecedent();
  if_dingin_kering_tengahmalam_1->joinWithAND(dingin_kering_1, tengahmalam_1);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_1 = new FuzzyRuleConsequent();
  then_m_lama_1->addOutput(m);
  then_m_lama_1->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule01 = new FuzzyRule(1, if_dingin_kering_tengahmalam_1, then_m_lama_1);
  //Memasukan Fuzzy Rule 1 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule01);



  
//FuzzyRule22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_kering_2 = new FuzzyRuleAntecedent();
  dingin_kering_2->joinWithAND(dingin, kering);
  FuzzyRuleAntecedent *siang_1 = new FuzzyRuleAntecedent();
  siang_1->joinSingle(siang);
  FuzzyRuleAntecedent *if_dingin_kering_siang_2 = new FuzzyRuleAntecedent();
  if_dingin_kering_siang_2->joinWithAND(dingin_kering_2, siang_1);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_2 = new FuzzyRuleConsequent();
  then_m_lama_2->addOutput(m);
  then_m_lama_2->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule2 = new FuzzyRule(2,  if_dingin_kering_siang_2, then_m_lama_2);
  //Memasukan Fuzzy Rule 2 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule2);



  
//FuzzyRule3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_kering_3 = new FuzzyRuleAntecedent();
  dingin_kering_3->joinWithAND(dingin, kering);
  FuzzyRuleAntecedent *malam_1 = new FuzzyRuleAntecedent();
  malam_1->joinSingle(malam);
  FuzzyRuleAntecedent *if_dingin_kering_malam_3 = new FuzzyRuleAntecedent();
  if_dingin_kering_malam_3->joinWithAND(dingin_kering_3, malam_1);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_3 = new FuzzyRuleConsequent();
  then_m_lama_3->addOutput(m);
  then_m_lama_3->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule3 = new FuzzyRule(3,  if_dingin_kering_malam_3, then_m_lama_3);
  //Memasukan Fuzzy Rule 3 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule3);




//FuzzyRule4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_lembab_1 = new FuzzyRuleAntecedent();
  dingin_lembab_1->joinWithAND(dingin, lembab);
  FuzzyRuleAntecedent *tengahmalam_2 = new FuzzyRuleAntecedent();
  tengahmalam_2->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_dingin_lembab_tengahmalam_4 = new FuzzyRuleAntecedent();
  if_dingin_lembab_tengahmalam_4->joinWithAND(dingin_lembab_1, tengahmalam_2);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_4 = new FuzzyRuleConsequent();
  then_m_mati_4->addOutput(m);
  then_m_mati_4->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule4 = new FuzzyRule(4,  if_dingin_lembab_tengahmalam_4, then_m_mati_4);
  //Memasukan Fuzzy Rule 4 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule4);




//FuzzyRule5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_lembab_2 = new FuzzyRuleAntecedent();
  dingin_lembab_2->joinWithAND(dingin, lembab);
  FuzzyRuleAntecedent *siang_2 = new FuzzyRuleAntecedent();
  siang_2->joinSingle(siang);
  FuzzyRuleAntecedent *if_dingin_lembab_siang_5 = new FuzzyRuleAntecedent();
  if_dingin_lembab_siang_5->joinWithAND(dingin_lembab_2, siang_2);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_5 = new FuzzyRuleConsequent();
  then_m_mati_5->addOutput(m);
  then_m_mati_5->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule5 = new FuzzyRule(5,  if_dingin_lembab_siang_5, then_m_mati_5);
  //Memasukan Fuzzy Rule 5 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule5);




//FuzzyRule66666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_lembab_3 = new FuzzyRuleAntecedent();
  dingin_lembab_3->joinWithAND(dingin, lembab);
  FuzzyRuleAntecedent *malam_2 = new FuzzyRuleAntecedent();
  malam_2->joinSingle(malam);
  FuzzyRuleAntecedent *if_dingin_lembab_malam_6 = new FuzzyRuleAntecedent();
  if_dingin_lembab_malam_6->joinWithAND(dingin_lembab_3, malam_2);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_6 = new FuzzyRuleConsequent();
  then_m_mati_6->addOutput(m);
  then_m_mati_6->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule6 = new FuzzyRule(6,  if_dingin_lembab_malam_6, then_m_mati_6);
  //Memasukan Fuzzy Rule 6 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule6);


  

//FuzzyRule77777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_basah_1 = new FuzzyRuleAntecedent();
  dingin_basah_1->joinWithAND(dingin, basah);
  FuzzyRuleAntecedent *tengahmalam_3 = new FuzzyRuleAntecedent();
  tengahmalam_3->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_dingin_basah_tengahmalam_7 = new FuzzyRuleAntecedent();
  if_dingin_basah_tengahmalam_7->joinWithAND(dingin_basah_1, tengahmalam_3);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_7 = new FuzzyRuleConsequent();
  then_m_mati_7->addOutput(m);
  then_m_mati_7->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule7 = new FuzzyRule(7,  if_dingin_basah_tengahmalam_7, then_m_mati_7);
  //Memasukan Fuzzy Rule 7 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule7);




//FuzzyRule888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_basah_2 = new FuzzyRuleAntecedent();
  dingin_basah_2->joinWithAND(dingin, basah);
  FuzzyRuleAntecedent *siang_3 = new FuzzyRuleAntecedent();
  siang_3->joinSingle(siang);
  FuzzyRuleAntecedent *if_dingin_basah_siang_8 = new FuzzyRuleAntecedent();
  if_dingin_basah_siang_8->joinWithAND(dingin_basah_2, siang_3);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_8 = new FuzzyRuleConsequent();
  then_m_mati_8->addOutput(m);
  then_m_mati_8->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule8 = new FuzzyRule(8,  if_dingin_basah_siang_8, then_m_mati_8);
  //Memasukan Fuzzy Rule 8 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule8);




//FuzzyRule99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *dingin_basah_3 = new FuzzyRuleAntecedent();
  dingin_basah_3->joinWithAND(dingin, basah);
  FuzzyRuleAntecedent *malam_3 = new FuzzyRuleAntecedent();
  malam_3->joinSingle(malam);
  FuzzyRuleAntecedent *if_dingin_basah_malam_9 = new FuzzyRuleAntecedent();
  if_dingin_basah_malam_9->joinWithAND(dingin_basah_3, malam_3);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_9 = new FuzzyRuleConsequent();
  then_m_mati_9->addOutput(m);
  then_m_mati_9->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule9 = new FuzzyRule(9,  if_dingin_basah_malam_9, then_m_mati_9);
  //Memasukan Fuzzy Rule 9 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule9);




//FuzzyRule1111111111111111111111111111111111111111111111110000000000000000000000000000000000000000000000000000000000
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *normalmalam_kering_1 = new FuzzyRuleAntecedent();
  normalmalam_kering_1->joinWithAND(normalmalam, kering);
  FuzzyRuleAntecedent *tengahmalam_4 = new FuzzyRuleAntecedent();
  tengahmalam_4->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_normalmalam_kering_tengahmalam_10 = new FuzzyRuleAntecedent();
  if_normalmalam_kering_tengahmalam_10->joinWithAND(normalmalam_kering_1, tengahmalam_4);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_10 = new FuzzyRuleConsequent();
  then_m_lama_10->addOutput(s);
  then_m_lama_10->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule10 = new FuzzyRule(10,  if_normalmalam_kering_tengahmalam_10, then_m_lama_10);
  //Memasukan Fuzzy Rule 10 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule10);




//FuzzyRule1111111111111111111111111111111111111111111111--------111111111111111111111111111111111111111111111111111111
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *normalmalam_kering_2 = new FuzzyRuleAntecedent();
  normalmalam_kering_2->joinWithAND(normalmalam, kering);
  FuzzyRuleAntecedent *siang_4 = new FuzzyRuleAntecedent();
  siang_4->joinSingle(siang);
  FuzzyRuleAntecedent *if_normalmalam_kering_siang_11 = new FuzzyRuleAntecedent();
  if_normalmalam_kering_siang_11->joinWithAND(normalmalam_kering_2, siang_4);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_11 = new FuzzyRuleConsequent();
  then_m_lama_11->addOutput(m);
  then_m_lama_11->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule11 = new FuzzyRule(11,  if_normalmalam_kering_siang_11, then_m_lama_11);
  //Memasukan Fuzzy Rule 11 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule11);




//FuzzyRule11111111111111111111111111111111111111111111111111222222222222222222222222222222222222222222222222222222222222
  //Inisialisasai Fuzzy RuleAntencedent(Input Fuzzy)
  FuzzyRuleAntecedent *normalmalam_kering_3 = new FuzzyRuleAntecedent();
  normalmalam_kering_3->joinWithAND(normalmalam, kering);
  FuzzyRuleAntecedent *malam_4 = new FuzzyRuleAntecedent();
  malam_4->joinSingle(malam);
  FuzzyRuleAntecedent *if_normalmalam_kering_malam_12 = new FuzzyRuleAntecedent();
  if_normalmalam_kering_malam_12->joinWithAND(normalmalam_kering_3, malam_4);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_12 = new FuzzyRuleConsequent();
  then_m_lama_12->addOutput(s);
  then_m_lama_12->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule12 = new FuzzyRule(12,  if_normalmalam_kering_malam_12, then_m_lama_12);
  //Memasukan Fuzzy Rule 12 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule12);




//FuzzyRule1111111111111111111111111111111111111111111111111133333333333333333333333333333333333333333333333333333333333
  FuzzyRuleAntecedent *normalmalam_lembab_1 = new FuzzyRuleAntecedent();
  normalmalam_lembab_1->joinWithAND(normalmalam, lembab);
  FuzzyRuleAntecedent *tengahmalam_5 = new FuzzyRuleAntecedent();
  tengahmalam_5->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_normalmalam_lembab_tengahmalam_13 = new FuzzyRuleAntecedent();
  if_normalmalam_lembab_tengahmalam_13->joinWithAND(normalmalam_lembab_1, tengahmalam_5);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_13 = new FuzzyRuleConsequent();
  then_m_mati_13->addOutput(s);
  then_m_mati_13->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule13 = new FuzzyRule(13,  if_normalmalam_lembab_tengahmalam_13, then_m_mati_13);
  //Memasukan Fuzzy Rule 13 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule13);




//FuzzyRule111111111111111111111111111111111111111111111111114444444444444444444444444444444444444444444444444444444444
  FuzzyRuleAntecedent *normalmalam_lembab_2 = new FuzzyRuleAntecedent();
  normalmalam_lembab_2->joinWithAND(normalmalam, lembab);
  FuzzyRuleAntecedent *siang_5 = new FuzzyRuleAntecedent();
  siang_5->joinSingle(siang);
  FuzzyRuleAntecedent *if_normalmalam_lembab_siang_14 = new FuzzyRuleAntecedent();
  if_normalmalam_lembab_siang_14->joinWithAND(normalmalam_lembab_2, siang_5);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_14 = new FuzzyRuleConsequent();
  then_m_mati_14->addOutput(m);
  then_m_mati_14->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule14 = new FuzzyRule(14,  if_normalmalam_lembab_siang_14, then_m_mati_14);
  //Memasukan Fuzzy Rule 14 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule14);




//FuzzyRule1111111111111111111111111111111111111111111111111155555555555555555555555555555555555555555555555555555555555
  FuzzyRuleAntecedent *normalmalam_lembab_3 = new FuzzyRuleAntecedent();
  normalmalam_lembab_3->joinWithAND(normalmalam, lembab);
  FuzzyRuleAntecedent *malam_5 = new FuzzyRuleAntecedent();
  malam_5->joinSingle(malam);
  FuzzyRuleAntecedent *if_normalmalam_lembab_malam_15 = new FuzzyRuleAntecedent();
  if_normalmalam_lembab_malam_15->joinWithAND(normalmalam_lembab_3, malam_5);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_15 = new FuzzyRuleConsequent();
  then_m_mati_15->addOutput(s);
  then_m_mati_15->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule15 = new FuzzyRule(15,  if_normalmalam_lembab_malam_15, then_m_mati_15);
  //Memasukan Fuzzy Rule 15 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule15);




//FuzzyRule111111111111111111111111111111111111111111111111116666666666666666666666666666666666666666666666666666666666
  FuzzyRuleAntecedent *normalmalam_basah_1 = new FuzzyRuleAntecedent();
  normalmalam_basah_1->joinWithAND(normalmalam, basah);
  FuzzyRuleAntecedent *tengahmalam_6 = new FuzzyRuleAntecedent();
  tengahmalam_6->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_normalmalam_basah_tengahmalam_16 = new FuzzyRuleAntecedent();
  if_normalmalam_basah_tengahmalam_16->joinWithAND(normalmalam_basah_1, tengahmalam_6);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_16 = new FuzzyRuleConsequent();
  then_m_mati_16->addOutput(s);
  then_m_mati_16->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule16 = new FuzzyRule(16,  if_normalmalam_basah_tengahmalam_16, then_m_mati_16);
  //Memasukan Fuzzy Rule 16 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule16);




//FuzzyRule1111111111111111111111111111111111111111111111111177777777777777777777777777777777777777777777777777777777777
  FuzzyRuleAntecedent *normalmalam_basah_2 = new FuzzyRuleAntecedent();
  normalmalam_basah_2->joinWithAND(normalmalam, basah);
  FuzzyRuleAntecedent *siang_6 = new FuzzyRuleAntecedent();
  siang_6->joinSingle(siang);
  FuzzyRuleAntecedent *if_normalmalam_basah_siang_17 = new FuzzyRuleAntecedent();
  if_normalmalam_basah_siang_17->joinWithAND(normalmalam_basah_2, siang_6);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_17 = new FuzzyRuleConsequent();
  then_m_mati_17->addOutput(m);
  then_m_mati_17->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule17 = new FuzzyRule(17,  if_normalmalam_basah_siang_17, then_m_mati_17);
  //Memasukan Fuzzy Rule 17 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule17);




//FuzzyRule1111111111111111111111111111111111111111111111111188888888888888888888888888888888888888888888888888888888888
  FuzzyRuleAntecedent *normalmalam_basah_3 = new FuzzyRuleAntecedent();
  normalmalam_basah_3->joinWithAND(normalmalam, basah);
  FuzzyRuleAntecedent *malam_6 = new FuzzyRuleAntecedent();
  malam_6->joinSingle(malam);
  FuzzyRuleAntecedent *if_normalmalam_basah_malam_18 = new FuzzyRuleAntecedent();
  if_normalmalam_basah_malam_18->joinWithAND(normalmalam_basah_3, malam_6);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_18 = new FuzzyRuleConsequent();
  then_m_mati_18->addOutput(s);
  then_m_mati_18->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule18 = new FuzzyRule(18,  if_normalmalam_basah_malam_18, then_m_mati_18);
  //Memasukan Fuzzy Rule 18 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule18);




//FuzzyRule11111111111111111111111111111111111111111111111111999999999999999999999999999999999999999999999999999999999999
  FuzzyRuleAntecedent *hangat_kering_1 = new FuzzyRuleAntecedent();
  hangat_kering_1->joinWithAND(hangat, kering);
  FuzzyRuleAntecedent *tengahmalam_7 = new FuzzyRuleAntecedent();
  tengahmalam_7->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_hangat_kering_tengahmalam_19 = new FuzzyRuleAntecedent();
  if_hangat_kering_tengahmalam_19->joinWithAND(hangat_kering_1, tengahmalam_7);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_lama_19 = new FuzzyRuleConsequent();
  then_s_lama_19->addOutput(c);
  then_s_lama_19->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule19 = new FuzzyRule(19,  if_hangat_kering_tengahmalam_19, then_s_lama_19);
  //Memasukan Fuzzy Rule 19 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule19);




//FuzzyRule2222222222222222222222222222222222222222222220000000000000000000000000000000000000000000000000000000000000000000
  FuzzyRuleAntecedent *hangat_kering_2 = new FuzzyRuleAntecedent();
  hangat_kering_2->joinWithAND(hangat, kering);
  FuzzyRuleAntecedent *siang_7 = new FuzzyRuleAntecedent();
  siang_7->joinSingle(siang);
  FuzzyRuleAntecedent *if_hangat_kering_siang_20 = new FuzzyRuleAntecedent();
  if_hangat_kering_siang_20->joinWithAND(hangat_kering_2, siang_7);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_20 = new FuzzyRuleConsequent();
  then_m_lama_20->addOutput(m);
  then_m_lama_20->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule20 = new FuzzyRule(20,  if_hangat_kering_siang_20, then_m_lama_20);
  //Memasukan Fuzzy Rule 20 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule20);




//FuzzyRule2222222222222222222222222222222222222222222221111111111111111111111111111111111111111111111111111111111111111111
  FuzzyRuleAntecedent *hangat_kering_3 = new FuzzyRuleAntecedent();
  hangat_kering_3->joinWithAND(hangat, kering);
  FuzzyRuleAntecedent *malam_7 = new FuzzyRuleAntecedent();
  malam_7->joinSingle(malam);
  FuzzyRuleAntecedent *if_hangat_kering_malam_21 = new FuzzyRuleAntecedent();
  if_hangat_kering_malam_21->joinWithAND(hangat_kering_3, malam_7);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_lama_21 = new FuzzyRuleConsequent();
  then_s_lama_21->addOutput(c);
  then_s_lama_21->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule21 = new FuzzyRule(21,  if_hangat_kering_malam_21, then_s_lama_21);
  //Memasukan Fuzzy Rule 21 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule21);




//FuzzyRule222222222222222222222222222222222222222222-------22222222222222222222222222222222222222222222222222222222222222
  FuzzyRuleAntecedent *hangat_lembab_1 = new FuzzyRuleAntecedent();
  hangat_lembab_1->joinWithAND(hangat, lembab);
  FuzzyRuleAntecedent *tengahmalam_8 = new FuzzyRuleAntecedent();
  tengahmalam_8->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_hangat_lembab_tengahmalam_22 = new FuzzyRuleAntecedent();
  if_hangat_lembab_tengahmalam_22->joinWithAND(hangat_lembab_1, tengahmalam_8);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_mati_22 = new FuzzyRuleConsequent();
  then_s_mati_22->addOutput(c);
  then_s_mati_22->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule22 = new FuzzyRule(22,  if_hangat_lembab_tengahmalam_22, then_s_mati_22);
  //Memasukan Fuzzy Rule 22 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule22);




//FuzzyRule2222222222222222222222222222222222222222222222333333333333333333333333333333333333333333333333333333333333333333
  FuzzyRuleAntecedent *hangat_lembab_2 = new FuzzyRuleAntecedent();
  hangat_lembab_2->joinWithAND(hangat, lembab);
  FuzzyRuleAntecedent *siang_8 = new FuzzyRuleAntecedent();
  siang_8->joinSingle(siang);
  FuzzyRuleAntecedent *if_hangat_lembab_siang_23 = new FuzzyRuleAntecedent();
  if_hangat_lembab_siang_23->joinWithAND(hangat_lembab_2, siang_8);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_23 = new FuzzyRuleConsequent();
  then_m_mati_23->addOutput(m);
  then_m_mati_23->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule23 = new FuzzyRule(23,  if_hangat_lembab_siang_23, then_m_mati_23);
  //Memasukan Fuzzy Rule 23 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule23);




//FuzzyRule2222222222222222222222222222222222222222222222444444444444444444444444444444444444444444444444444444444444444444
  FuzzyRuleAntecedent *hangat_lembab_3 = new FuzzyRuleAntecedent();
  hangat_lembab_3->joinWithAND(hangat, lembab);
  FuzzyRuleAntecedent *malam_8 = new FuzzyRuleAntecedent();
  malam_8->joinSingle(malam);
  FuzzyRuleAntecedent *if_hangat_lembab_malam_24 = new FuzzyRuleAntecedent();
  if_hangat_lembab_malam_24->joinWithAND(hangat_lembab_3, malam_8);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_mati_24 = new FuzzyRuleConsequent();
  then_s_mati_24->addOutput(c);
  then_s_mati_24->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule24 = new FuzzyRule(24,  if_hangat_lembab_malam_24, then_s_mati_24);
  //Memasukan Fuzzy Rule 24 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule24);
  



//FuzzyRule222222222222222222222222222222222222222222222255555555555555555555555555555555555555555555555555555555555555555
  FuzzyRuleAntecedent *hangat_basah_1 = new FuzzyRuleAntecedent();
  hangat_basah_1->joinWithAND(hangat, basah);
  FuzzyRuleAntecedent *tengahmalam_9 = new FuzzyRuleAntecedent();
  tengahmalam_9->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_hangat_basah_tengahmalam_25 = new FuzzyRuleAntecedent();
  if_hangat_basah_tengahmalam_25->joinWithAND(hangat_basah_1, tengahmalam_9);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_mati_25 = new FuzzyRuleConsequent();
  then_s_mati_25->addOutput(c);
  then_s_mati_25->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule25 = new FuzzyRule(25,  if_hangat_basah_tengahmalam_25, then_s_mati_25);
  //Memasukan Fuzzy Rule 25 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule25);




//FuzzyRule222222222222222222222222222222222222222222222266666666666666666666666666666666666666666666666666666666666666666
  FuzzyRuleAntecedent *hangat_basah_2 = new FuzzyRuleAntecedent();
  hangat_basah_2->joinWithAND(hangat, basah);
  FuzzyRuleAntecedent *siang_9 = new FuzzyRuleAntecedent();
  siang_9->joinSingle(siang);
  FuzzyRuleAntecedent *if_hangat_basah_siang_26 = new FuzzyRuleAntecedent();
  if_hangat_basah_siang_26->joinWithAND(hangat_basah_2, siang_9);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_26 = new FuzzyRuleConsequent();
  then_m_mati_26->addOutput(m);
  then_m_mati_26->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule26 = new FuzzyRule(26,  if_hangat_basah_siang_26, then_m_mati_26);
  //Memasukan Fuzzy Rule 26 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule26);




//FuzzyRule22222222222222222222222222222222222222222222227777777777777777777777777777777777777777777777777777777777777777
  FuzzyRuleAntecedent *hangat_basah_3 = new FuzzyRuleAntecedent();
  hangat_basah_3->joinWithAND(hangat, basah);
  FuzzyRuleAntecedent *malam_9 = new FuzzyRuleAntecedent();
  malam_9->joinSingle(malam);
  FuzzyRuleAntecedent *if_hangat_basah_malam_27 = new FuzzyRuleAntecedent();
  if_hangat_basah_malam_27->joinWithAND(hangat_basah_3, malam_9);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_mati_27 = new FuzzyRuleConsequent();
  then_s_mati_27->addOutput(c);
  then_s_mati_27->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule27 = new FuzzyRule(27,  if_hangat_basah_malam_27, then_s_mati_27);
  //Memasukan Fuzzy Rule 27 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule27);




//FuzzyRule222222222222222222222222222222222222222222222288888888888888888888888888888888888888888888888888888888888888888
  FuzzyRuleAntecedent *normalsiang_kering_1 = new FuzzyRuleAntecedent();
  normalsiang_kering_1->joinWithAND(normalsiang, kering);
  FuzzyRuleAntecedent *tengahmalam_10 = new FuzzyRuleAntecedent();
  tengahmalam_10->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_normalsiang_kering_tengahmalam_28 = new FuzzyRuleAntecedent();
  if_normalsiang_kering_tengahmalam_28->joinWithAND(normalsiang_kering_1, tengahmalam_10);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_lama_28 = new FuzzyRuleConsequent();
  then_c_lama_28->addOutput(c);
  then_c_lama_28->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule28 = new FuzzyRule(28,  if_normalsiang_kering_tengahmalam_28, then_c_lama_28);
  //Memasukan Fuzzy Rule 28 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule28);




//FuzzyRule22222222222222222222222222222222222222222222229999999999999999999999999999999999999999999999999999999999999999
  FuzzyRuleAntecedent *normalsiang_kering_2 = new FuzzyRuleAntecedent();
  normalsiang_kering_2->joinWithAND(normalsiang, kering);
  FuzzyRuleAntecedent *siang_10 = new FuzzyRuleAntecedent();
  siang_10->joinSingle(siang);
  FuzzyRuleAntecedent *if_normalsiang_kering_siang_29 = new FuzzyRuleAntecedent();
  if_normalsiang_kering_siang_29->joinWithAND(normalsiang_kering_2, siang_10);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_lama_29 = new FuzzyRuleConsequent();
  then_m_lama_29->addOutput(s);
  then_m_lama_29->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule29 = new FuzzyRule(29,  if_normalsiang_kering_siang_29, then_m_lama_29);
  //Memasukan Fuzzy Rule 29 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule29);




//FuzzyRule33333333333333333333333333333333333333333333300000000000000000000000000000000000000000000000000000000000000000
  FuzzyRuleAntecedent *normalsiang_kering_3 = new FuzzyRuleAntecedent();
  normalsiang_kering_3->joinWithAND(normalsiang, kering);
  FuzzyRuleAntecedent *malam_10 = new FuzzyRuleAntecedent();
  malam_10->joinSingle(malam);
  FuzzyRuleAntecedent *if_normalsiang_kering_malam_30 = new FuzzyRuleAntecedent();
  if_normalsiang_kering_malam_30->joinWithAND(normalsiang_kering_3, malam_10);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_lama_30 = new FuzzyRuleConsequent();
  then_c_lama_30->addOutput(c);
  then_c_lama_30->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule30 = new FuzzyRule(30,  if_normalsiang_kering_malam_30, then_c_lama_30);
  //Memasukan Fuzzy Rule 30 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule30);




//FuzzyRule3333333333333333333333333333333333333333333331111111111111111111111111111111111111111111111111111111111111111
  FuzzyRuleAntecedent *normalsiang_lembab_1 = new FuzzyRuleAntecedent();
  normalsiang_lembab_1->joinWithAND(normalsiang, lembab);
  FuzzyRuleAntecedent *tengahmalam_11 = new FuzzyRuleAntecedent();
  tengahmalam_11->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_normalsiang_lembab_tengahmalam_31 = new FuzzyRuleAntecedent();
  if_normalsiang_lembab_tengahmalam_31->joinWithAND(normalsiang_lembab_1, tengahmalam_11);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_31 = new FuzzyRuleConsequent();
  then_c_mati_31->addOutput(c);
  then_c_mati_31->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule31 = new FuzzyRule(31,  if_normalsiang_lembab_tengahmalam_31, then_c_mati_31);
  //Memasukan Fuzzy Rule 31 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule31);




//FuzzyRule333333333333333333333333333333333333333333333222222222222222222222222222222222222222222222222222222222222222
  FuzzyRuleAntecedent *normalsiang_lembab_2 = new FuzzyRuleAntecedent();
  normalsiang_lembab_2->joinWithAND(normalsiang, lembab);
  FuzzyRuleAntecedent *siang_11 = new FuzzyRuleAntecedent();
  siang_11->joinSingle(siang);
  FuzzyRuleAntecedent *if_normalsiang_lembab_siang_32 = new FuzzyRuleAntecedent();
  if_normalsiang_lembab_siang_32->joinWithAND(normalsiang_lembab_2, siang_11);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_32 = new FuzzyRuleConsequent();
  then_m_mati_32->addOutput(s);
  then_m_mati_32->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule32 = new FuzzyRule(32,  if_normalsiang_lembab_siang_32, then_m_mati_32);
  //Memasukan Fuzzy Rule 32 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule32);




//FuzzyRule333333333333333333333333333333333333333-----3333333333333333333333333333333333333333333333333333333333333333
  FuzzyRuleAntecedent *normalsiang_lembab_3 = new FuzzyRuleAntecedent();
  normalsiang_lembab_3->joinWithAND(normalsiang, lembab);
  FuzzyRuleAntecedent *malam_11 = new FuzzyRuleAntecedent();
  malam_11->joinSingle(malam);
  FuzzyRuleAntecedent *if_normalsiang_lembab_malam_33 = new FuzzyRuleAntecedent();
  if_normalsiang_lembab_malam_33->joinWithAND(normalsiang_lembab_3, malam_11);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_33 = new FuzzyRuleConsequent();
  then_c_mati_33->addOutput(c);
  then_c_mati_33->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule33 = new FuzzyRule(33,  if_normalsiang_lembab_malam_33, then_c_mati_33);
  //Memasukan Fuzzy Rule 33 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule33);\




//FuzzyRule333333333333333333333333333333333333333333333444444444444444444444444444444444444444444444444444444444444444
  FuzzyRuleAntecedent *normalsiang_basah_1 = new FuzzyRuleAntecedent();
  normalsiang_basah_1->joinWithAND(normalsiang, basah);
  FuzzyRuleAntecedent *tengahmalam_12 = new FuzzyRuleAntecedent();
  tengahmalam_12->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_normalsiang_basah_tengahmalam_34 = new FuzzyRuleAntecedent();
  if_normalsiang_basah_tengahmalam_34->joinWithAND(normalsiang_basah_1, tengahmalam_12);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_34 = new FuzzyRuleConsequent();
  then_c_mati_34->addOutput(c);
  then_c_mati_34->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule34 = new FuzzyRule(34,  if_normalsiang_basah_tengahmalam_34, then_c_mati_34);
  //Memasukan Fuzzy Rule 34 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule34);




//FuzzyRule3333333333333333333333333333333333333333333335555555555555555555555555555555555555555555555555555555555555
  FuzzyRuleAntecedent *normalsiang_basah_2 = new FuzzyRuleAntecedent();
  normalsiang_basah_2->joinWithAND(normalsiang, basah);
  FuzzyRuleAntecedent *siang_12 = new FuzzyRuleAntecedent();
  siang_12->joinSingle(siang);
  FuzzyRuleAntecedent *if_normalsiang_basah_siang_35 = new FuzzyRuleAntecedent();
  if_normalsiang_basah_siang_35->joinWithAND(normalsiang_basah_2, siang_12);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_m_mati_35 = new FuzzyRuleConsequent();
  then_m_mati_35->addOutput(s);
  then_m_mati_35->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule35 = new FuzzyRule(35,  if_normalsiang_basah_siang_35, then_m_mati_35);
  //Memasukan Fuzzy Rule 35 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule35);




//FuzzyRule333333333333333333333333333333333333333333333666666666666666666666666666666666666666666666666666666666666
  FuzzyRuleAntecedent *normalsiang_basah_3 = new FuzzyRuleAntecedent();
  normalsiang_basah_3->joinWithAND(normalsiang, basah);
  FuzzyRuleAntecedent *malam_12 = new FuzzyRuleAntecedent();
  malam_12->joinSingle(malam);
  FuzzyRuleAntecedent *if_normalsiang_basah_malam_36 = new FuzzyRuleAntecedent();
  if_normalsiang_basah_malam_36->joinWithAND(normalsiang_basah_3, malam_12);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_36 = new FuzzyRuleConsequent();
  then_c_mati_36->addOutput(c);
  then_c_mati_36->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule36 = new FuzzyRule(36,  if_normalsiang_basah_malam_36, then_c_mati_36);
  //Memasukan Fuzzy Rule 36 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule36);





//FuzzyRule33333333333333333333333333333333333333333333377777777777777777777777777777777777777777777777777777777777
  FuzzyRuleAntecedent *panas_kering_1 = new FuzzyRuleAntecedent();
  panas_kering_1->joinWithAND(panas, kering);
  FuzzyRuleAntecedent *tengahmalam_13 = new FuzzyRuleAntecedent();
  tengahmalam_13->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_panas_kering_tengahmalam_37 = new FuzzyRuleAntecedent();
  if_panas_kering_tengahmalam_37->joinWithAND(panas_kering_1, tengahmalam_13);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_lama_37 = new FuzzyRuleConsequent();
  then_c_lama_37->addOutput(c);
  then_c_lama_37->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule37 = new FuzzyRule(37,  if_panas_kering_tengahmalam_37, then_c_lama_37);
  //Memasukan Fuzzy Rule 37 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule37);




//FuzzyRule3333333333333333333333333333333333333333333338888888888888888888888888888888888888888888888888888888888
  FuzzyRuleAntecedent *panas_kering_2 = new FuzzyRuleAntecedent();
  panas_kering_2->joinWithAND(panas, kering);
  FuzzyRuleAntecedent *siang_13 = new FuzzyRuleAntecedent();
  siang_13->joinSingle(siang);
  FuzzyRuleAntecedent *if_panas_kering_siang_38 = new FuzzyRuleAntecedent();
  if_panas_kering_siang_38->joinWithAND(panas_kering_2, siang_13);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_lama_38 = new FuzzyRuleConsequent();
  then_s_lama_38->addOutput(c);
  then_s_lama_38->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule38 = new FuzzyRule(38,  if_panas_kering_siang_38, then_s_lama_38);
  //Memasukan Fuzzy Rule 38 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule38); 




//FuzzyRule333333333333333333333333333333333333333333333999999999999999999999999999999999999999999999999999999999
  FuzzyRuleAntecedent *panas_kering_3 = new FuzzyRuleAntecedent();
  panas_kering_3->joinWithAND(panas, kering);
  FuzzyRuleAntecedent *malam_13 = new FuzzyRuleAntecedent();
  malam_13->joinSingle(malam);
  FuzzyRuleAntecedent *if_panas_kering_malam_39 = new FuzzyRuleAntecedent();
  if_panas_kering_malam_39->joinWithAND(panas_kering_3, malam_13);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_lama_39 = new FuzzyRuleConsequent();
  then_c_lama_39->addOutput(c);
  then_c_lama_39->addOutput(lama);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule39 = new FuzzyRule(39,  if_panas_kering_malam_39, then_c_lama_39);
  //Memasukan Fuzzy Rule 39 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule39);   




//FuzzyRule444444444444444444444444444444444444444444444400000000000000000000000000000000000000000000000000000000
  FuzzyRuleAntecedent *panas_lembab_1 = new FuzzyRuleAntecedent();
  panas_lembab_1->joinWithAND(panas, lembab);
  FuzzyRuleAntecedent *tengahmalam_14 = new FuzzyRuleAntecedent();
  tengahmalam_14->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_panas_lembab_tengahmalam_40 = new FuzzyRuleAntecedent();
  if_panas_lembab_tengahmalam_40->joinWithAND(panas_lembab_1, tengahmalam_14);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_40 = new FuzzyRuleConsequent();
  then_c_mati_40->addOutput(c);
  then_c_mati_40->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule40 = new FuzzyRule(40,  if_panas_lembab_tengahmalam_40, then_c_mati_40);
  //Memasukan Fuzzy Rule 40 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule40);   




//FuzzyRule4444444444444444444444444444444444444444444444111111111111111111111111111111111111111111111111111111111
  FuzzyRuleAntecedent *panas_lembab_2 = new FuzzyRuleAntecedent();
  panas_lembab_2->joinWithAND(panas, lembab);
  FuzzyRuleAntecedent *siang_14 = new FuzzyRuleAntecedent();
  siang_14->joinSingle(siang);
  FuzzyRuleAntecedent *if_panas_lembab_siang_41 = new FuzzyRuleAntecedent();
  if_panas_lembab_siang_41->joinWithAND(panas_lembab_2, siang_14);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_s_sedang_41 = new FuzzyRuleConsequent();
  then_s_sedang_41->addOutput(c);
  then_s_sedang_41->addOutput(sedang);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule41 = new FuzzyRule(41,  if_panas_lembab_siang_41, then_s_sedang_41);
  //Memasukan Fuzzy Rule 41 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule41);
  



//FuzzyRule444444444444444444444444444444444444444444444422222222222222222222222222222222222222222222222222222222
  FuzzyRuleAntecedent *panas_lembab_3 = new FuzzyRuleAntecedent();
  panas_lembab_3->joinWithAND(panas, lembab);
  FuzzyRuleAntecedent *malam_14 = new FuzzyRuleAntecedent();
  malam_14->joinSingle(malam);
  FuzzyRuleAntecedent *if_panas_lembab_malam_42 = new FuzzyRuleAntecedent();
  if_panas_lembab_malam_42->joinWithAND(panas_lembab_3, malam_14);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_42 = new FuzzyRuleConsequent();
  then_c_mati_42->addOutput(c);
  then_c_mati_42->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule42 = new FuzzyRule(42,  if_panas_lembab_malam_42, then_c_mati_42);
  //Memasukan Fuzzy Rule 42 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule42);




//FuzzyRule44444444444444444444444444444444444444444444443333333333333333333333333333333333333333333333333333333
  FuzzyRuleAntecedent *panas_basah_1 = new FuzzyRuleAntecedent();
  panas_basah_1->joinWithAND(panas, basah);
  FuzzyRuleAntecedent *tengahmalam_15 = new FuzzyRuleAntecedent();
  tengahmalam_15->joinSingle(tengahmalam);
  FuzzyRuleAntecedent *if_panas_basah_tengahmalam_43 = new FuzzyRuleAntecedent();
  if_panas_basah_tengahmalam_43->joinWithAND(panas_basah_1, tengahmalam_15);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_43 = new FuzzyRuleConsequent();
  then_c_mati_43->addOutput(c);
  then_c_mati_43->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule43 = new FuzzyRule(43,  if_panas_basah_tengahmalam_43, then_c_mati_43);
  //Memasukan Fuzzy Rule 43 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule43);




//FuzzyRule44444444444444444444444444444444--------444444444444444444444444444444444444444444444444444444444444
  FuzzyRuleAntecedent *panas_basah_2 = new FuzzyRuleAntecedent();
  panas_basah_2->joinWithAND(panas, basah);
  FuzzyRuleAntecedent *siang_15 = new FuzzyRuleAntecedent();
  siang_15->joinSingle(siang);
  FuzzyRuleAntecedent *if_panas_basah_siang_44 = new FuzzyRuleAntecedent();
  if_panas_basah_siang_44->joinWithAND(panas_basah_2, siang_15);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
    FuzzyRuleConsequent *then_s_mati_44 = new FuzzyRuleConsequent();
  then_s_mati_44->addOutput(c);
  then_s_mati_44->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule44 = new FuzzyRule(44,  if_panas_basah_siang_44, then_s_mati_44);
  //Memasukan Fuzzy Rule 44 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule44);




//FuzzyRule44444444444444444444444444444444444444455555555555555555555555555555555555555555555555555555555555555
  FuzzyRuleAntecedent *panas_basah_3 = new FuzzyRuleAntecedent();
  panas_basah_3->joinWithAND(panas, basah);
  FuzzyRuleAntecedent *malam_15 = new FuzzyRuleAntecedent();
  malam_15->joinSingle(malam);
  FuzzyRuleAntecedent *if_panas_basah_malam_45 = new FuzzyRuleAntecedent();
  if_panas_basah_malam_45->joinWithAND(panas_basah_3, malam_15);

  //Inisialisasai Fuzzy RuleConsequent(Output Fuzzy)
  FuzzyRuleConsequent *then_c_mati_45 = new FuzzyRuleConsequent();
  then_c_mati_45->addOutput(c);
  then_c_mati_45->addOutput(mati);
  
  //Inisialisasi Fuzzy Rule
  FuzzyRule *fuzzyRule45 = new FuzzyRule(45,  if_panas_basah_malam_45, then_c_mati_45);
  //Memasukan Fuzzy Rule 45 ke Dalam Logika Fuzzy
  fuzzy->addFuzzyRule(fuzzyRule45);
    
}
