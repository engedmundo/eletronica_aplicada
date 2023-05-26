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
    led_rgb(1, 0, 0);
    led_rgb(0, 1, 0);
    led_rgb(0, 0, 1);
    led_rgb(1, 1, 0);
    led_rgb(0, 1, 1);
    led_rgb(1, 0, 1);
    led_rgb(1, 1, 1);
}
// função propria - nós definimos o que ela faz
void led_rgb(int estado_vermelho, int estado_verde, int estado_azul){
    digitalWrite(vermelho, estado_vermelho);
    digitalWrite(verde, estado_verde);
    digitalWrite(azul, estado_azul);
    delay(100);
}