#define led 4
#define motor 6
int const potenciometro = 0;
int estadoPotenciometro = 0;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(motor, OUTPUT);
    Serial.begin(9600); // Inicializa a comunicação analógica na entrada
}

void loop() {
    estadoPotenciometro = analogRead(potenciometro) / 4; // Ler potenciômetro 
    // valor / 4 deixa a leitura entre 0 e 255
    analogWrite(motor, estadoPotenciometro);
    // alerta em 80% de potência
    float limiteAlerta = 0.8 * 255;
    if (estadoPotenciometro >= limiteAlerta) {
        digitalWrite(led, 1);
    } else {
        digitalWrite(led, 0);
    }
}