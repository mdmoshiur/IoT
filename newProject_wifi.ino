
int echo = 12;
int trig =13;

double totalTime;
double s, v = 344, t;

void setup() {
  // put your setup code here, to run once:
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  totalTime = pulseIn(echo, HIGH);
  t = totalTime/2.0;
  s = v*t;

  Serial.println(s);

}
