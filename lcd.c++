#include <LiquidCrystal.h>

// RS=13, E=12, D4-D7=5,4,3,2
LiquidCrystal lcd(13, 12, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("rodando lcd 16*2");
  lcd.setCursor(0, 1);
  lcd.print("Modo 4 bits");
}

void loop() {
  // Atualizações de tela podem ser feitas aqui
}
