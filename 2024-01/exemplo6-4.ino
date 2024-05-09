#define amarelo 4
#define verde 8

void setup() {
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
}

void loop() {
    digitalWrite(amarelo, 1);
    digitalWrite(verde, 0);
    delay(1000);
    digitalWrite(amarelo, 0);
    digitalWrite(verde, 1);
    delay(1000);
}
