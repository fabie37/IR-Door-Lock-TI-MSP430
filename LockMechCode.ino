
#include <IRremote.h>

#define bttnFor 924466310
#define bttnRev 338831067


//Set variable placeholders for Pins
int const forward = 6;
int const reverse = 7;
int RECV_PIN = 11;
int lockStop = 0;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  //Begin serial transmission at 9600
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(forward, OUTPUT);
  pinMode(reverse, OUTPUT);
  digitalWrite(reverse, LOW);
  digitalWrite(forward, LOW);
}

void loop() {
  if (irrecv.decode(&results)) 
  {
    //Serial.println(results.value, HEX);
    switch (results.value) 
    {
      case bttnFor :
        if (lockStop < 1) 
        {
          digitalWrite(reverse, LOW);
          digitalWrite(forward, HIGH);
          sleep(200);
          digitalWrite(forward, LOW);
          //Serial.println("I'm running forward");
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
          //Serial.println("I'm running in reverse");
          lockStop = 0;
        }
      break;

      default :
        digitalWrite(forward, LOW);
        digitalWrite(reverse, LOW);
    }
    sleep(500);
    irrecv.resume(); // Receive the next value
  }
}

