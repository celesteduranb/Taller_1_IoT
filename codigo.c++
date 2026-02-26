#define ADC_PIN 34
#define BTN_PIN 5
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(ADC_PIN, INPUT);
  pinMode(BTN_PIN, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation

  int analogVal = analogRead(ADC_PIN);
  Serial.println(analogVal);
  int butVal = digitalRead(BTN_PIN);
  Serial.println(butVal);
}