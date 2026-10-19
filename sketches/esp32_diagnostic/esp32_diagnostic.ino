
#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println();
  Serial.println("=========================");
  Serial.println("  ESP32 HARDWARE TEST");
  Serial.println("=========================");

  Serial.print("Chip: ");
  Serial.println(ESP.getChipModel());

  Serial.print("CPU Frequency: ");
  Serial.print(ESP.getCpuFreqMHz());
  Serial.println(" MHz");

  Serial.print("CPU Cores: ");
  Serial.println(ESP.getChipCores());

  Serial.print("Flash Size: ");
  Serial.println(ESP.getFlashChipSize());

  Serial.print("Free RAM: ");
  Serial.println(ESP.getFreeHeap());

  Serial.println("\nTesting WiFi...");

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(300);

  int networks = WiFi.scanNetworks();

  if (networks >= 0) {
    Serial.print("WiFi networks detected: ");
    Serial.println(networks);
  } else {
    Serial.println("WiFi scan failed!");
  }

  WiFi.scanDelete();
  Serial.println("\nDIAGNOSTIC RUNNING");
}

void loop() {
  Serial.print("ESP32 ALIVE | Uptime: ");
  Serial.print(millis() / 1000);
  Serial.print(" sec | Free RAM: ");
  Serial.println(ESP.getFreeHeap());

  delay(2000);
}
