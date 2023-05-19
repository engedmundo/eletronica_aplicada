void setup(){
    pinMode(13, OUTPUT);
}
// o loop repete-se indefinidamente
void loop(){
    // ligar o led
    digitalWrite(13, 1);
    // espere por um segundo
    // 1 seg == 1000 milisegundos
    delay(1000);
    // desligar o led
    digitalWrite(13, 0);
    // espere po um segundo
    delay(1000);
}