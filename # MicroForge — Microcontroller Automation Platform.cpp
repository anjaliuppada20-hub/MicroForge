// MicroForge.ino
#define RELAY_PIN 5
#define SENSOR_PIN 34

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);

  Serial.println("MicroForge Started");
}

void loop() {
  int sensor = analogRead(SENSOR_PIN);

  Serial.print("Sensor: ");
  Serial.println(sensor);

  if (sensor > 2500) {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Relay: ON");
  } else {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Relay: OFF");
  }

  delay(1000);
}
