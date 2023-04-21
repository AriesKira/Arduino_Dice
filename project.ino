#define A1 1
#define A2 2
#define A3 3
#define A4 4
#define A5 5

#define B1 6
#define B2 7
#define B3 8
#define B4 9
#define B5 10

#define C1 11
#define C2 12
#define C3 13
#define C4 14
#define C5 15

#define D1 16
#define D2 17
#define D3 18
#define D4 19
#define D5 20

#define E1 21
#define E2 22
#define E3 23
#define E4 24
#define E5 25

#define F1 26
#define F2 27
#define F3 28
#define F4 29
#define F5 30

#define G1 31
#define G2 32
#define G3 33
#define G4 34
#define G5 35

#define H1 36
#define H2 37
#define H3 38
#define H4 39
#define H5 40

#define I1 41
#define I2 42
#define I3 43
#define I4 44
#define I5 45

#define J1 46
#define J2 47
#define J3 48
#define J4 49
#define J5 50

int cube [10][5] = {{A1,A2,A3,A4,A5},{B1,B2,B3,B4,B5},{C1,C2,C3,C4,C5},{D1,D2,D3,D4,D5},{E1,E2,E3,E4,E5},{F1,F2,F3,F4,F5},{G1,G2,G3,G4,G5},{H1,H2,H3,H4,H5},{I1,I2,I3,I4,I5},{J1,J2,J3,J4,J5}};

void setup() {
  
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);

  pinMode(B1,OUTPUT);
  pinMode(B2,OUTPUT);
  pinMode(B3,OUTPUT);
  pinMode(B4,OUTPUT);
  pinMode(B5,OUTPUT);
  
  pinMode(C1,OUTPUT);
  pinMode(C2,OUTPUT);
  pinMode(C3,OUTPUT);
  pinMode(C4,OUTPUT);
  pinMode(C5,OUTPUT);

  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);

  pinMode(E1,OUTPUT);
  pinMode(E2,OUTPUT);
  pinMode(E3,OUTPUT);
  pinMode(E4,OUTPUT);
  pinMode(E5,OUTPUT);

  pinMode(F1,OUTPUT);
  pinMode(F2,OUTPUT);
  pinMode(F3,OUTPUT);
  pinMode(F4,OUTPUT);
  pinMode(F5,OUTPUT);

  pinMode(G1,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(G3,OUTPUT);
  pinMode(G4,OUTPUT);
  pinMode(G5,OUTPUT);
  
  pinMode(H1,OUTPUT);
  pinMode(H2,OUTPUT);
  pinMode(H3,OUTPUT);
  pinMode(H4,OUTPUT);
  pinMode(H5,OUTPUT);

  pinMode(I1,OUTPUT);
  pinMode(I2,OUTPUT);
  pinMode(I3,OUTPUT);
  pinMode(I4,OUTPUT);
  pinMode(I5,OUTPUT);

  pinMode(J1,OUTPUT);
  pinMode(J2,OUTPUT);
  pinMode(J3,OUTPUT);
  pinMode(J4,OUTPUT);
  pinMode(J5,OUTPUT);

}

void one() {

  digitalWrite(cube[2][0],HIGH);
  digitalWrite(cube[3][0],HIGH);
  digitalWrite(cube[4][0],HIGH);
  digitalWrite(cube[1][1],HIGH);
  digitalWrite(cube[2][1],HIGH);
  digitalWrite(cube[3][1],HIGH);
  digitalWrite(cube[0][2],HIGH);
  digitalWrite(cube[1][2],HIGH);
  digitalWrite(cube[2][2],HIGH);
  digitalWrite(cube[3][2],HIGH);
  digitalWrite(cube[4][2],HIGH);
  digitalWrite(cube[5][2],HIGH);
  digitalWrite(cube[6][2],HIGH);
  digitalWrite(cube[7][3],HIGH);
  digitalWrite(cube[8][2],HIGH);
  digitalWrite(cube[9][2],HIGH);
  digitalWrite(cube[1][3],HIGH);
  digitalWrite(cube[2][3],HIGH);
  digitalWrite(cube[3][3],HIGH);
  digitalWrite(cube[4][3],HIGH);
  digitalWrite(cube[5][3],HIGH);
  digitalWrite(cube[6][3],HIGH);
  digitalWrite(cube[7][3],HIGH);
  digitalWrite(cube[8][3],HIGH);
  digitalWrite(cube[9][3],HIGH);
  digitalWrite(cube[8][1],HIGH);
  digitalWrite(cube[9][1],HIGH);
  digitalWrite(cube[8][4],HIGH);
  digitalWrite(cube[9][5],HIGH);
}

void oneByOne(int timer) {
  int j;
  int i;
  for( i = 0; i != 10 ; i++) {
    for( j = 0; j != 5; j++) {
      digitalWrite(cube[i][j],HIGH);
      delay(timer);
    }
    digitalWrite(cube[i][j],HIGH);
    delay(timer);
  }
  for( i = 0; i != 10 ; i++) {
    for( j = 0; j != 5; j++) {
      digitalWrite(cube[i][j],LOW);
      delay(timer);
    }
    digitalWrite(cube[i][j],LOW);
    delay(timer);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  //one();
  oneByOne(50);
  
}
