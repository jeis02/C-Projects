int L1 = 2;
int L2 = 3;
int L3 = 4;
int L4 = 5;
int L5 = 6;
int L6 = 7;
int L7 = 8;
int L8 = 9;
int P1 = 10;
int x = 0;
int c = 0;



void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  pinMode(P1, INPUT);
  Serial.begin(9600);



}

void loop() {
  x = digitalRead(P1);

  if (x == HIGH) {
    c++;
  }

  switch (c)
  { //main
    case 1:
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

    case 2:
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
      digitalWrite(L6, HIGH);
      digitalWrite(L7, HIGH);
      digitalWrite(L8, HIGH);
      delay(1000);
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
      digitalWrite(L6, LOW);
      digitalWrite(L7, LOW);
      digitalWrite(L8, LOW);
      break;

    case 3:
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

    case 4:
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
      digitalWrite(L6, LOW);
      digitalWrite(L7, LOW);
      digitalWrite(L8, LOW);
      break;

  }//main
  Serial.print(c);

}
