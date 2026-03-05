int boton = 4;
int rele = 23;

void setup() {
  pinMode(boton, INPUT_PULLUP);
  pinMode(rele, OUTPUT);
}

void loop() {

  if (digitalRead(boton) == LOW) {
    digitalWrite(rele, HIGH);
  } 
  else {
    digitalWrite(rele, LOW);
  }

}