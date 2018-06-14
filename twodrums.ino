#include <avr/io.h>
#include <LiquidCrystal.h>

int l1 = 7;
int l2 = 8;
int r1 = 9;
int r2 = 10;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char key = 'z'; //default keystroke
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  //left and right sticks
  pinMode(l1, OUTPUT); 
  pinMode(l2, OUTPUT); 
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);

  lcd.begin(16, 2);
       // Print a message to the LCD.
      lcd.print("Hi. ");
      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print("We are Team 9");


}

void loop() {
  // put your main code here, to run repeatedly:
    if (Serial.available() > 0) 
    {
      //read the incoming byte
      key = Serial.read();
      
      lcd.begin(16, 2);
       // Print a message to the LCD.
      lcd.print("Now playing ...");
      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print("a random song");
    }

    if (key=='a') //first pattern
    {
      Serial.println("a");

      while(count<1)
      {
        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        delay(200);
        digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(100); 

        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        delay(100);
        digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(100); 

        digitalWrite(r1,LOW);
        digitalWrite(r2,HIGH);
        delay(300);
        digitalWrite(r1,HIGH);
        digitalWrite(r2,LOW);
        delay(100);
        delay(890); // to make 
        count++;
      }
    } 

    //resets drumsticks
    else if (key == 'r'){
       Serial.println("r");
      while (count < 1){
       digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(300);
        digitalWrite(r1,HIGH);
        digitalWrite(r2,LOW);
        delay(100);
        count++;
      }
    }
    
        else if (key == 'b') // hi-tom
    {
      while(count<1)
      {
        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        delay(100);

        digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(100); 
        count++;
      }
        
    }

    else if (key == 'v') // mid tom
    {
      while(count<1)
      {
        digitalWrite(r1,LOW);
        digitalWrite(r2,HIGH);
        delay(100);

   digitalWrite(r1,HIGH);
        digitalWrite(r2,LOW);
        delay(100);
        delay(1000);
        count++;
      }

      
      
    }


        else if (key == 'l') //last pattern
    {
      while(count<1)
      {
        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        delay(100);

        digitalWrite(r1,LOW);
        digitalWrite(r2,HIGH);
        delay(100);

        digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(50); 
        
        digitalWrite(r1,HIGH);
        digitalWrite(r2,LOW);
        delay(50); 

      lcd.clear();
      lcd.begin(16, 2);
      lcd.print("Thank you !!");
      
        count++;
      }

      
      
    }

    else if (key == 'c') // right
    {
      while(count<1)
      {
        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        delay(400);

        digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(50); 

        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        delay(400);

        digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(50); 

        digitalWrite(l1,LOW);
        digitalWrite(l2,HIGH);
        delay(400);

        digitalWrite(l1,HIGH);
        digitalWrite(l2,LOW);
        delay(50);

        digitalWrite(r1,LOW);
        digitalWrite(r2,HIGH);
        delay(100);

        digitalWrite(r1,HIGH);
        digitalWrite(r2,LOW);
        delay(300);

         
        count++;
      }

      
    }

    count = 0; //resets count 
    key = 'z'; //resets keystroke 
}


