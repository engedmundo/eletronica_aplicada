#define verde_sul 11
#define amarelo_sul 12
#define vermelho_sul 13
#define verde_norte 7
#define amarelo_norte 6 
#define vermelho_norte 5

void setup(){
    pinMode(verde_sul, OUTPUT);
    pinMode(amarelo_sul, OUTPUT);
    pinMode(vermelho_sul, OUTPUT);
    pinMode(verde_norte, OUTPUT);
    pinMode(amarelo_norte, OUTPUT);
    pinMode(vermelho_norte, OUTPUT);
}

void loop(){
    // Sentido norte aberto, sentido sul fechado
    digitalWrite(verde_norte, 1);
    digitalWrite(amarelo_norte, 0);
    digitalWrite(vermelho_norte, 0);
    digitalWrite(verde_sul, 0);
    digitalWrite(amarelo_sul, 0);
    digitalWrite(vermelho_sul, 1);
    delay(2000);
    // Sentido norte amarelo, sentido sul fechado
    digitalWrite(verde_norte, 0);
    digitalWrite(amarelo_norte, 1);
    digitalWrite(vermelho_norte, 0);
    digitalWrite(verde_sul, 0);
    digitalWrite(amarelo_sul, 0);
    digitalWrite(vermelho_sul, 1);
    delay(2000);
    // Sentido norte fechado, sentido sul fechado
    digitalWrite(verde_norte, 0);
    digitalWrite(amarelo_norte, 0);
    digitalWrite(vermelho_norte, 1);
    digitalWrite(verde_sul, 0);
    digitalWrite(amarelo_sul, 0);
    digitalWrite(vermelho_sul, 1);
    delay(2000);
    // Sentido norte fechado, sentido sul aberto
    digitalWrite(verde_norte, 0);
    digitalWrite(amarelo_norte, 0);
    digitalWrite(vermelho_norte, 1);
    digitalWrite(verde_sul, 1);
    digitalWrite(amarelo_sul, 0);
    digitalWrite(vermelho_sul, 0);
    delay(2000);
    // Sentido norte fechado, sentido sul amarelo
    digitalWrite(verde_norte, 0);
    digitalWrite(amarelo_norte, 0);
    digitalWrite(vermelho_norte, 1);
    digitalWrite(verde_sul, 0);
    digitalWrite(amarelo_sul, 1);
    digitalWrite(vermelho_sul, 0);
    delay(2000);
    // Sentido norte fechado, sentido sul fechado
    digitalWrite(verde_norte, 0);
    digitalWrite(amarelo_norte, 0);
    digitalWrite(vermelho_norte, 1);
    digitalWrite(verde_sul, 0);
    digitalWrite(amarelo_sul, 0);
    digitalWrite(vermelho_sul, 1);
    delay(2000);
}
