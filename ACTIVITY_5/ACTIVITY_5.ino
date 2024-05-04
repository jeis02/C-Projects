int P1 = 2;
int P2 = 3;
int L1 = 4;
int L2 = 5;
int L3 = 6;
int L4 = 7;
int L5 = 8;
int L6 = 9;
int L7 = 10;
int L8 = 11;
int x = 0;
int c = 0;
int z = 0;



void setup() {
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  pinMode(L1, INPUT);
  pinMode(L2, INPUT);
  pinMode(L3, INPUT);
  pinMode(L4, INPUT);
  pinMode(L5, INPUT);
  pinMode(L6, INPUT);
  pinMode(L7, INPUT);
  pinMode(L8, INPUT);
  Serial.begin(9600);
}
void zero(){
digitalWrite(L1, LOW);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, LOW);
digitalWrite(L5, LOW);
digitalWrite(L6, LOW);
digitalWrite(L7, LOW);
digitalWrite(L8, LOW);
}

void loop() {//loop
  x = digitalRead(P1);
  c = digitalRead(P2);

  if (x == HIGH) { //ifx
    z = z + 1;
  }//ifx
  if (c == HIGH) { //ifc
    z = z - 1;
  }//ifc
  switch (z) { //switch
    case 1:
    zero();
      digitalWrite(L1, HIGH);
      digitalWrite(L6, HIGH);
      break;

    case 2:
    zero();
      digitalWrite(L2, HIGH);
      digitalWrite(L1, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L8, HIGH);
      digitalWrite(L7, HIGH);
      break;
    case 3:
    zero();
      digitalWrite(L2, HIGH);
      digitalWrite(L1, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L6, HIGH);
      digitalWrite(L7, HIGH);
      break;
    case 4:
    zero();
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L1, HIGH);
      digitalWrite(L6, HIGH);
      break;
    case 5:
    zero();
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L6, HIGH);
      digitalWrite(L7, HIGH);
      break;
    case 6:
    zero();
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L8, HIGH);
      digitalWrite(L7, HIGH);
      digitalWrite(L6, HIGH);
      digitalWrite(L4, HIGH);
      break;
    case 7:
    zero();
      digitalWrite(L2, HIGH);
      digitalWrite(L1, HIGH);
      digitalWrite(L6, HIGH);
    case 8:
    zero();
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
      digitalWrite(L6, HIGH);
      digitalWrite(L7, HIGH);
      break;
    case 9:
    zero();
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L6, HIGH);
  }//switch
  Serial.print(z);





}//loop
