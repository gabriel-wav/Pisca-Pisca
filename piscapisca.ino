int led1 = 5;
int led2 = 18;
int led3 = 19;
unsigned long tempoAnterior1 = 0;
unsigned long tempoAnterior2 = 0;
unsigned long tempoAnterior3 = 0 ;
unsigned long tempo1 = 1000;
unsigned long tempo2 = 500;
unsigned long tempo3 = 250;
int flagLED1 = 0;
int flagLED2 = 0;
int flagLED3 = 0;
int pot = 34;
int conversao = 0;
int letpot = 0;

void setup() {
Serial.begin(115200);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
 
if(millis()>= tempoAnterior1+tempo1){
tempoAnterior1 = millis();
if (flagLED1 == 0) {
 flagLED1 = 1;
        }
else {
  flagLED1 = 0;
}
digitalWrite(led1, flagLED1);
}
if(millis()>= tempoAnterior2+tempo2){
tempoAnterior2 = millis();
if (flagLED2 == 0) {
 flagLED2 = 1;
        }
else {
  flagLED2 = 0;
}
digitalWrite(led2, flagLED2);
} 

if(millis()>= tempoAnterior3+tempo3){
tempoAnterior3 = millis();
if (flagLED3 == 0) {
 flagLED3 = 1;
        }
else {
  flagLED3 = 0;
}
digitalWrite(led3, flagLED3);
}

}
