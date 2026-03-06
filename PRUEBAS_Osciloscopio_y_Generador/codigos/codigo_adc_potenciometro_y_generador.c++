const int ADC_PIN = 25;
const int DAC_PIN = 26;

void setup() {
  Serial.begin(115200);
  pinMode(ADC_PIN, INPUT);
  pinMode(DAC_PIN, OUTPUT);
}

void loop() {
  int analog_signal = analogRead(ADC_PIN);
  Serial.print("ADC:");
  Serial.println(analog_signal);

}
