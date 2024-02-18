#include <DHT.h>

#define DHTPIN 2 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
	dht.begin();
    Serial.begin(9600);
}

void loop() {
    float hum = dht.readHumidity();
    float temp= dht.readTemperature();

    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");

    delay(2000);
}