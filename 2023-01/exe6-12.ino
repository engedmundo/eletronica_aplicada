#define verde_sul 7
#define amarelo_sul 11
#define vermelho_sul 12
#define verde_norte 8
#define amarelo_norte 10 
#define vermelho_norte 13
#define verde_pedestre 5
#define vermelho_pedestre 6
#define botao_pedestre 4
int estado_botao = 0;

void setup(){
    pinMode(verde_sul, OUTPUT);
    pinMode(amarelo_sul, OUTPUT);
    pinMode(vermelho_sul, OUTPUT);
    pinMode(verde_norte, OUTPUT);
    pinMode(amarelo_norte, OUTPUT);
    pinMode(vermelho_norte, OUTPUT);
    pinMode(verde_pedestre, OUTPUT);
    pinMode(vermelho_pedestre, OUTPUT);
    pinMode(botao_pedestre, INPUT);
}

void norte(int est_vermelho, int est_amarelo, int est_verde){
    digitalWrite(vermelho_norte, est_vermelho);
    digitalWrite(amarelo_norte, est_amarelo);
    digitalWrite(verde_norte, est_verde);
}

void sul(int est_vermelho, int est_amarelo, int est_verde){
    digitalWrite(vermelho_sul, est_vermelho);
    digitalWrite(amarelo_sul, est_amarelo);
    digitalWrite(verde_sul, est_verde);
}

void pedestre(int est_vermelho, int est_verde){
    digitalWrite(vermelho_pedestre, est_vermelho);
    digitalWrite(verde_pedestre, est_verde);
}

void verifica_botao(int botao){
    if (botao == 1) {
        norte(1, 0, 0);
        sul(1, 0, 0);
        pedestre(0, 1);
        delay(4000);

        norte(1, 0, 0);
        sul(1, 0, 0);
        pedestre(1, 0);
        delay(2000);
    }
}

void loop(){
    // Sentido norte fechado, sentido sul fechado
    norte(1, 0, 0);
    sul(1, 0, 0);
    pedestre(1, 0);
    delay(2000);
    // verifica se botão está acionado
    estado_botao = digitalRead(botao_pedestre);
    verifica_botao(estado_botao);
    // Sentido norte aberto, sentido sul fechado
    norte(0, 0, 1);
    sul(1, 0, 0);
    pedestre(1, 0);
    delay(2000);
    // Sentido norte amarelo, sentido sul fechado
    norte(0, 1, 0);
    sul(1, 0, 0);
    pedestre(1, 0);
    delay(2000);
    // Sentido norte fechado, sentido sul fechado
    norte(1, 0, 0);
    sul(1, 0, 0);
    pedestre(1, 0);
    delay(2000);
    // verifica se botão está acionado
    estado_botao = digitalRead(botao_pedestre);
    verifica_botao(estado_botao);
    // Sentido norte fechado, sentido sul aberto
    norte(1, 0, 0);
    sul(0, 0, 1);
    pedestre(1, 0);
    delay(2000);
    // Sentido norte fechado, sentido sul amarelo
    norte(1, 0, 0);
    sul(0, 1, 0);
    pedestre(1, 0);
    delay(2000);
}
