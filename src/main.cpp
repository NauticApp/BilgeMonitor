#include <Wire.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ArduinoJson.h>
#include "distance_sensor.h"
#include "web_server.h"

const int trigPin = 4;
const int echoPin = 5;

const char* ssid = ""; //your WiFi details
const char* password = ""; //and your WiFi password

WebServer server(80);

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.print("");// ESP32 IP i.e. 192.168.0.50
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
