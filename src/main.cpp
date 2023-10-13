#include <Wire.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ArduinoJson.h>

const int trigPin = 4;
const int echoPin = 5;

const char* ssid = "";
const char* password = "";

const int esp32Port = 80;

WebServer server(esp32Port);

float readDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH);
  float distanceCentimeters = (duration / 2.0) * 0.0343; // Convert to centimeters

  return distanceCentimeters;
}

void handleRoot() {
  String html = "<html><body>";
  html += "<h1 style='text-align:center;'>BilgeMonitoring (ESP32 WROOM 32D with the HC-SRD4 Sensor)</h1>";
  html += "<div style='text-align:center;'>";
  html += "<h2>Distance</h2>";
  html += "<p id='distance' style='font-size:48px;'></p>";
  html += "</div>";
  html += "<script>";
  html += "setInterval(updateSensorReadings, 2000);";
  html += "function updateSensorReadings() {";
  html += "  fetch('/sensors')";
  html += "    .then(response => response.json())";
  html += "    .then(data => {";
  html += "      document.getElementById('distance').textContent = data.Distance.toFixed(1) + ' cm';";
  html += "    });";
  html += "}";
  html += "</script>";
  html += "</body></html>";

  server.send(200, "text/html", html);
}

void handleSensorData() {
  String data = "{\"Distance\": " + String(readDistance(), 1) + "}";
  server.send(200, "application/json", data);
}

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.print("your ip");
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
