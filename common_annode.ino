int dataPin  = D5;
int clockPin = D6;
int latchPin = D7;

int digitPins[4] = {D1, D2, D3, D4};

// bit positions
#define SEG_F  0
#define SEG_A  1
#define SEG_D  2
#define SEG_E  3
#define SEG_C  4
#define SEG_G  5
#define SEG_B  6
#define SEG_DP 7

byte makeDigit(bool a,bool b,bool c,bool d,bool e,bool f,bool g,bool dp=false){

  byte val = 0xFF;

  if(a) bitClear(val, SEG_A);
  if(b) bitClear(val, SEG_B);
  if(c) bitClear(val, SEG_C);
  if(d) bitClear(val, SEG_D);
  if(e) bitClear(val, SEG_E);
  if(f) bitClear(val, SEG_F);
  if(g) bitClear(val, SEG_G);
  if(dp) bitClear(val, SEG_DP);

  return val;
}

byte numbers[10];

void setup() {

  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);

  for(int i=0;i<4;i++) {

    pinMode(digitPins[i], OUTPUT);
    digitalWrite(digitPins[i], HIGH);
  }

  // generate numbers dynamically

  numbers[0] = makeDigit(1,1,1,1,1,1,0);
  numbers[1] = makeDigit(0,1,1,0,0,0,0);
  numbers[2] = makeDigit(1,1,0,1,1,0,1);
  numbers[3] = makeDigit(1,1,1,1,0,0,1);
  numbers[4] = makeDigit(0,1,1,0,0,1,1);
  numbers[5] = makeDigit(1,0,1,1,0,1,1);
  numbers[6] = makeDigit(1,0,1,1,1,1,1);
  numbers[7] = makeDigit(1,1,1,0,0,0,0);
  numbers[8] = makeDigit(1,1,1,1,1,1,1);
  numbers[9] = makeDigit(1,1,1,1,0,1,1);
}

void displayDigit(int digit, int num){

  for(int i=0;i<4;i++) {
    digitalWrite(digitPins[i], HIGH);
  }

  digitalWrite(latchPin, LOW);

  shiftOut(dataPin, clockPin, MSBFIRST, numbers[num]);

  digitalWrite(latchPin, HIGH);

  digitalWrite(digitPins[digit], LOW);

  delay(2);

  digitalWrite(digitPins[digit], HIGH);
}

void loop() {

  displayDigit(0,1);
  displayDigit(1,2);
  displayDigit(2,3);
  displayDigit(3,4);
}