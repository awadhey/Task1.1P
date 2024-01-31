void setup()
{
  pinMode(8, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop()
{

  if(digitalRead(4) == HIGH)
  {
  
    digitalWrite(8,HIGH);
    Serial.println("there is a moverment");
  }
  else
  {
    
    digitalWrite(8,LOW);
    Serial.println("these is no movement");
  }
  
  delay(1000);
}  