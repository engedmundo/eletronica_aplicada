#define led 7
#define buzzer 4
#define sensor 3 // entrada digital
#define botao 9 // entrada digital
int estadoSensor = 0; // variavel para armazenar o estado do sensor após a leitura
int estadoBotao = 0; // variavel para armazenar o estado do botao após a leitura

void setup() {
    pinMode(led, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(sensor, INPUT);
    pinMode(botao, INPUT);
}

void loop() {
    estadoSensor = digitalRead(sensor);
    estadoBotao = digitalRead(botao);

    if (estadoSensor == 1 && estadoBotao == 1) {
        digitalWrite(led, 1);
        tone(buzzer, 500);
    } else if (estadoSensor == 1 && estadoBotao == 0) {
        digitalWrite(led, 1);
        noTone(buzzer);
    } else if (estadoSensor == 0 && estadoBotao == 1) {
        digitalWrite(led, 0);
        noTone(buzzer);
    } else if (estadoSensor == 0 && estadoBotao == 0) {
        digitalWrite(led, 0);
        noTone(buzzer);
    }
}

/*
SENSOR = A
BOTAO = B
--------------------------------
A | B | LED | BUZZER
1 | 1 | 1   | 1
1 | 0 | 1   | 0
0 | 1 | 0   | 0
0 | 0 | 0   | 0
*/