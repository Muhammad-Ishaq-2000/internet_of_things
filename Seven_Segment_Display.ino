
String number; 
#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8
#define dotpix 9
int COUNT=0;

void setup() {
 
  {
    
    pinMode(segA,OUTPUT);
    pinMode(segB,OUTPUT);
    pinMode(segC,OUTPUT);
    pinMode(segD,OUTPUT);
    pinMode(segE,OUTPUT);
    pinMode(segF,OUTPUT);
    pinMode(segG,OUTPUT);
    pinMode(dotpix,OUTPUT);
  }

}

void loop() {
  switch(COUNT)
  {
    case 0:
   
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,LOW);
    digitalWrite(dotpix,HIGH);
    break;
     case 1:
    digitalWrite(segA,LOW);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,LOW);
    break;
     case 2:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,LOW);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);
    break;

     case 3:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);
    break;
     case 4:
    digitalWrite(segA,LOW);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;
      case 5:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;

    case 6:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;

     case 7:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,LOW);
    break;

     case 8:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;
     case 9:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;
   
  }
    if(COUNT<10)
    {
      COUNT++;
      delay(1000);
    }
    if(COUNT==10)
    {
      COUNT=0;
      delay(2000);
    }
    


    
  }
