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
    led_rgb(255, 0, 0);
    led_rgb(0, 255, 0);
    led_rgb(0, 0, 255);
    led_rgb(102, 205, 170);
}
// função propria - nós definimos o que ela faz
void led_rgb(int estado_vermelho, int estado_verde, int estado_azul){
    analogWrite(vermelho, estado_vermelho);
    analogWrite(verde, estado_verde);
    analogWrite(azul, estado_azul);
    delay(2000);
}