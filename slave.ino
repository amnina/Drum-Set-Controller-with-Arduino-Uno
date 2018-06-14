#include <Wire.h>
#include <avr/io.h>
int count = 0;
int sl1 = 2;
int sl2 = 3;
int sr1 = 4;
int sr2 = 5;
int ol1 = 8;
int ol2 = 9;
int or1 = 10;
int or2 = 11;
char key = 0;
int val = 0;
//qqwewetytyuiui

void setup() {
  //normal mode
    TCCR1A = 0;
    TCCR1B |= (1 << CS10);
    //TCCR1B |= (1 << CS11);
    //TCCR1B |= (1<<CS11) | (1 << CS10);
    //TCCR1B = (1 << CS12);
    //TCCR1B = (1 << CS12) | (1 << CS10);
    TCCR1C = 0;
    
    //TIMER COUNTER
    TCNT1H = 0;
    TCNT1L = 0;
    
    //DISABLE INTERRUPT
    TIMSK1 = 0;
    TIFR1 = 0;
    Wire.begin(7);                // join i2c bus with address #7
    Serial.begin(9600);  // start serial for output
    pinMode(sl1, OUTPUT);
    pinMode(sl2, OUTPUT);
    pinMode(sr1, OUTPUT);
    pinMode(sr2, OUTPUT);
    pinMode(ol1, OUTPUT);
    pinMode(ol2, OUTPUT);
    Wire.onReceive(receiveEvent); // register event
}

void loop()
{
  
}



// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int HowMany){

    if (Wire.available() > 0)
  {
    key = Wire.read();
    
    if (key == 'q')
    {
      Serial.println("q");
      while (count < 1)
      {
        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(2);
        
        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(1);
        
        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(1);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(2);
        count++;
        }
    }

    else if (key == 'a')
    {
      Serial.println("a");
      while (count < 1)
      {
        digitalWrite(ol1, LOW);
        digitalWrite(ol2, HIGH);
        TDelay(1);
        digitalWrite(ol1, HIGH);
        digitalWrite(ol2, LOW);
        TDelay(1);
        count++;
        }
    }

    else if (key == 'w'){
      while (count < 1){
        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        digitalWrite(ol1, LOW);
        digitalWrite(ol2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
       digitalWrite(ol1, HIGH);
        digitalWrite(ol2, LOW);
        TDelay(2);
        
        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(1);
        
        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(1);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(1);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(2);
        count++;
      }
    }
        
      else if (key == 'e'){
        while (count < 1){
        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        digitalWrite(ol1, LOW);
        digitalWrite(ol2, HIGH);
        TDelay(1);
        digitalWrite(ol1, HIGH);
        digitalWrite(ol2, LOW);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(2);
        
        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(1);
        
        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(2);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(2);
        count++;
        }
      }

      else if (key == 't'){
        while (count < 1){
          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          digitalWrite(ol1, LOW);
        digitalWrite(ol2, HIGH);
          TDelay(1);
          digitalWrite(ol1, HIGH);
        digitalWrite(ol2, LOW);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
         digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(2);
        count++;
        }
      }

      else if (key == 'y'){
        while (count < 1){
          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          digitalWrite(ol1, LOW);
        digitalWrite(ol2, HIGH);
          TDelay(1);
          digitalWrite(ol1, HIGH);
        digitalWrite(ol2, LOW);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
         digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

        digitalWrite(sr1, LOW);
        digitalWrite(sr2, HIGH);
        TDelay(1);
        digitalWrite(sr1, HIGH);
        digitalWrite(sr2, LOW);
        TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
        digitalWrite(sl2, HIGH);
        TDelay(1);
        digitalWrite(sl1, HIGH);
        digitalWrite(sl2, LOW);
        TDelay(2);
        count++;
        }
      }

      else if (key == 'u'){
        while (count < 1){
          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(2);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(2);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(1);

          digitalWrite(sr1, LOW);
          digitalWrite(sr2, HIGH);
          TDelay(1);
          digitalWrite(sr1, HIGH);
          digitalWrite(sr2, LOW);
          TDelay(2);
          count++;
        }
      }

      else if (key == 'i'){
        while (count < 1){
          digitalWrite(sr1, LOW);
          digitalWrite(sr2, HIGH);
          TDelay(1);
          digitalWrite(sr1, HIGH);
          digitalWrite(sr2, LOW);
          TDelay(2);

          digitalWrite(sr1, LOW);
          digitalWrite(sr2, HIGH);
          TDelay(1);
          digitalWrite(sr1, HIGH);
          digitalWrite(sr2, LOW);
          TDelay(2);

          digitalWrite(sr1, LOW);
          digitalWrite(sr2, HIGH);
          TDelay(1);
          digitalWrite(sr1, HIGH);
          digitalWrite(sr2, LOW);
          TDelay(1);

          digitalWrite(sr1, LOW);
          digitalWrite(sr2, HIGH);
          TDelay(1);
          digitalWrite(sr1, HIGH);
          digitalWrite(sr2, LOW);
          TDelay(1);

          digitalWrite(sr1, LOW);
          digitalWrite(sr2, HIGH);
          TDelay(1);
          digitalWrite(sr1, HIGH);
          digitalWrite(sr2, LOW);
          TDelay(1);

          digitalWrite(sl1, LOW);
          digitalWrite(sl2, HIGH);
          TDelay(1);
          digitalWrite(sl1, HIGH);
          digitalWrite(sl2, LOW);
          TDelay(2);
          count++;
        }
      }
      
      else if (key == 'r'){
       Serial.println("r");
      while (count < 1){
        digitalWrite(sl1,HIGH);
        digitalWrite(sl2,LOW);
        digitalWrite(sr1,HIGH);
        digitalWrite(sr2,LOW);
        count++;
      }
    }
      count = 0;
      key = 'z';

}
}
void TDelay(int t){
  int counter = 0;
  TCNT1 = 0;
  while (counter < t){
     if(TCNT1==20000)
      {
       counter++;
       Serial.print(counter);
      };
  }
}


