#define LED 13

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, HIGHT);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}