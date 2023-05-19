//criar variáveis
#define led 13

void setup(){
    pinMode(led, OUTPUT);
}
// o loop repete-se indefinidamente
void loop(){
    // ligar o led
    digitalWrite(led, 1);
    // espere por um segundo
    // 1 seg == 1000 milisegundos
    delay(1000);
    // desligar o led
    digitalWrite(led, 0);
    // espere po um segundo
    delay(1000);
}