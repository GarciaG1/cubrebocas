int led1 = 50;
int led2 = 51;
int option;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    option = Serial.read();
    Serial.println(option);
    if(option == 'P'){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
    }
    if(option == 'N'){
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
    }
  }
}