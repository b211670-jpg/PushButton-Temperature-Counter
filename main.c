#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tempPin = A0;
int buttonPin = 8;

int count = 0;
int lastButtonState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);

  lcd.print("Temp & Counter");
}void loop() {
  int buttonState = digitalRead(buttonPin);

  // Detect button press
  if (buttonState == HIGH && lastButtonState == LOW) {
    count++;
    delay(200);  // debounce
  }
  lastButtonState = buttonState;

  int sensorValue = analogRead(tempPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100;

  lcd.setCursor(0, 1);
  lcd.print("T:");
  lcd.print(temperature);
  lcd.print(" C ");

  lcd.print("C:");
  lcd.print(count);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C | Count: ");
  Serial.println(count);

  delay(500);
}
