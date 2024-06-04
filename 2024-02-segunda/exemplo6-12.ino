#define led 4
#define botao 7
// variável para guardar se o botao foi pressionado
int estadoBotao = 0;
// botao pressionado = 1
// botao não pressionado = 0

void setup() {
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT); // botão é entrada
}

void loop() {
    // ler estado do botao
    estadoBotao = digitalRead(botao);
    // comparação usam-se dois sinais de igual
    if (estadoBotao == 1) {
        digitalWrite(led, 1);
        delay(2000);
    } else {
        digitalWrite(led, 0);
    }
}
