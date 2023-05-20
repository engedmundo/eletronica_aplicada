/*
6.4 - Criar um circuito com Arduino, com 2 leds que piscam 
de maneira intermitente, sendo que quando um led acende, 
outro led apaga.
*/
#define led_vermelho 13
#define led_azul 4

void setup(){
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_azul, OUTPUT);
}

void loop(){
    digitalWrite(led_vermelho, 1);
    digitalWrite(led_azul, 0);
    delay(1000);
    digitalWrite(led_vermelho, 0);
    digitalWrite(led_azul, 1);
    delay(1000);
}