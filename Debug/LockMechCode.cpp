#line 1 "/home/fabrizio/workspace_v6_1_3/LockMechCode/LockMechCode.ino"

#include <IRremote.h>

#define bttnFor 924466310
#define bttnRev 338831067



#include "Energia.h"

void setup();
void loop();

#line 9
int const forward = 6;
int const reverse = 7;
int RECV_PIN = 11;
int lockStop = 0;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  pinMode(forward, OUTPUT);
  pinMode(reverse, OUTPUT);
  digitalWrite(reverse, LOW);
  digitalWrite(forward, LOW);
}

void loop() {
  if (irrecv.decode(&results)) 
  {
    
    switch (results.value) 
    {
      case bttnFor :
        if (lockStop < 1) 
        {
          digitalWrite(reverse, LOW);
          digitalWrite(forward, HIGH);
          sleep(200);
          digitalWrite(forward, LOW);
          
          lockStop = 1;
        }
      break;

      case bttnRev :
        if (lockStop > 0) 
        {
          digitalWrite(forward, LOW);
          digitalWrite(reverse, HIGH);
          sleep(200);
          digitalWrite(reverse, LOW);
          
          lockStop = 0;
        }
      break;

      default :
        digitalWrite(forward, LOW);
        digitalWrite(reverse, LOW);
    }
    sleep(500);
    irrecv.resume(); 
  }
}




