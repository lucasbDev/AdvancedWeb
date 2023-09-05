
const int led2 = 12; //Atribui o valor 10 a variável led
const int sdl = A0;
int luz = 0;

void setup(){
  pinMode(sdl, INPUT);
  Serial.begin(9600);
}

void loop(){
  luz = analogRead(sdl);
    Serial.println(analogRead(sdl));
    delay(1000);

     if((luz) < 700){
    digitalWrite(led2, HIGH);
  }  
  else{  
    digitalWrite(led2, LOW);
  }  
}
