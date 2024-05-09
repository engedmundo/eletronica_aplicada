#define vermelho 10
#define amarelo 8
#define verde 4

void setup() {
    pinMode(vermelho, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
}

void loop() {
    semaforo(0, 1, 0);
    delay(3000);
    semaforo(1, 0, 0);
    delay(3000);
    semaforo(0, 0, 1);
    delay(3000);
}

void semaforo(int estadoVerde, int estadoVermelho, int estadoAmarelo) {
    digitalWrite(verde, estadoVerde);
    digitalWrite(vermelho, estadoVermelho);
    digitalWrite(amarelo, estadoAmarelo);
}
