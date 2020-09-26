
int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
pinMode (ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);
while(millis() <5000){
  sensorValue =analogRead(A0);
  if (sensorValue <sensorLow){
    sensorLow =sensorValue;
  }
}
digitalWrite(ledPin, LOW);
}


void loop() {
  sensorValue =analogRead(A0);
  int pitch =
  map(sensorValue, sensorLow, sensorHigh, 1000, 3000);
  tone(8, pitch, 30);

  delay(10);

}
