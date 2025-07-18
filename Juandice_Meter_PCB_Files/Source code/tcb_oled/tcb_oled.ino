#define LED_PIN PA1
#define PHOTO_PIN PA4

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(PHOTO_PIN, INPUT); // Analog input

  Serial.begin(9600);
}

void loop() {
  // Turn on LED
  digitalWrite(LED_PIN, HIGH);
  delay(1000); // Let light reflect

  // Read analog reflectance
  int reflectance = analogRead(PHOTO_PIN);

  // Turn off LED
  digitalWrite(LED_PIN, LOW);

  // Print reflectance value
  Serial.print("Reflectance (analog): ");
  Serial.println(reflectance);

  delay(1000); // Wait before next measurement
}
