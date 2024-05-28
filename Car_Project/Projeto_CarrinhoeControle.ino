#define pinMot1A 9
#define pinMot1B 8
#define pinMot2A 11
#define pinMot2B 10

int frente = 2;
int tras = 3;
int esquerda = 6;
int direita = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinMot1A, OUTPUT);
  pinMode(pinMot1B, OUTPUT);
  pinMode(pinMot2A, OUTPUT);
  pinMode(pinMot2B, OUTPUT);
  pinMode(frente, INPUT_PULLUP);
  pinMode(tras, INPUT_PULLUP);
  pinMode(esquerda, INPUT_PULLUP);
  pinMode(direita, INPUT_PULLUP);
  //3,6,12,15
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(frente) == LOW) {
    digitalWrite(pinMot1A, LOW);    
    digitalWrite(pinMot2A, HIGH);
    delay(250);
    digitalWrite(pinMot1A, HIGH);
    digitalWrite(pinMot2A, LOW);
    delay(250);
    digitalWrite(pinMot1A, LOW);    
    digitalWrite(pinMot2A, HIGH);
  } else {
    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot2A, LOW);
  }

  if (digitalRead(tras) == LOW) {
    digitalWrite(pinMot1B, LOW);    
    digitalWrite(pinMot2B, HIGH);
    delay(250);
    digitalWrite(pinMot1B, HIGH);
    digitalWrite(pinMot2B, LOW);
    delay(250);
    digitalWrite(pinMot1B, LOW);    
    digitalWrite(pinMot2B, HIGH);
  } else {
    digitalWrite(pinMot1B, LOW);
    digitalWrite(pinMot2B, LOW);
  }

  if (digitalRead(esquerda) == LOW) {
    digitalWrite(pinMot1A, HIGH);
    digitalWrite(pinMot2A, LOW);
  } else {
    digitalWrite(pinMot1A, LOW);
  }

  if (digitalRead(direita) == LOW) {
    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot2A, HIGH);
  } else {
    digitalWrite(pinMot2A, LOW);
  }

  delay(100);
}

