#define motor_p 6
#define motor_n 5

void setup(){
    pinMode(motor_p, OUTPUT);
    pinMode(motor_n, OUTPUT);
}

void loop(){
    digitalWrite(motor_p, 1);
    digitalWrite(motor_n, 0);
    delay(5000);
    digitalWrite(motor_p, 0);
    digitalWrite(motor_n, 1);
    delay(5000);
}