#define vermelho 10
#define azul 8
#define verde 6

void setup() {
    pinMode(vermelho, OUTPUT);
    pinMode(azul, OUTPUT);
    pinMode(verde, OUTPUT);
}


void loop() {
    // Acender luz vermelha
    rgb(1, 0, 0);
    delay(1000);
    // acender luz azul
    rgb(0, 1, 0);
    delay(1000);
    // luz verde
    rgb(0, 0, 1);
    delay(1000);
    // luz vermelha e azul 
    rgb(1, 1, 0);
    delay(1000);
    // luz vermelha e verde 
    rgb(1, 0, 1);
    delay(1000);
    // luz azul e verde 
    rgb(0, 1, 1);
    delay(1000);
    // luz branca 
    rgb(1, 1, 1);
    delay(1000);
}

void rgb(int valorVermelho, int valorAzul, int valorVerde) {
    digitalWrite(vermelho, valorVermelho);
    digitalWrite(azul, valorAzul);
    digitalWrite(verde, valorVerde);
}
