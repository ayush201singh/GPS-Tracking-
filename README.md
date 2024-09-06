# GPS-Tracking-

This project involves using an ESP8266 microcontroller to interface with a GPS module for real-time location tracking. The code leverages the TinyGPS++ library to parse raw GPS data, extracting latitude and longitude coordinates. Communication between the ESP8266 and GPS module is handled through software serial using the `SoftwareSerial` library on digital pins D1 and D2. In the loop, the code checks for available GPS data, encodes it, and displays the updated coordinates in the Serial Monitor. This project is ideal for applications requiring accurate, real-time location tracking, such as GPS-based navigation, asset tracking, or geolocation services.

