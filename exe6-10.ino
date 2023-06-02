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
  lcd.setCursor(0, 1);
  lcd.print("Eng Mecanica UPF");
  // deixar mensagem na tela por 3 segundos
  delay(3000);

  // limpar a tela
  lcd.clear();
  //posicionar o cursor
  lcd.setCursor(0, 0);
  lcd.print("Edmundo");
  lcd.setCursor(0, 1);
  lcd.print("63115");
  delay(3000);

  for(int i=0; i<=10; i++){
    // limpar a tela
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Contador:");
    
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }
}