#define CLOCK_PIN 13
#define OUTPUT_PINS 1
#define CLOCK_MS 150

void setup() {
  Serial.begin(9600);
  
  // OUTPUT
  pinMode(CLOCK_PIN, OUTPUT);
}

void loop() {
  // CLOCK HIGH
  digitalWrite(CLOCK_PIN, HIGH);
  delay(CLOCK_MS);

  // CLOCK LOW 
  digitalWrite(CLOCK_PIN, LOW);
  delay(CLOCK_MS);
}