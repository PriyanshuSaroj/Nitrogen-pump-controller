/*
#include <DHT.h>

//#define DHT11_PIN 7
//dht DHT;
int DHT11_PIN = 7;

int val;
//int tempPin = A0;
int fan = 7;

void setup()
{
 
  pinMode(fan,OUTPUT);
  digitalWrite(fan,LOW);
  Serial.begin(9600);
}
  

void loop()
{

  int chk = DHT.read(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(dht.temperature);
  Serial.print("Humidity = ");
  Serial.println(dht.humidity);
  delay(1000);
  Serial.begin(9600);
  
  //val = analogRead(tempPin);

  
  if(DHT.temperature>10)
  {
    digitalWrite(fan,HIGH);
  }
  
  else
  {
    digitalWrite(fan,LOW);
  }
  
  
}*/


#include <DHT.h>        // Include library
#define outPin 8        // Defines pin number to which the sensor is connected

DHT dht;                // Creates a dht object

void setup() {
	Serial.begin(9600);
}

void loop() {
	int readData = DHT.read11(outPin);

	float t = DHT.temperature;        // Read temperature
	float h = DHT.humidity;           // Read humidity

	Serial.print("Temperature = ");
	Serial.print(t);
	Serial.print("°C | ");
	Serial.print((t*9.0)/5.0+32.0);        // Convert celsius to fahrenheit
	Serial.println("°F ");
	Serial.print("Humidity = ");
	Serial.print(h);
	Serial.println("% ");
	Serial.println("");

	delay(2000); // wait two seconds
}