#import <math.h>

#define A1 1
#define A2 2
#define A3 3
#define A4 4
#define A5 5
#define A6 6

#define B1 7
#define B2 8
#define B3 9
#define B4 10
#define B5 11
#define B6 12

#define C1 13
#define C2 14
#define C3 15
#define C4 16
#define C5 17
#define C6 18

#define D1 19
#define D2 20
#define D3 21
#define D4 22
#define D5 23
#define D6 24

#define E1 25
#define E2 26
#define E3 27
#define E4 28
#define E5 29
#define E6 30

#define F1 26
#define F2 27
#define F3 28
#define F4 29
#define F5 30


#define BUTTON 53

int cube [6][5] = {{A1,A2,A3,A4,A5,A6},{B1,B2,B3,B4,B5,B6},{C1,C2,C3,C4,C5,C6},{D1,D2,D3,D4,D5,D6},{E1,E2,E3,E4,E5,E6}};


void one() {

  digitalWrite(A3,HIGH);
  digitalWrite(B2,HIGH);
  digitalWrite(B6,HIGH);
  digitalWrite(C1,HIGH);
  digitalWrite(C2,HIGH);
  digitalWrite(C3,HIGH);
  digitalWrite(C4,HIGH);
  digitalWrite(C5,HIGH);
  digitalWrite(C6,HIGH);
  digitalWrite(D6,HIGH);
}

void two() {
  digitalWrite(B2,HIGH);
  digitalWrite(B3,HIGH);
  digitalWrite(B6,HIGH);
  digitalWrite(C1,HIGH);
  digitalWrite(C5,HIGH);
  digitalWrite(C6,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(E6,HIGH);
}

void three() {

  digitalWrite(B1,HIGH);
  digitalWrite(B6,HIGH);
  digitalWrite(C1,HIGH);
  digitalWrite(C4,HIGH);
  digitalWrite(C6,HIGH);
  digitalWrite(D1,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(E2,HIGH);
  digitalWrite(E3,HIGH);
  digitalWrite(E5,HIGH);
  digitalWrite(E6,HIGH);

}

void four() {
  digitalWrite(A3,HIGH);
  digitalWrite(A4,HIGH);
  digitalWrite(B2,HIGH);
  digitalWrite(B4,HIGH);
  digitalWrite(C1,HIGH);
  digitalWrite(C3,HIGH);
  digitalWrite(C4,HIGH);
  digitalWrite(C5,HIGH);
  digitalWrite(C6,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(E4,HIGH);
}

void five() {
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(A6,HIGH);
  digitalWrite(B1,HIGH);
  digitalWrite(B3,HIGH);
  digitalWrite(B6,HIGH);
  digitalWrite(C1,HIGH);
  digitalWrite(C3,HIGH);
  digitalWrite(C6,HIGH);
  digitalWrite(D1,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);

}

void six() {
  
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(A4,HIGH);
  digitalWrite(A5,HIGH);
  digitalWrite(A6,HIGH);
  digitalWrite(B1,HIGH);
  digitalWrite(B4,HIGH);
  digitalWrite(B6,HIGH);
  digitalWrite(C1,HIGH);
  digitalWrite(C4,HIGH);
  digitalWrite(C6,HIGH);
  digitalWrite(D1,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);

  
}


void allUp() {
  for (int i = 0; i != 6; i++) {
    for(int j = 0; i != 5; i++) {
      digitalWrite(cube[i][j],HIGH);
    }
  }
}

void allDown() {
  for (int i = 0; i != 6; i++) {
    for(int j = 0; i != 5; i++) {
      digitalWrite(cube[i][j],LOW);
    }
  }
}

void oneByOne(int timer) {
  int j;
  int i;
  for( j = 0; j != 5; j++) {
    for( i = 0; i != 6 ; i++) {
      digitalWrite(cube[i][j],HIGH);
      delay(timer);
    }
    digitalWrite(cube[i][j],HIGH);
    delay(timer);
  }
  
    for( j = 0; j != 5; j++) {
      for( i = 0; i != 6 ; i++) {
      
      digitalWrite(cube[i][j],LOW);
      delay(timer);
    }
    digitalWrite(cube[i][j],LOW);
    delay(timer);
  }
} 

void setup() {

  pinMode(BUTTON, INPUT_PULLUP);
  
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(A6,OUTPUT);

  pinMode(B1,OUTPUT);
  pinMode(B2,OUTPUT);
  pinMode(B3,OUTPUT);
  pinMode(B4,OUTPUT);
  pinMode(B5,OUTPUT);
  pinMode(B6,OUTPUT);

  pinMode(C1,OUTPUT);
  pinMode(C2,OUTPUT);
  pinMode(C3,OUTPUT);
  pinMode(C4,OUTPUT);
  pinMode(C5,OUTPUT);
  pinMode(C6,OUTPUT);

  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);

  pinMode(E1,OUTPUT);
  pinMode(E2,OUTPUT);
  pinMode(E3,OUTPUT);
  pinMode(E4,OUTPUT);
  pinMode(E5,OUTPUT);
  pinMode(E6,OUTPUT);

}


void loop() {
  
int btnPress = digitalRead(BUTTON);

if  (btnPress == LOW ) {
  
}

}
