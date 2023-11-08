# Codificación

Una vez bien configurado el codigo es lo mas simple ya que estos modulos se trasmten información por comunicación serial. Tendremos dos codigo del emisor y el receptor

## Emisor
```arduino
void setup() {
  // Inicializar el puerto serial a una velocidad de 9600 baudios
  Serial.begin(57600);
}

void loop() {
  // Enviar datos a través del puerto serial
  Serial.println("Hola desde el emisor");
  delay(1000); // Esperar 1 segundo antes de enviar nuevamente
}

```

## Receptor
```arduino
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


```

### Para ver lo que transmite debes abrir el monitor serial