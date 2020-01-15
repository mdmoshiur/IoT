int pin= 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial3.begin(115200);
  //pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() >0 ){
    char x = Serial.read();
    Serial3.print(x);
  }
  if(Serial3.available() >0 ){
    char x = Serial3.read();
    Serial.print(x);
  }

}
