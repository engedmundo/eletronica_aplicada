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
    digitalWrite(vermelho, 1);
}