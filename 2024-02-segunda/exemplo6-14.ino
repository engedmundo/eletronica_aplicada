#define led 4
#define sensor 7
#define som 9
#define botao 8
// variável para guardar se o sensor foi ativado
int estadoSensor = 0;
int estadoBotao = 0;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(som, OUTPUT);
    pinMode(sensor, INPUT); // sensor é entrada
    pinMode(botao, INPUT);
}

void loop() {
    // ler estado do sensor
    estadoSensor = digitalRead(sensor);
    estadoBotao = digitalRead(botao);
    // comparação usam-se dois sinais de igual
    if (estadoSensor == 1 && estadoBotao == 1) {
        digitalWrite(led, 1);
        tone(som, 500);
        delay(2000);
    } else if (estadoSensor == 1 && estadoBotao == 0) {
        digitalWrite(led, 1);
        noTone(som);
        delay(2000);
    } else {
        digitalWrite(led, 0);
        noTone(som);
    }
}
