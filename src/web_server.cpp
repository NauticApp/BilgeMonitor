#include "web_server.h"
#include "distance_sensor.h"
#include <WebServer.h>
#include <ArduinoJson.h>

extern WebServer server;

void handleRoot() {
  String html = "<html><body>";
  html += "<h1 style='text-align:center;'>V-05 BilgeMonitoring (ESP32 WROOM 32D with the HC-SRD4 Sensor)</h1>";
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
