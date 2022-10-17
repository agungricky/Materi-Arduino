#define pin_button 8 //pengenalan pin button 1
#define pin_button2 7 //pengenalan pin button 2

//membaca button
#define ditekan digitalRead(pin_button)
#define ditekan2 digitalRead(pin_button2)

//Pengenaan Pin Led
#define led 9

void setup() {
//Mengenalkan Button Sebagai komponen Input
pinMode(pin_button, INPUT_PULLUP);
pinMode(pin_button2, INPUT_PULLUP);

//Mengatur Frekuensi Serial Monitor 9600
Serial.begin(9600);

//Mengenalkan Led Sebagai komponen OUTPUT
pinMode(led, OUTPUT);
}

void loop() {
//jika button 1 ditekan
if (!ditekan) {
Serial.println("BUTTON1 : DITEKAN");
digitalWrite(led, HIGH);
delay(3000);
} 

//Jika button 2 ditekan
else if (!ditekan2) {
Serial.println("BUTTON2 : DITEKAN");
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
} 

//Jika Semua Button Tidak di tekan
else {
  digitalWrite(led, LOW);
}

}
