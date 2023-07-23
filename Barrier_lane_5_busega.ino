
const int ups = 8;
const int upo = 10;
const int dowo = 11;
const int com = 12;

const int upi = A3;
const int dowi = A2;
const int upl = A5;
const int dowl = A1;


void setup() 
{
  pinMode(upo, OUTPUT);
  digitalWrite(upo, LOW);
  pinMode(dowo, OUTPUT);
  digitalWrite(dowo, LOW);
  pinMode(ups, OUTPUT);
  digitalWrite(ups, LOW);
  pinMode(com, OUTPUT);
  digitalWrite(com, LOW);

  pinMode(upi, INPUT_PULLUP);
  pinMode(dowi, INPUT_PULLUP);
  pinMode(upl, INPUT_PULLUP);
  pinMode(dowl, INPUT_PULLUP);

}

void loop(){

   
    int c= 30;
    while (c>1 && digitalRead(upi)== 0 && digitalRead(dowi)== 0 || digitalRead(upi)== 1 && digitalRead(dowi)== 1 )
      { 
         digitalWrite(upo, LOW);
         digitalWrite(com, LOW);
         digitalWrite(dowo, LOW);
        }
// up cycle


if(digitalRead(upi)== 0 && digitalRead(dowi)== 1)
  {
    //reset outputs
    digitalWrite(upo, LOW);
    digitalWrite(com, LOW);
    digitalWrite(dowo, LOW);
   // set output values
   digitalWrite(ups, HIGH);
   digitalWrite(upo, HIGH);
   digitalWrite(com, HIGH);
  
// open cycle time in milliseconds
   delay(1500);
  
  // break loop
     if (digitalRead(dowl)!= 0)
     {
       int f=23;
       for (f>1 ; f< 27 ; f++)
       { 
       delay (80);
       digitalWrite(upo,LOW);
        digitalWrite(dowo,LOW);
       digitalWrite(com, LOW);
       delay(80); 
       digitalWrite(upo,HIGH);
       digitalWrite(com, HIGH);
       delay(80);
       }
      }

/// main infinit loop 1
    int d = 34;
    while(d>1 && digitalRead(upi)== 0)
   {
     digitalWrite(upo, HIGH);
     digitalWrite(com, LOW);
     digitalWrite(dowo, LOW);

    if(digitalRead(upi)== 0 && digitalRead(dowi)== 0 || digitalRead(upi)== 1 && digitalRead(dowi)== 1)
    {
// internal infinit loop 1
    int d = 34;
    while(d>1 && digitalRead(upi)== 0)
   {
     digitalWrite(upo, LOW);
     digitalWrite(com, LOW);
     digitalWrite(dowo, LOW);
    }
  
    } 
   }

  
  // limit switch functionality
/*

 if (digitalRead(upl)== 0){
     int f=23;
     for (f>1;f<27; f++){ 
       digitalWrite(upo,LOW);
       digitalWrite(com, LOW);
       delay(80);
       digitalWrite(upo,HIGH);
       digitalWrite(dowo, HIGH);
       digitalWrite(com, HIGH);
       delay (80);
       digitalWrite(upo,LOW);
       digitalWrite(dowo, LOW);
       digitalWrite(com, LOW);
       delay(80);
       digitalWrite(upo,HIGH);
         digitalWrite(dowo, HIGH);
       digitalWrite(com, HIGH);
       delay(80); }

       int c= 30;
       while (c>1 && digitalRead(upl)== 0 && digitalRead(upi)== 0){ 
         digitalWrite(upo, HIGH);
         digitalWrite(com, LOW);
         digitalWrite(dowo, LOW);
          }
      }
  */


}

// down cycle


if (digitalRead(dowi)== 0 && digitalRead(upi)== 1)
{
  //reset output
  digitalWrite(upo, LOW);
  digitalWrite(com, LOW);
  digitalWrite(dowo, LOW);
// set output values

 digitalWrite(upo, LOW);
 digitalWrite(ups, LOW);
 digitalWrite(dowo, HIGH);
 digitalWrite(com, HIGH);
 delay(1500);
    int f=23;
    for (f>1 ; f< 27 ; f++)
     { 
       digitalWrite(upo, HIGH);
       delay (80);
       digitalWrite(upo,LOW);
       digitalWrite(dowo, LOW);
       digitalWrite(com, LOW);
       delay(80);
       digitalWrite(upo,HIGH);
       digitalWrite(com, HIGH);
       digitalWrite(dowo, HIGH);
       delay(80);
      }
    // main infinit loop 2
    int c= 30;
    while (c>1 && digitalRead(upi)== 1)
      { 
         digitalWrite(upo, LOW);
         digitalWrite(com, LOW);
         digitalWrite(dowo, LOW);
        }
   
}
  }
  


  
 
