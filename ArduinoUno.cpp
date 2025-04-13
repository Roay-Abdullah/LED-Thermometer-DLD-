#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
Adafruit_SSD1306 display(128, 64, &Wire, -1);

// LED pins
const int greenPin = 3;
const int yellowPin = 4;
const int redPin = 5;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.print("Temp: ");
  display.print(temp);
  display.print(" C");
  display.display();

  // Control LEDs based on temperature
  if (temp <= 25) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  } else if (temp > 25 && temp <= 30) {
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
  } else {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
  }
  delay(2000);
}
