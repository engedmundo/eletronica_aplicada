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

*/