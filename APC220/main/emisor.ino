void setup() {
  // Inicializar el puerto serial a una velocidad de 9600 baudios
  Serial.begin(57600);
}

void loop() {
  // Enviar datos a través del puerto serial
  Serial.println("Hola desde el emisor");
  delay(1000); // Esperar 1 segundo antes de enviar nuevamente
}
