//Tested OK 

const int led = 10;
const int button = 7;
bool state;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(button);
  Serial.println(state);

  digitalWrite(led,state);
  // digitalWrite(led, LOW);  

}