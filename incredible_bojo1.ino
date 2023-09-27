const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int bt = 5;
const int on = HIGH;
const int off = LOW;
int read;
int x;

//int clickCount = 0;
//int buttonState;
//int lastButtonState;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(bt, INPUT);
  Serial.begin(9600);
}

void loop() {
  read = digitalRead(bt);
  if(read == on){
    delay(120);
    x++;
    switch (x)
    {
      case 1: digitalWrite(led1, on); 
      break;

      case 2: digitalWrite(led2, on);
      break;

      case 3: digitalWrite(led3, on);
      break;

      case 4: digitalWrite(led1, off);
      digitalWrite(led2, off);
      digitalWrite(led3, off);
      x=0;
      delay(250);
    }    
  }
}