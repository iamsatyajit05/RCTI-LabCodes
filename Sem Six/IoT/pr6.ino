#define LED 13
#define POT_METER A1

void setup() {
  pinMode(LED, OUTPUT); 
  pinMode(POT_METER, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  const potValue = analogRead(POT_METER); 
  Serial.println(potValue); 
//   delay(1000); 
  const pinValue = (255.0 / 1023.0) * potValue; 
  analogWrite(LED,pinValue); 
}
