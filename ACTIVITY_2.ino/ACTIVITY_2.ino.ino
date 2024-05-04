int L1 = 2;
int L2 = 3;
int L3 = 4;
int L4 = 5;
int L5 = 6;
int L6 = 7;
int L7 = 8;
int L8 = 9;
int L9 = 10;
int L10 = 11;
int L11 = 12;
int L12 = 13;


void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  pinMode(L9, INPUT);
  pinMode(L10, INPUT);
  pinMode(L11, INPUT);
  pinMode(L12, INPUT);

}

void loop() {
  int sw1 = 0;
  int sw2 = 0;
  int sw3 = 0;
  int sw4 = 0;
  sw1 = digitalRead(L9);
  sw2 = digitalRead(L10);
  sw3 = digitalRead(L11);
  sw4 = digitalRead(L12);
  switch (sw4)
  { //main switch
    case HIGH:
      switch (sw1)
      { //switch1
        case HIGH:
          digitalWrite(L1, HIGH);
          delay(300);
          digitalWrite(L2, HIGH);
          delay(300);
          digitalWrite(L3, HIGH);
          delay(300);
          digitalWrite(L4, HIGH);
          delay(300);
          digitalWrite(L5, HIGH);
          delay(300);
          digitalWrite(L6, HIGH);
          delay(300);
          digitalWrite(L7, HIGH);
          delay(300);
          digitalWrite(L8, HIGH);
          delay(300);
          digitalWrite(L8, LOW);
          delay(300);
          digitalWrite(L7, LOW);
          delay(300);
          digitalWrite(L6, LOW);
          delay(300);
          digitalWrite(L5, LOW);
          delay(300);
          digitalWrite(L4, LOW);
          delay(300);
          digitalWrite(L3, LOW);
          delay(300);
          digitalWrite(L2, LOW);
          delay(300);
          digitalWrite(L1, LOW);
          delay(300);
          break;
      }//switch1
      switch (sw2)
      { //switch2
        case HIGH:
          digitalWrite(L1, HIGH);
          digitalWrite(L2, HIGH);
          digitalWrite(L3, HIGH);
          digitalWrite(L4, HIGH);
          digitalWrite(L5, HIGH);
          digitalWrite(L6, HIGH);
          digitalWrite(L7, HIGH);
          digitalWrite(L8, HIGH);
          delay(300);
          digitalWrite(L1, LOW);
          digitalWrite(L2, LOW);
          digitalWrite(L3, LOW);
          digitalWrite(L4, LOW);
          digitalWrite(L5, LOW);
          digitalWrite(L6, LOW);
          digitalWrite(L7, LOW);
          digitalWrite(L8, LOW);
          break;
      }//switch2
      switch (sw3)
      { //switch3
        case HIGH:
          digitalWrite(L1, HIGH);
          digitalWrite(L8, HIGH);
          delay(300);
          digitalWrite(L2, HIGH);
          digitalWrite(L7, HIGH);
          delay(300);
          digitalWrite(L3, HIGH);
          digitalWrite(L6, HIGH);
          delay(300);
          digitalWrite(L4, HIGH);
          digitalWrite(L5, HIGH);
          delay(500);
          digitalWrite(L1, LOW);
          digitalWrite(L2, LOW);
          digitalWrite(L3, LOW);
          digitalWrite(L4, LOW);
          digitalWrite(L5, LOW);
          digitalWrite(L6, LOW);
          digitalWrite(L7, LOW);
          digitalWrite(L8, LOW);
          break;
      }//switch3
      break;
      case LOW:
          digitalWrite(L1, LOW);
          digitalWrite(L2, LOW);
          digitalWrite(L3, LOW);
          digitalWrite(L4, LOW);
          digitalWrite(L5, LOW);
          digitalWrite(L6, LOW);
          digitalWrite(L7, LOW);
          digitalWrite(L8, LOW);


      break;

  }//mswitch
}
