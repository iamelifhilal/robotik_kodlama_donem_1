// C++ code
//
void setup()//Bir Sefer Çalışır.
{
  for(int sayac=2;sayac<=6;sayac++) {
    pinMode(sayac,OUTPUT);
  }
}

void loop()
{
  for(int sayac =2; sayac<=6;sayac++){
  digitalWrite(sayac,1);
  delay(100);
  digitalWrite(sayac,0);
  delay(100); 
 } 
   for(int sayac =6; sayac>=2;sayac--){
  digitalWrite(sayac,1);
  delay(100);
  digitalWrite(sayac,0);
  delay(100); 
 } 
}