#define CLOCK_PIN 13
#define INPUT_PINS 8
#define OUTPUT_PINS 1
#define CLOCK_MS 150

int inputs[INPUT_PINS] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  Serial.begin(9600);

  // INPUT 
  for (int i = 0; i<INPUT_PINS; i++) {
    pinMode(inputs[i], INPUT);
  }
  
  // OUTPUT
  pinMode(CLOCK_PIN, OUTPUT);
}

void loop() {
  // CLOCK HIGH
  digitalWrite(CLOCK_PIN, HIGH);
  delay(CLOCK_MS);

  // INPUT ACTION
  for(int i = INPUT_PINS - 1; i >= 0; i--) {
    Serial.print(digitalRead)
  }

  // CLOCK LOW 
  digitalWrite(CLOCK_PIN, LOW);
  delay(CLOCK_MS);
}