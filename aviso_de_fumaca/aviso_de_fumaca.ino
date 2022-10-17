int LED = 12;
int buzzer = 13;
int sensorGas = A0;
int leituraGas = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(sensorGas, INPUT);
  
}

void loop()
{
  noTone(13);
  leituraGas = analogRead(sensorGas);
  Serial.println(leituraGas);
  
  if(leituraGas>120){
  	digitalWrite(LED, HIGH);
    //delay(1000);
    tone(buzzer, 200);
    delay(300);
    //digitalWrite(LED, LOW);
    noTone(buzzer);
    delay(300);
  }
  else if(leituraGas<120){
    noTone(13);
    digitalWrite(LED, LOW);
    //tone(buzzer, 0);
    
  }
}