#define led 4
#define botao 7
int estado_botao = 0; // inicializar variável

void setup(){
    pinMode(led, OUTPUT); // led é saída
    pinMode(botao, INPUT); // botão é entrada
}

void loop(){
    // ler estado do botão e armazenar na variável
    estado_botao = digitalRead(botao);
    
    if(estado_botao == 1){
        digitalWrite(led, 1);
        delay(1000);
    }
    else{
        digitalWrite(led, 0);
    }  
}
