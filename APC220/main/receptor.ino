String receivedString = ""; // Inicializa una cadena vacía para almacenar la línea recibida

void setup() {
  // Inicializar el puerto serial a una velocidad de 57600 baudios
  Serial.begin(57600);
}

void loop() {
  while (Serial.available()) {
    char c = Serial.read(); // Lee un carácter del puerto serial
    if (c == '\n') {
      // Si se recibe un salto de línea ('\n'), significa que se ha completado una línea
      Serial.println(receivedString); // Imprime la línea completa
      receivedString = ""; // Borra la cadena para la siguiente línea
    } else {
      receivedString += c; // Agrega el carácter a la cadena
    }
  }
}