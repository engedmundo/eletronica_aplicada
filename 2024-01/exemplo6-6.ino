// atribuir nomes a cada porta
#define vermelhoSul 10
#define amareloSul 8
#define verdeSul 4
#define vermelhoNorte 9
#define amareloNorte 7
#define verdeNorte 3

// função obrigatória
void setup() {
    // estabelecer as portas como saídas
    pinMode(vermelhoSul, OUTPUT);
    pinMode(amareloSul, OUTPUT);
    pinMode(verdeSul, OUTPUT);
    pinMode(vermelhoNorte, OUTPUT);
    pinMode(amareloNorte, OUTPUT);
    pinMode(verdeNorte, OUTPUT);
}

// função obrigatória
void loop() {
    // ligar os leds vermelhos em ambos os sentidos
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(1, 0, 0);
    // esperar 3 segundos
    delay(3000);
    // ligar led verde norte e desligar vermelho norte
    sinaleiraNorte(0, 0, 1);
    sinaleiraSul(1, 0, 0);
    // esperar 3 segundos
    delay(3000);
    // ligar amarelo norte
    sinaleiraNorte(0, 1, 0);
    sinaleiraSul(1, 0, 0);
    // esperar 3 segundos
    delay(3000);
    // ligar vermelho norte
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(1, 0, 0);
    // esperar 3 segundos
    delay(1000);
    // ligar verde sul
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(0, 0, 1);
    // esperar 3 segundos
    delay(3000);
    // ligar amarelo sul
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(0, 1, 0);
    // esperar 3 segundos
    delay(3000);
}

// função personalizada
void sinaleiraNorte(int vermelho, int amarelo, int verde) {
    digitalWrite(vermelhoNorte, vermelho);
    digitalWrite(amareloNorte, amarelo);
    digitalWrite(verdeNorte, verde);
}

// função personalizada
void sinaleiraSul(int vermelho, int amarelo, int verde) {
    digitalWrite(vermelhoSul, vermelho);
    digitalWrite(amareloSul, amarelo);
    digitalWrite(verdeSul, verde);
}
