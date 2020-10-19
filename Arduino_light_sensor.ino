int sensor = 0;

void setup() {
    pinMode(12, OUTPUT); 
    pinMode(13, OUTPUT);
}

void loop() {
    sensor = analogRead(A0);
 
    if(sensor > 50) { //The value is really low because I have really bad lighting in my room
        digitalWrite(13,LOW); 
        digitalWrite(12,LOW); 
    }
    else { 
        digitalWrite(13,HIGH); 
        digitalWrite(12,HIGH); 
    }
}
