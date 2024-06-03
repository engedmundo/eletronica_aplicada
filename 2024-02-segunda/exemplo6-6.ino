#define vermelhoNorte 10
#define amareloNorte 6
#define verdeNorte 2
#define vermelhoSul 12
#define amareloSul 4
#define verdeSul 1

void setup() {
    pinMode(vermelhoNorte, OUTPUT);
    pinMode(amareloNorte, OUTPUT);
    pinMode(verdeNorte, OUTPUT);
    pinMode(vermelhoSul, OUTPUT);
    pinMode(amareloSul, OUTPUT);
    pinMode(verdeSul, OUTPUT);
}

void sinaleiraNorte(int estadoVermelho, int estadoAmarelo, int estadoVerde) {
    digitalWrite(vermelhoNorte, estadoVermelho);
    digitalWrite(amareloNorte, estadoAmarelo);
    digitalWrite(verdeNorte, estadoVerde);
}

void sinaleiraSul(int estadoVermelho, int estadoAmarelo, int estadoVerde) {
    digitalWrite(vermelhoSul, estadoVermelho);
    digitalWrite(amareloSul, estadoAmarelo);
    digitalWrite(verdeSul, estadoVerde);
}

void loop() {
    // fechar ambos os sentidos
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(1, 0, 0);
    delay(1000);
    // Verde sentido norte
    sinaleiraNorte(0, 0, 1);
    sinaleiraSul(1, 0, 0);
    delay(3000);
    // Amarelo sentido norte
    sinaleiraNorte(0, 1, 0);
    sinaleiraSul(1, 0, 0);
    delay(2000);
    // fechar ambos os sentidos
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(1, 0, 0);
    delay(1000);
    // verde sentido sul
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(0, 0, 1);
    delay(3000);
    // amanrelo sentido sul
    sinaleiraNorte(1, 0, 0);
    sinaleiraSul(0, 1, 0);
    delay(2000);
}
