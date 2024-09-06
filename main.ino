#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>

TinyGPSPlus gps;  // The TinyGPS++ object
SoftwareSerial mygps(D1, D2); // The serial connection to the GPS device

void setup() {
  Serial.begin(9600);
  mygps.begin(9600);
  Serial.println("GPS TESTING");
}

void loop() {
  while (mygps.available() > 0) {
    gps.encode(mygps.read());
    if (gps.location.isUpdated()) {
      Serial.print("Latitude= ");
      Serial.print(gps.location.lat(), 6);
      Serial.print(" Longitude= ");
      Serial.print(gps.location.lng(), 6);
      Serial.println();
    }
  }
}
