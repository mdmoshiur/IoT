
















































int outputPin =6 ;
int inputPin = 5;
char inputData;
int EnA= 5, IN1=6, IN2=7, IN3 = 8, IN4=9, EnB = 10;

  int mySpeed = 100;
  void goForward()
  {
    analogWrite(EnA, mySpeed);
    analogWrite(EnB, mySpeed);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }

  void goBackward()
  {
    analogWrite(EnA, mySpeed);
    analogWrite(EnB, mySpeed);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }
  
  void turnLeft()
  {
    analogWrite(EnA, mySpeed);
    analogWrite(EnB, mySpeed);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
  void turnRight()
  {
    analogWrite(EnA, mySpeed);
    analogWrite(EnB, mySpeed);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }
  void stopCar()
  {
    analogWrite(EnA, 0);
    analogWrite(EnB, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }

void setup() {
  // put your setup code here, to run once:
  //pinMode(inputPin, INPUT);
  //pinMode(outputPin, OUTPUT);

  Serial.begin(9600);
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

}


void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()>1)
  {
    inputData = Serial.read();
  }
  
  switch(inputData)
  {
    case 'F':
      goForward();
      break;
    case 'B':
      goBackward();
      break;
    case 'L':
      turnLeft();
      break;
    case 'R':
      turnRight();
      break;
    case 'S':
      stopCar();
      break;
    case '0':
      mySpeed = 0;
      break;
    case '1':
      mySpeed = 20;
      break;
    case '2':
      mySpeed = 40;
      break;
    case '3':
      mySpeed = 60;
      break;
    case '4':
      mySpeed = 80;
      break;
    case '5':
      mySpeed = 100;
      break;
    case '7':
      mySpeed = 120;
      break;
    case '8':
      mySpeed = 140;
      break;
    case '9':
      mySpeed = 160;
      break;
    case 'q':
      mySpeed = 200;
      break;

   default:
    break;
      
  }

//  digitalWrite(outputPin, HIGH);
//  delay(1000);
//  digitalWrite(outputPin, LOW);
//  delay(1000);


  //analogWrite(outputPin, 250);
//  int i=0;
//  while(i<=255)
//  {
//    analogWrite(outputPin, i);
//    delay(500);
//     i++;
//    if(i==255)
//    {
//      i=0;
//    }
//  }

//      for(int i=0;i<=255;i++)
//      {
//        analogWrite(outputPin, i);
//        delay(500);
//      }

// int AD = analogRead(A1);
// Serial.println(AD);
// 
// if(digitalRead(inputPin) == HIGH)
// {
//    digitalWrite(outputPin, HIGH);
// } else 
// {
//  digitalWrite(outputPin, LOW);
// }
 
}
