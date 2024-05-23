#include <LiquidCrystal.h>

LiquidCrystal visor(12, 11, 5, 4, 3, 2);

void setup()
{
    // inicializar o visor
    visor.begin(16, 2); 
}

void loop()
{
    visor.setCursor(0, 0);
    visor.print("Eletr. Aplicada");
    delay(1000);
    visor.setCursor(0, 1);
    visor.print("Eng.Mecanica UPF");
    delay(1000);

    visor.clear();
    delay(1000);

    visor.setCursor(0, 0);
    visor.print("Edmundo");
    delay(1000);
    visor.setCursor(0, 1);
    visor.print("63115");
    delay(1000);

    contador();    
}

void contador() {
    // repita para variavel "numero" que começa em 
    // valorInicial 
    for (int numero=0; numero<=10; numero++) {
        visor.clear();
        visor.setCursor(0, 0);
        visor.print("Contador:");
        visor.setCursor(0, 1);
        visor.print(numero);
        delay(1000);
    }
    visor.clear();
}
