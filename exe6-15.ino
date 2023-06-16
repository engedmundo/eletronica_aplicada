#define led 2
#define motor 5
int const potenciometro = 0;
int leitura_potenciometro = 0;

void setup(){
    pinMode(led, OUTPUT);
    pinMode(motor, OUTPUT);
    // Inicializar comunicação serial a 9600 bits/segundo
    Serial.begin(9600);
}

void loop(){
    // fazer a leitura da tensão de entrada no potenciômetro
    leitura_potenciometro = analogRead(potenciometro) / 4;
    // usar o valor lido para acionar o motor (entre 0 e 255)
    analogWrite(motor, leitura_potenciometro);
}


