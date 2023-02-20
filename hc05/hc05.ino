int relay1 = D8;
int relay2 = D9;
void setup() {
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
 pinMode(relay2,OUTPUT);
digitalWrite(relay1,HIGH);
digitalWrite(relay2,HIGH);
}
String voice;
void loop() {
  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }
  if(voice=="Mở đèn phòng khách")
  {
    digitalWrite(relay1,LOW);
  } 
  if(voice=="Tắt đèn phòng khách")
  {
    digitalWrite(relay1,HIGH);
  }
 if(voice=="mở đèn phòng ngủ")
  {
    digitalWrite(relay2,LOW);
  } 
  if(voice=="tắt đèn phòng ngủ")
  {
    digitalWrite(relay2,HIGH);
  }
 if(voice=="tắt hết đèn")
  {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
  }  
 if(voice=="mở hết đèn")
  {
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
  }  
}
