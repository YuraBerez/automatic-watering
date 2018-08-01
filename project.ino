// contact for connecting the analog output of the sensor
int aPin=A0;

// pump connection
int outer = 13;

// variable for storing sensor values
int avalue = 0;

void setup()
{
  // serial port initialization
  Serial.begin(9600);
  
  pinMode(outer,OUTPUT);
}

void loop()
{
  // getting the value from the analog output of the sensor
  avalue = analogRead(aPin);
  
  Serial.print(avalue);
  
  if(avalue < 400)
  {
    digitalWrite(outer,LOW); // turn on the pump
    Serial.println(" Good");
  }
  else
  {
    digitalWrite(outer, HIGH); // turn off the pump
    Serial.println(" BAD");
  }
  delay(500);
}
