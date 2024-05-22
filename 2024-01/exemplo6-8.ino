#define ledA 5
#define ledB 4
#define ledC 7
#define ledD 8
#define ledE 9
#define ledF 10
#define ledG 11
#define ledDP 6

void setup() {
    pinMode(ledA, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(ledC, OUTPUT);
    pinMode(ledD, OUTPUT);
    pinMode(ledE, OUTPUT);
    pinMode(ledF, OUTPUT);
    pinMode(ledG, OUTPUT);
    pinMode(ledDP, OUTPUT);
}

void loop() {
    // escrever numero 9
    numero(1, 1, 1, 1, 0, 1, 1, 0);
    delay(900);
    apagar();
    // escrever numero 8
    numero(1, 1, 1, 1, 1, 1, 1, 0);
    delay(900);
    apagar();
    // escrever numero 7
    numero(1, 1, 1, 0, 0, 0, 0, 0);
    delay(900);
    apagar();
    // escrever numero 6
    numero(1, 0, 1, 1, 1, 1, 1, 0);
    delay(900);
    apagar();
    // escrever numero 5
    numero(1, 0, 1, 1, 0, 1, 1, 0);
    delay(900);
    apagar();
    // escrever numero 4
    numero(0, 1, 1, 0, 0, 1, 1, 0);
    delay(900);
    apagar();
    // escrever numero 3
    numero(1, 1, 1, 1, 0, 0, 1, 0);
    delay(900);
    apagar();
    // escrever numero 2
    numero(1, 1, 0, 1, 1, 0, 1, 0);
    delay(900);
    apagar();
    // escrever numero 1
    numero(0, 1, 1, 0, 0, 0, 0, 0);
    delay(900);
    apagar();
    // escrever numero 0
    numero(1, 1, 1, 1, 1, 1, 0, 0);
    delay(1000);
    apagar();
}

void numero(
    int valorA, 
    int valorB, 
    int valorC, 
    int valorD, 
    int valorE, 
    int valorF, 
    int valorG, 
    int valorDP
) {
    digitalWrite(ledA, valorA);
    digitalWrite(ledB, valorB);
    digitalWrite(ledC, valorC);
    digitalWrite(ledD, valorD);
    digitalWrite(ledE, valorE);
    digitalWrite(ledF, valorF);
    digitalWrite(ledG, valorG);
    digitalWrite(ledDP, valorDP);
}

void apagar() {
    digitalWrite(ledA, 0);
    digitalWrite(ledB, 0);
    digitalWrite(ledC, 0);
    digitalWrite(ledD, 0);
    digitalWrite(ledE, 0);
    digitalWrite(ledF, 0);
    digitalWrite(ledG, 0);
    digitalWrite(ledDP, 0);
    delay(100);
} 
