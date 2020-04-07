void setup(){
  Serial.begin(9600);
  pinMode(D1,OUTPUT); //LED
}

void loop(){
    int val = analogRead(A0);
    Serial.println(val); // Print value of humid
    delay(1000);
    if(val < 1000){
      //Serial.println("Yah");
      analogWrite(D1,800); //LED light when humid is lower than 1000
    }else{
      analogWrite(D1,0);
    }
}
