#define a 6
#define b 7
#define c 9
#define d 10
#define e 11
#define f 13
#define g 12
#define dp 8

void setup(){
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(dp, OUTPUT);
}

void loop(){
    //numero 9
    numero(1, 1, 1, 1, 0, 1, 1, 0);
    delay(1000);
    //numero 8
    numero(1, 1, 1, 1, 1, 1, 1, 0);
    delay(1000);
    //numero 7
    numero(1, 1, 1, 0, 0, 0, 0, 0);
    delay(1000);
    //numero 6
    numero(1, 0, 1, 1, 1, 1, 1, 0);
    delay(1000);
    //numero 5
    numero(1, 0, 1, 1, 0, 1, 1, 0);
    delay(1000);
    //numero 4
    numero(0, 1, 1, 0, 0, 1, 1, 0);
    delay(1000);
    //numero 3
    numero(1, 1, 1, 1, 0, 0, 1, 0);
    delay(1000);
    //numero 2
    numero(1, 1, 0, 1, 1, 0, 1, 0);
    delay(1000);
    //numero 1
    numero(0, 1, 1, 0, 0, 0, 0, 0);
    delay(1000);
    //numero 0
    numero(1, 1, 1, 1, 1, 1, 0, 0);
    delay(1000);
}

void numero(
    int est_a,
    int est_b,
    int est_c,
    int est_d, 
    int est_e, 
    int est_f, 
    int est_g, 
    int est_dp
){
    digitalWrite(a, est_a);
    digitalWrite(b, est_b);
    digitalWrite(c, est_c);
    digitalWrite(d, est_d);
    digitalWrite(e, est_e);
    digitalWrite(f, est_f);
    digitalWrite(g, est_g);
    digitalWrite(dp, est_dp);
}