int pin= 3;
void setup() {
  // put your setup code here, to run once:
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial3.begin(115200);
  pinMode(pin, OUTPUT);
  pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial3.available() >0 ){
   char x = Serial3.read();
  Serial.println(x);
  if(x == 'S'){
    digitalWrite(pin, 1);
  } else {
    digitalWrite(pin, 0);
  }
 }
    
}
