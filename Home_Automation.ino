String input;
void setup() {
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
Serial.begin(9600);
}

void loop() {
while(Serial.available()){
  delay(3);
  char c = Serial.read();
  input+=c;}

if(input.length() >0){
  Serial.println(input);
  if(input == "LIGHT ON")
  {digitalWrite(6, HIGH);}
  else if(input == "LIGHT OFF")
  {digitalWrite(6, LOW);}
  else if(input == "FAN ON")
  {digitalWrite(5, HIGH);}
  else if(input == "FAN OFF")
  {digitalWrite(5, LOW);}
  else if(input == "NIGHT LAMP ON")
  {digitalWrite(4, HIGH);}
  else if(input == "NIGHT LAMP OFF")
  {digitalWrite(4, LOW);}
  else if(input == "ALL ON")
  {digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);}
  {digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  digitalWrite(6, LOW);}
  input = "";}
}
