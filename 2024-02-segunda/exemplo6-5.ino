#define vermelho 12
#define amarelo 8
#define verde 4

void setup() {
    pinMode(vermelho, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
}

void loop() {
    sinaleira(1, 0, 0);
    delay(3000);
    sinaleira(0, 0, 1);
    delay(3000);
    sinaleira(0, 1, 0);
    delay(1500);
}

void sinaleira(int estadoVermelho, int estadoAmarelo, int estadoVerde) {
    digitalWrite(vermelho, estadoVermelho);
    digitalWrite(amarelo, estadoAmarelo);
    digitalWrite(verde, estadoVerde);
}
