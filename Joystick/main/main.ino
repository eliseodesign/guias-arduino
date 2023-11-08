int Xpin = A1;
int Ypin = A0;
int btnPin = 7;
int xVal;
int yVal;
int btnVal;

void setup() {
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(btnPin, INPUT_PULLUP); // Usar resistencia pull-up interna
  Serial.begin(9600);
}

void loop() {
  xVal = analogRead(Xpin);
  yVal = analogRead(Ypin);
  btnVal = digitalRead(btnPin);

  // Puedes realizar acciones basadas en los valores de xVal, yVal y btnVal aquí
  // Por ejemplo, puedes imprimir estos valores en el puerto serie:
  Serial.print("X: ");
  Serial.print(xVal);
  Serial.print(" Y: ");
  Serial.print(yVal);
  Serial.print(" Botón: ");
  Serial.println(btnVal);

  delay(100);
}
