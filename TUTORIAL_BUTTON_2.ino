/*
   TUTORIAL PUSH BUTTON PADA ARDUINO
   PUSH BUTTON DAN LED

   Pinout :
   Tombol 1 -> D9
   Tombol 2 -> D8

   D4 -> Led Merah
   D5 -> Led Hijau
   D6 -> Led Biru
   D7 -> Led Kuning
*/

#define TOMBOL1 9
#define TOMBOL2 8

#define merah 4
#define hijau 5
#define biru 6
#define kuning 7

void setup()
{
  pinMode(TOMBOL1, INPUT); //set menjadi input
  pinMode(TOMBOL2, INPUT); //set menjadi input
  pinMode(kuning, OUTPUT);
  pinMode(biru, OUTPUT);
  digitalWrite(TOMBOL1, HIGH); //pull high sebagai default awal
  digitalWrite(TOMBOL2, HIGH); //pull high sebagai default awal
}

void loop()
{
  int a = digitalRead(TOMBOL1);
  int b = digitalRead(TOMBOL2);
  //ditekan nilai menjadi 0 (LOW)
  if (a == 0) {
    digitalWrite(kuning, HIGH);
  } else {
    digitalWrite(kuning, LOW);
  }
  if (b == 0) {
    digitalWrite(biru, HIGH);
  } else {
    digitalWrite(biru, LOW);
  }
  delay(100);

}
