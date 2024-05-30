#define motorPositivo 5
#define motorNegativo 10

void setup() {
    pinMode(motorPositivo, OUTPUT);
    pinMode(motorNegativo, OUTPUT);
}

void loop() {
    // ligar motor positivo a 70% da potencia
    analogWrite(motorPositivo, 0.7 * 255);
    analogWrite(motorNegativo, 0);
    delay(3000);
    // ligar motor negativo a 30% da potencia
    analogWrite(motorPositivo, 0);
    analogWrite(motorNegativo, 0.3 * 255);
    delay(3000);
}