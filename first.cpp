//////////LED

int State = 12;
int State2 = 11;

void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
 
    digitalWrite(State,HIGH);
    delay(1000);
  	digitalWrite(State,LOW);
    delay(1000);
    digitalWrite(State2,HIGH);
    delay(1000);
  	digitalWrite(State2,LOW);
    delay(1000);
}




///////////////TMP
int tempPin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int temp = analogRead(tempPin);
  temp = temp * 0.1039;
  Serial.print("TEMP=");
  Serial.print(temp);
  Serial.print("*c");
  Serial.println();
  delay(1000);
}
