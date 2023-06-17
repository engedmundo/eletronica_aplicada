/*
Componentes:
- 2 motores CC
- 1 controlador L293D
- 1 fonte de energia
- 1 arduíno
- 4 botões
- 4 resistores (1kohm cada)
- 1 potenciômetro
- 1 led RGB
- 1 resistor 220 ohms para led rgb
- 3 protoboards 

Montagem
1 protoboard com fonte de energia (positivo e negativo)
Nessa placa ligar o controlador L293D e os motores
Ligar corretamente potencia, solo e ativar do controlador
As saídas do controlador devem ser ligadas nos motores
As entradas do controlador devem ser ligadas nas
portas digitais do arduíno (portas com PWM)

1 protoboard com 4 botões e 4 resistores 1kohm
Nesta placa ligar o positivo do arduíno - 5V
Também ligar o negativo do arduíno
Os botões recebem tensão de 5v do arduíno, passam 
pelo resistor e devolvem ao negativo do arduíno.
Depois de passar pelo botão e antes do resistor, fazer
uma ligação do botão com a porta digital do arduíno
aproveitar as portas não PWM

1 protoboard vai receber o potenciometro e o led.
Ligar o positivo (5V) e o negativo do arduino na placa
potenciometro tem terminais 1 e 2 ligados no 
positivo e negativo da placa
Terminal limpador é ligado na entrada analógica A0
led é ligado nas portas digitais que sobrarem

##### lógica ####
Definir as portas - usar nomes adequados a
cada componente
para cada entrada, criar uma variável para
armazenar a leitura da entrada
#define botao_avancar 12
int estado_botao_avancar = 0;

no void setup, definir portas de entrada e saída
(motor, led) - saídas
botões e potenciometro - entradas
Serial.begin(9600); -> ativar entrada analógica potenciometro

no void loop
primeiro LER o estado de todos os botões e 
do potenciometro
estado_botao_avancar = digitalRead(botao_avancar)
estado_potenciometro = analogRead(potenciometro) / 4;

se o botao de avancar estiver pressionado (estado == 1)
ligar os dois motores na velocidade lida no potenciometro
analogWrite(motor, estado_potenciometro)

código da cola:
*/

int positivo_motor_direita = 5;
int negativo_motor_direita = 3;
int positivo_motor_esquerda = 6;
int negativo_motor_esquerda = 9;
int botao_avancar = 11;
int botao_recuar = 13;
int botao_direita = 10;
int botao_esquerda = 12;
int estado_btn_avancar = 0;
int estado_btn_recuar = 0;
int estado_btn_direita = 0;
int estado_btn_esquerda = 0;
int potenciometro = 0;
int velocidade_potenciometro = 0;
int vermelho = 7;
int azul = 2;
int verde = 4;


void setup()
{
  pinMode(positivo_motor_direita, OUTPUT);
  pinMode(negativo_motor_direita, OUTPUT);
  pinMode(positivo_motor_esquerda, OUTPUT);
  pinMode(negativo_motor_esquerda, OUTPUT);
  pinMode(botao_avancar, INPUT);
  pinMode(botao_recuar, INPUT);
  pinMode(botao_direita, INPUT);
  pinMode(botao_esquerda, INPUT);
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  velocidade_potenciometro = analogRead(potenciometro)/4;
  estado_btn_avancar = digitalRead(botao_avancar);
  estado_btn_recuar = digitalRead(botao_recuar);
  estado_btn_direita = digitalRead(botao_direita);
  estado_btn_esquerda = digitalRead(botao_esquerda);
  
  if (estado_btn_avancar == 1)
  {
  	para_frente(velocidade_potenciometro);
    nivel_potencia();
  }
  else if (estado_btn_recuar == 1)
  {
  	para_tras(velocidade_potenciometro);
    nivel_potencia();
  }
  else if (estado_btn_direita == 1)
  {
  	para_direita(velocidade_potenciometro);
    nivel_potencia();
  }
  else if (estado_btn_esquerda == 1)
  {
  	para_esquerda(velocidade_potenciometro);
    nivel_potencia();
  }
  else
  {
    parado();
    led_apagado();
  }
  
  
}

void para_frente(int velocidade)
{
  analogWrite(positivo_motor_direita, velocidade);
  analogWrite(negativo_motor_direita, 0);
  analogWrite(positivo_motor_esquerda, velocidade);
  analogWrite(negativo_motor_esquerda, 0);
}

void para_tras(int velocidade)
{
  analogWrite(positivo_motor_direita, 0);
  analogWrite(negativo_motor_direita, velocidade);
  analogWrite(positivo_motor_esquerda, 0);
  analogWrite(negativo_motor_esquerda, velocidade);
}

void para_direita(int velocidade)
{
  analogWrite(positivo_motor_direita, velocidade/2);
  analogWrite(negativo_motor_direita, 0);
  analogWrite(positivo_motor_esquerda, velocidade);
  analogWrite(negativo_motor_esquerda, 0);
}

void para_esquerda(int velocidade)
{
  analogWrite(positivo_motor_direita, velocidade);
  analogWrite(negativo_motor_direita, 0);
  analogWrite(positivo_motor_esquerda, velocidade/2);
  analogWrite(negativo_motor_esquerda, 0);
}

void parado()
{
  analogWrite(positivo_motor_direita, 0);
  analogWrite(negativo_motor_direita, 0);
  analogWrite(positivo_motor_esquerda, 0);
  analogWrite(negativo_motor_esquerda, 0);
}

void led_verde()
{
  digitalWrite(verde, 1);
  digitalWrite(azul, 0);
  digitalWrite(vermelho, 0);
}

void led_branco()
{
  digitalWrite(verde, 1);
  digitalWrite(azul, 1);
  digitalWrite(vermelho, 1);
}

void led_azul()
{
  digitalWrite(verde, 0);
  digitalWrite(azul, 1);
  digitalWrite(vermelho, 0);
}

void led_amarelo()
{
  digitalWrite(verde, 1);
  digitalWrite(azul, 1);
  digitalWrite(vermelho, 0);
}

void led_vermelho()
{
  digitalWrite(verde, 0);
  digitalWrite(azul, 0);
  digitalWrite(vermelho, 1);
}

void led_apagado()
{
  digitalWrite(verde, 0);
  digitalWrite(azul, 0);
  digitalWrite(vermelho, 0);
}

void nivel_potencia()
{
  if (velocidade_potenciometro >= 230)
  {
    led_vermelho();
  }
  else if (velocidade_potenciometro >= 200)
  {
    led_amarelo();
  }
  else if (velocidade_potenciometro >= 150)
  {
    led_azul();
  }
  else if (velocidade_potenciometro >= 100)
  {
    led_verde();
  }
  else if (velocidade_potenciometro >= 50)
  {
    led_branco();
  }
  else 
  {
  	led_apagado();
  }
}
