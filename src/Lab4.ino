SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D7, INPUT);
  pinMode(D5, OUTPUT);
}
void loop() {
  digitalWrite(D5, digitalRead(D7));
}