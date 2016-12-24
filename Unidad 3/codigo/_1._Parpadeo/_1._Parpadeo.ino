// Programa que enciende y apaga el led conectado a la patilla 13

// Esta parte es la configuración que sólo usaremos al principio
void setup() {
  // Decimos a Arduino que hemos conectado un Led a su patilla 14
  pinMode(13, OUTPUT);
}

// Esta parte se repite constantemente
void loop() {
  digitalWrite(13, HIGH);   // Encendemos el led (HIGH=encender)
  delay(1000);              // Esperamos 1000ms = 1 segundo
  digitalWrite(13, LOW);    // Apagamos el led (LOW=apagar)
  delay(1000);              // Esperamos otro segundo
}
