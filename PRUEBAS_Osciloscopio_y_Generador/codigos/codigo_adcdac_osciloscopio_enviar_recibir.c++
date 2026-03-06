#include <math.h>

#define SINE   0
#define SQUARE 1

int waveType = SINE;

const int DAC_PIN = 26;
const int POT_FREQ = 34;
const int POT_AMP  = 35;

float phase = 0;
unsigned long lastMicros = 0;

void setup() {
  Serial.begin(115200);
  pinMode(DAC_PIN, OUTPUT);
  lastMicros = micros();
}

void loop() {

  // Leer potenciómetros
  int rawFreq = analogRead(POT_FREQ);
  int rawAmp  = analogRead(POT_AMP);

  // Mapear valores
  float frequency = map(rawFreq, 0, 4095, 1, 1000);   // Hz
  float amplitude = map(rawAmp,  0, 4095, 0, 255);    // DAC 8 bits

  // Calcular tiempo transcurrido
  unsigned long now = micros();
  float dt = (now - lastMicros) / 1000000.0;
  lastMicros = now;

  // Avanzar fase
  phase += 2 * PI * frequency * dt;
  if (phase > 2 * PI) phase -= 2 * PI;

  uint8_t outputValue;

  if (waveType == SINE) {
    float s = sin(phase);        // -1 a 1
    s = (s + 1) * 0.5;           // 0 a 1
    outputValue = s * amplitude;
  } 
  else {  // SQUARE
    if (sin(phase) >= 0)
      outputValue = amplitude;
    else
      outputValue = 0;
  }

  dacWrite(DAC_PIN, outputValue);
  Serial.print("amplitude:");
  Serial.println(amplitude);
  Serial.print("frequency:");
  Serial.println(frequency);
  Serial.print("outputValue:");
  Serial.println(outputValue);
  delayMicroseconds(500);
  
}