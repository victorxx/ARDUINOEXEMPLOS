#include <Keypad.h>  // Inclui a biblioteca do teclado

const byte ROWS = 4;  // Número de linhas
const byte COLS = 4;  // Número de colunas

// Define as teclas do teclado 4x4
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Define os pinos para as linhas (R1–R4)
byte rowPins[ROWS] = {7, 8, 9, 10};  // Mapeia as linhas para os pinos 7, 8, 9 e 10

// Define os pinos para as colunas (C1–C4)
byte colPins[COLS] = {5, 4, 3, 2};  // Mapeia as colunas para os pinos 5, 4, 3 e 2

// Cria o objeto keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação Serial
}

void loop() {
  char key = keypad.getKey();  // Obtém a tecla pressionada

  if (key) {  // Se uma tecla foi pressionada
    Serial.println(key);  // Exibe a tecla pressionada no Monitor Serial
  }
}
