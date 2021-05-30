int menu_input;
int number;
int result;

void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT);
     
}

 
void loop() {
  
  while(Serial.available() > 0) {

    menu_input = Serial.parseInt(); // Serial Porttan değer okuma
   
    switch (menu_input){

      case 0:
            
            digitalWrite(13,LOW);          
            break;

      case 1:
            
            digitalWrite(13,HIGH);//13. pindeki ledi açar                     
            break;
      case 2:
            
            digitalWrite(13,LOW);//13. pindeki ledi söndürür 
            break;
      case 3:         
        for(int i=0;i<3;i++)
        {
            digitalWrite(13,HIGH);
            delay(700);
            digitalWrite(13,LOW);
            delay(700);
        }
            break;
      case 4:
          
            delay(6000);//karesini aldırırken 6 saniyelik bir süre veriyor
          if(Serial.available()!=0){//bir değer girildiğini anladığında aşağıdaki işlemlere geçer
            number =Serial.read();
            result=(number*number);
            Serial.print(String(result) + "*"); // byte olarak alınan değeri yazdırma
            Serial.flush();
            break;

          }   
     }

  }
  
}
