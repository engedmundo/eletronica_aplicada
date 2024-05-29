/* 
Objetivo do projeto: Acender seguidamente as 
três cores primárias e depois suas combinações, 
durante curtos instantes de tempo (2 segundos).
*/
#define vermelho 11
#define azul 10
#define verde 9

void setup(){
    pinMode(vermelho, OUTPUT);
    pinMode(azul, OUTPUT);
    pinMode(verde, OUTPUT);
}

void loop(){
    // ligar vermelho
    digitalWrite(vermelho, 1);
    digitalWrite(verde, 0);
    digitalWrite(azul, 0);
    delay(100);
    // ligar verde
    digitalWrite(vermelho, 0);
    digitalWrite(verde, 1);
    digitalWrite(azul, 0);
    delay(100);
    // ligar azul
    digitalWrite(vermelho, 0);
    digitalWrite(verde, 0);
    digitalWrite(azul, 1);
    delay(100);
    // ligar vermelho e verde
    digitalWrite(vermelho, 1);
    digitalWrite(verde, 1);
    digitalWrite(azul, 0);
    delay(100);
}