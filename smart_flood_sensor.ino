int floodPin = A0;
int redLED = 7;
int thresholdValue = 900;

void setup(){
  pinMode(floodPin, INPUT);
  pinMode(redLED, OUTPUT);
  digitalWrite(redLED, HIGH);
}

void loop() {
  int sensorValue = analogRead(floodPin);
  if(sensorValue < thresholdValue){
    digitalWrite(redLED, HIGH);
  }
  else {
    digitalWrite(redLED, LOW);
  }
  delay(500);
}
