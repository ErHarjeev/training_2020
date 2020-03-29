#include <Arduino.h>
const uint8_t Button = A0;
bool status=0; 

void setup() 
  {
  Serial.begin(9600);
  pinMode(Button,INPUT_PULLUP);
  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(LED_BUILTIN,LOW); // pyour setup code here, to run once:
  }

void loop() {

         
        if (digitalRead(Button) == 0)
        {
            status = !status;
            digitalWrite(LED_BUILTIN,status);
            if (status == 1)
            {
              Serial.println("Led is On");

            }
            else
            {
              Serial.println("LED is OFF");
            }

            delay(500);
            while(digitalRead(Button) == 0)
            {;}
        }

}

