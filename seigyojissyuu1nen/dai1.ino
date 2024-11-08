int pb=2;
int led=12;
int pp=3;
int ledd=13;
int state;
int state2;

void setup() {
    pinMode(pb, INPUT);
    pinMode(led, OUTPUT);
    pinMode(pp, INPUT);
    pinMode(ledd, OUTPUT);
}

void loop() {
    state=digitalRead(pb);
    if(state == HIGH) {
        digitalRead(led, HIGH);
    }

    else {
        digitalWrite(led, LOW);
    }
    
    state2=digitalRead(pp);
    if(state2 == HIGH) {
        digitalWrite(ledd, HIGH);
    }
    
    else {
        digitalWrite(led, LOW);
    }
}