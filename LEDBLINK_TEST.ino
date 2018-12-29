
//Creating the INTEGER VARIABLES FOR THE LEDS: ASSIGNING A PIN TO EACH COLOUR
int RED = 12;
int BLU = 13;
int YEL = 10;
int GRN = 9;

void setup() {
  // put your setup code here, to run once:

pinMode(RED, OUTPUT);
pinMode(YEL, OUTPUT);
pinMode(GRN, OUTPUT);
pinMode(BLU, OUTPUT);


tone(11,5,700);
delay(100);
tone(11,10,700);
delay(100);
tone(11,15,700);
delay(100);
tone(11,20,700);
delay(100);
tone(11,25,700);
delay(100);
tone(11,5,700);
delay(100);
tone(11,10,700);
delay(100);
tone(11,15,700);
delay(100);
tone(11,20,700);
delay(100);
tone(11,25,700);
delay(100);
tone(11,5,700);
delay(100);
tone(11,10,700);
delay(100);
tone(11,15,700);
delay(100);
tone(11,20,700);
delay(100);
tone(11,25,700);
delay(100);

}


void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(RED, HIGH);
 tone(11,20,100);
 delay(100);
 digitalWrite(RED, LOW);
 delay(100);
  digitalWrite(YEL, HIGH);
 tone(11,22,100);
 delay(100);
 digitalWrite(YEL, LOW);
 delay(100);
  digitalWrite(GRN, HIGH);
 tone(11,24,100);
 delay(100);
 digitalWrite(GRN, LOW);
 delay(100);
  digitalWrite(BLU, HIGH);
 tone(11,26,100);
 delay(100);
 digitalWrite(BLU, LOW);
 delay(100);
  digitalWrite(BLU, HIGH);
 tone(11,20,100);
 delay(100);
 digitalWrite(BLU, LOW);
 delay(100);
  digitalWrite(GRN, HIGH);
 tone(11,22,100);
 delay(100);
 digitalWrite(GRN, LOW);
 delay(100);
  digitalWrite(YEL, HIGH);
 tone(11,24,100);
 delay(100);
 digitalWrite(YEL, LOW);
 delay(100);
  digitalWrite(RED, HIGH);
 tone(11,26,100);
 delay(100);
 digitalWrite(RED, LOW);
 delay(100);
 digitalWrite(RED,HIGH);
 delay(1);
 digitalWrite(YEL,HIGH);
 delay(1);
 digitalWrite(GRN,HIGH);
 delay(1);
 digitalWrite(BLU,HIGH);
  delay(100);
 digitalWrite(RED,LOW);
 delay(1);
 digitalWrite(YEL,LOW);
 delay(1);
 digitalWrite(GRN,LOW);
 delay(1);
 digitalWrite(BLU,LOW);
  delay(100);
 digitalWrite(RED,HIGH);
 delay(1);
 digitalWrite(YEL,HIGH);
 delay(1);
 digitalWrite(GRN,HIGH);
 delay(1);
 digitalWrite(BLU,HIGH);
 tone(11,15,1000);
 delay(100);
 digitalWrite(RED,LOW);
 delay(1);
 digitalWrite(YEL,LOW);
 delay(1);
 digitalWrite(GRN,LOW);
 delay(1);
 digitalWrite(BLU,LOW);
 delay(1000);
 
  

}
