#define vermelho 5
#define laranja 2

void setup() {
    pinMode(vermelho, OUTPUT);
    pinMode(laranja, OUTPUT);
}

void loop() {
    digitalWrite(laranja, 0); // desligar laranja
    digitalWrite(vermelho, 1); // ligar vermelho
    delay(1000); // esperar 1 segundo
    digitalWrite(vermelho, 0); // desligar vermelho
    digitalWrite(laranja, 1); // ligar laranja
    delay(1000); // esperar 1 segundo
}
