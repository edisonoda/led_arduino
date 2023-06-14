void desligaLED (){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

int pot; 

void setup()
{ 
	pinMode (13, OUTPUT);
    pinMode (12, OUTPUT);
    pinMode (11, OUTPUT);
    
    pinMode (A0, INPUT);
    Serial.begin (9600);
}

void loop ()
{
  
  pot = analogRead (A0);
  Serial.println ("pot= ");
  Serial.println (pot);
  
  if (pot <= 341){
   	 desligaLED();
     digitalWrite (13, HIGH);
  }
  else if (pot<= 682){ 
   	 desligaLED();
     digitalWrite (12, HIGH);
  }
  else{
     desligaLED();
     digitalWrite (11, HIGH);
 }
} 