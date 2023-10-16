#include <Wire.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ArduinoJson.h>
#include "distance_sensor.h"
#include "web_server.h"

const int trigPin = 4;
const int echoPin = 5;
const char* ssid = "your_WiFi_details"; 
const char* password = "and_the_WiFi_password"; 


WebServer server(80);


void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.print("192.168.0.61"); //this is the IP address you need to use on NauticApp when adding a devices
  Serial.println(WiFi.localIP());

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  server.on("/", HTTP_GET, handleRoot);
  server.on("/sensors", HTTP_GET, handleSensorData);
  server.begin();
}

void loop() {
  server.handleClient();
  delay(1000);
}
