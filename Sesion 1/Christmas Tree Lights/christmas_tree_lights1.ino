int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Pines donde están conectados los LEDs
int numLeds = sizeof(leds) / sizeof(leds[0]);

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW); // Apaga todos al inicio
  }
  randomSeed(analogRead(0)); // Inicializa el generador de números aleatorios
}

void loop() {
  // Escoge un LED al azar
  int ledIndex = random(0, numLeds);
  
  // Alterna el estado del LED seleccionado
  int currentState = digitalRead(leds[ledIndex]);
  digitalWrite(leds[ledIndex], !currentState);
  
  delay(200); // Espera 200 ms antes de cambiar otro LED
}