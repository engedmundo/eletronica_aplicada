#define led 7
#define botao 4

int estadoBotao = 0;

void setup() {
    // definindo entrada e saída
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT); // definir a porta 4 como entrada
}

void loop() {
    // fazer a leitura da porta/entrada conectada no botão
    estadoBotao = digitalRead(botao);
    // ligar o led por 2 segundos quando o botão for pressionado
    if (estadoBotao == 1) {
        digitalWrite(led, 1);
        delay(2000);
    } else {
        digitalWrite(led, 0);
    }
}