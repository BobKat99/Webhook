
#define SENSOR_PIN          A0

void setup() {
    pinMode(SENSOR_PIN, INPUT);
}

void loop() {
    int val = analogRead(SENSOR_PIN);
    Particle.publish("Mois", String(val), PRIVATE);
    delay(3000);
}