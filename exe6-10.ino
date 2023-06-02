#include <LiquidCrystal.h>

int segundos = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2); // Inicializa o display com 16 colunas e 2 linhas.
}

void loop()
{
  // colocar cursor no início da tela
  // setCursor(coluna, linha) começam em 0
  lcd.setCursor(0, 0);
  // escrever na tela
  lcd.print("Elet. Aplicada");
}