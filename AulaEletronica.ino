void setup(){
    
  Serial.begin(9600);
  
  pinMode(A5, INPUT);
  pinMode(13,OUTPUT);
  pinMode(12, OUTPUT);
  
}

void loop(){

  if(digitalRead(A5)== HIGH){
    
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
  
  }else{ 
  
   digitalWrite(13,LOW);
     digitalWrite(12,LOW);
  }


}
