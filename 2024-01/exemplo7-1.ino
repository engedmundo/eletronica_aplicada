#define botao1 2
#define botao2 3
#define grade 4
#define pedal 7
#define cilindro 8

int b1 = 0;
int b2 = 0;
int g = 0;
int p = 0;

void setup() {
    pinMode(botao1, INPUT);
    pinMode(botao2, INPUT);
    pinMode(grade, INPUT);
    pinMode(pedal, INPUT);
    pinMode(cilindro, OUTPUT);
}

void loop() {
    b1 = digitalRead(botao1);
    b2 = digitalRead(botao2);
    g = digitalRead(grade);
    p = digitalRead(pedal);
    // aplicar a equação
    if ((b1 && b2) || (g && p) || (g && b1) || (g && b2)) {
        digitalWrite(cilindro, 1);
    } else {
        digitalWrite(cilindro, 0);
    }
}
