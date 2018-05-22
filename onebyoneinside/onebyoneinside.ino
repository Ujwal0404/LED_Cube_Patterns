const int dataPin = 2;                                //Data Pin. Byte by Byte DATA Transfer
const int latchPin = 3;                               //Latch Pin. Latch OFF -> Data Shift -> Latch ON
const int clockPin = 4;                               //Clock Pin.<>

char databyteforSR1;                                   //ShiftRegister=X-X-X-X-X-X-C20-C19
char databyteforSR2;                                   //ShiftRegister=C18-C17-C16-C15-C14-C13-C12-C11
char databyteforSR3;                                   //ShiftRegister=C10-C9-C8-C7-C6-C5-C4-C3
char databyteforSR4;                                   //ShiftRegister=C2-C1-B10-B9-B8-B7-B6-B5
char databyteforSR5;                                   //ShiftRegister=B4-B3-B2-B1-G10-G9-G8-G7
char databyteforSR6;                                   //ShiftRegister=G6-G5-G4-G3-G2-G1-R10-R9
char databyteforSR7;                                   //ShiftRegister=R8-R7-R6-R5-R4-R3-R2-R1
int t=200,i=1,j,k,c=1;
void setup() {
    pinMode(dataPin, OUTPUT);                         //Set DATA Pin as OUTPUT
    pinMode(latchPin, OUTPUT);                        //Set LATCH Pin as OUTPUT
    pinMode(clockPin, OUTPUT);                        //Set CLOCK Pin as OUTPUT
}
void loop(){
  for(c=1;c<=5;c++)
                  {
    if(c==1)
           {
           for(k=1;k<=4;k++)
                           {
               if(k==1)
                       {
      for(j=1;j<=10;j++)
                       {
     for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,1,'r',1);delay(t);resetAll(); 
                       }
                       }
            else if(k==2)
                       {
 for(j=1;j<=10;j++)
                  {
for(int i=1;i<=10;i++) RGBLED_Coordinates(10,i,j,'r',1);delay(t);resetAll(); }
 }
           else if(k==3)
                {
for(j=10;j>=1;j--){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,10,'r',10);delay(t);resetAll(); }
 }
             else
              {
   for(j=10;j>=1;j--) {
for(int i=1;i<=10;i++)RGBLED_Coordinates(1,i,j,'r',1);delay(t);resetAll(); }
 }
 
              }}
else if(c==2)
    {
             for(k=1;k<=4;k++)
                  {
               if(k==1)
  {
for(j=2;j<=9;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,2,'g',1);delay(t);resetAll(); }
 }
            else if(k==2)
                 {
for(j=2;j<=9;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(9,i,j,'g',1);delay(t);resetAll(); }
 }
           else if(k==3)
                {
for(j=9;j>=2;j--){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,9,'g',1);delay(t);resetAll(); }
 }
             else
              {
   for(j=9;j>=2;j--) {
for(int i=1;i<=10;i++)RGBLED_Coordinates(2,i,j,'g',1);delay(t);resetAll(); }
 }
 }
                 }

else if(c==3)
  {
             for(k=1;k<=4;k++)
                  {
               if(k==1)
  {
    for(j=3;j<=8;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,3,'b',1);delay(t);resetAll(); }
 }
            else if(k==2)
                 {
for(j=3;j<=8;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(8,i,j,'b',1);delay(t);resetAll(); }
 }
           else if(k==3)
                {
for(j=8;j>=3;j--){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,8,'b',10);delay(t);resetAll(); }
 }
             else
              {
   for(j=8;j>=3;j--) {
for(int i=1;i<=10;i++)RGBLED_Coordinates(3,i,j,'b',1);delay(t);resetAll(); }
}
 }
              }


else if(c==4)
    {
             for(k=1;k<=4;k++)
                  {
               if(k==1)
  {
for(j=4;j<=7;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,4,'g',1);delay(t);resetAll(); }
 }
            else if(k==2)
                 {
for(j=4;j<=7;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(7,i,j,'g',1);delay(t);resetAll(); }
 }
           else if(k==3)
                {
for(j=7;j>=4;j--){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,7,'g',10);delay(t);resetAll(); }
 }
             else
              {
   for(j=7;j>=4;j--) {
for(int i=1;i<=10;i++)RGBLED_Coordinates(4,i,j,'g',1);delay(t);resetAll(); }
 }
 }
              }
              else 
    {
             for(k=1;k<=4;k++)
                  {
               if(k==1)
  {
for(j=5;j<=6;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,5,'r',1);delay(t);resetAll(); }
 }
            else if(k==2)
                 {
for(j=5;j<=6;j++){
for(int i=1;i<=10;i++) RGBLED_Coordinates(6,i,j,'r',1);delay(t);resetAll(); }
 }
           else if(k==3)
                {
for(j=6;j>=5;j--){
for(int i=1;i<=10;i++) RGBLED_Coordinates(j,i,6,'r',10);delay(t);resetAll(); }
 }
             else
              {
   for(j=6;j>=5;j--) {
for(int i=1;i<=10;i++)RGBLED_Coordinates(5,i,j,'r',1);delay(t);resetAll(); }
 }
 }
              }

}
}
//void loop() {
//  //Animation
//  char i;
//  char j;
//  char k;
//  char c;
///////////////////////////////////////////////////CHECKALL
//  for(i=1; i<=10; i++)
//  {
//    for(j=1; j<=10; j++)
//    {
//      for(k=1; k<=10; k++)
//      {
//        RGBLED_Coordinates(i,j,k,'r',1);
//        delay(100);
//        resetAll();
//        delay(100);
//      }
//    }
//  }
//  for(i=1; i<=10; i++)
//  {
//    for(j=1; j<=10; j++)
//    {
//      for(k=1; k<=10; k++)
//      {
//        RGBLED_Coordinates(i,j,k,'g',1);
//        delay(100);
//        resetAll();
//        delay(100);
//      }
//    }
//  }
//  for(i=1; i<=10; i++)
//  {
//    for(j=1; j<=10; j++)
//    {
//      for(k=1; k<=10; k++)
//      {
//        RGBLED_Coordinates(i,j,k,'b',1);
//        delay(100);
//        resetAll();
//        delay(100);
//      }
//    }
//  }
//  
///////////////////////////////////////////////////CHECKALL
//
///////////////////////////////////////////////////RANDOM
////  char color[]={'r','b','g'};
////  i= random(1,11);
////  j= random(1,11);
////  k= random(1,11);
////  c= random(0,3);
////  RGBLED_Coordinates(i,j,k,color[c],1);
////  delay(10);
////  resetAll();
////  delay(10);
///////////////////////////////////////////////////RANDOM
//
///////////////////////////////////////////////////AUM
////  float waittime = 0;
////  
////  RGBLED_Coordinates(10,5,3,'r',1);delay(waittime);RGBLED_Coordinates(10,5,3,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,4,4,'r',1);delay(waittime);RGBLED_Coordinates(10,4,4,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,4,5,'r',1);delay(waittime);RGBLED_Coordinates(10,4,5,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,5,6,'r',1);delay(waittime);RGBLED_Coordinates(10,5,6,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,6,6,'r',1);delay(waittime);RGBLED_Coordinates(10,6,6,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,7,6,'r',1);delay(waittime);RGBLED_Coordinates(10,7,6,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,7,5,'r',1);delay(waittime);RGBLED_Coordinates(10,7,5,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,7,6,'r',1);delay(waittime);RGBLED_Coordinates(10,7,6,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,7,7,'r',1);delay(waittime);RGBLED_Coordinates(10,7,7,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,8,7,'r',1);delay(waittime);RGBLED_Coordinates(10,8,7,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,9,7,'r',1);delay(waittime);RGBLED_Coordinates(10,9,7,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,10,6,'r',1);delay(waittime);RGBLED_Coordinates(10,10,6,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,10,5,'r',1);delay(waittime);RGBLED_Coordinates(10,10,5,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,10,4,'r',1);delay(waittime);RGBLED_Coordinates(10,10,4,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,9,3,'r',1);delay(waittime);RGBLED_Coordinates(10,9,3,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,8,2,'r',1);delay(waittime);RGBLED_Coordinates(10,8,2,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,7,1,'r',1);delay(waittime);RGBLED_Coordinates(10,7,1,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,7,7,'r',1);delay(waittime);RGBLED_Coordinates(10,7,7,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,6,8,'r',1);delay(waittime);RGBLED_Coordinates(10,6,8,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,5,8,'r',1);delay(waittime);RGBLED_Coordinates(10,5,8,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,5,9,'r',1);delay(waittime);RGBLED_Coordinates(10,5,9,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,6,10,'r',1);delay(waittime);RGBLED_Coordinates(10,6,10,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,7,10,'r',1);delay(waittime);RGBLED_Coordinates(10,7,10,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,8,10,'r',1);delay(waittime);RGBLED_Coordinates(10,8,10,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,9,9,'r',1);delay(waittime);RGBLED_Coordinates(10,9,9,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,8,8,'r',1);delay(waittime);RGBLED_Coordinates(10,8,8,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,2,6,'r',1);delay(waittime);RGBLED_Coordinates(10,2,6,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,3,7,'r',1);delay(waittime);RGBLED_Coordinates(10,3,7,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,3,8,'r',1);delay(waittime);RGBLED_Coordinates(10,3,8,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,3,9,'r',1);delay(waittime);RGBLED_Coordinates(10,3,9,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,2,10,'r',1);delay(waittime);RGBLED_Coordinates(10,2,10,'r',0);//delay(waittime);
////  RGBLED_Coordinates(10,2,8,'r',1);delay(waittime);RGBLED_Coordinates(10,2,8,'r',0);//delay(waittime);
////  shiftAll(databyteforSR1, databyteforSR2, databyteforSR3, databyteforSR4, databyteforSR5, databyteforSR6, databyteforSR7);
///////////////////////////////////////////////////AUM
//}

void RGBLED_Coordinates(char x, char y, char z, char color, char setvalue)
{
  if(color=='r')
  {
    GlowRed(x,y,z, setvalue);
  }
  
  else if(color=='b')
  {
    GlowBlue(x,y,z, setvalue);
  }
  
  else if(color=='g')
  {
    GlowGreen(x,y,z, setvalue);
  }
  
  else{}
  shiftAll(databyteforSR1, databyteforSR2, databyteforSR3, databyteforSR4, databyteforSR5, databyteforSR6, databyteforSR7);
}

void GlowRed(char x, char y, char z, char setvalue)
{
  GlowPlanar(x,y, setvalue);
  RedPlane(z, setvalue);
}

void GlowBlue(char x, char y, char z, char setvalue)
{
  GlowPlanar(x,y, setvalue);
  BluePlane(z, setvalue);
}

void GlowGreen(char x, char y, char z, char setvalue)
{
  GlowPlanar(x,y, setvalue);
  GreenPlane(z, setvalue);
}

void GlowPlanar(char x, char y, char setvalue)
{
/*  if(setvalue == 1)
  {
      switch(x){
      case 1  :databyteforSR4 |= (1 << 6);break;
      case 2  :databyteforSR4 |= (1 << 7);break;
      case 3  :databyteforSR3 |= (1 << 0);break;
      case 4  :databyteforSR3 |= (1 << 1);break;
      case 5  :databyteforSR3 |= (1 << 2);break;
      case 6  :databyteforSR3 |= (1 << 3);break;
      case 7  :databyteforSR3 |= (1 << 4);break;
      case 8  :databyteforSR3 |= (1 << 5);break;
      case 9  :databyteforSR3 |= (1 << 6);break;
      case 10 :databyteforSR3 |= (1 << 7);break;
      default :break;
      }
      switch(y){
      case 1  :databyteforSR2 |= (1 << 0);break;
      case 2  :databyteforSR2 |= (1 << 1);break;
      case 3  :databyteforSR2 |= (1 << 2);break;
      case 4  :databyteforSR2 |= (1 << 3);break;
      case 5  :databyteforSR2 |= (1 << 4);break;
      case 6  :databyteforSR2 |= (1 << 5);break;
      case 7  :databyteforSR2 |= (1 << 6);break;
      case 8  :databyteforSR2 |= (1 << 7);break;
      case 9  :databyteforSR1 |= (1 << 0);break;
      case 10 :databyteforSR1 |= (1 << 1);break;
      default :break;
      }
  }
  else if(setvalue == 0)
  {
      switch(x){
      case 1  :databyteforSR4 &=~ (1 << 6);break;
      case 2  :databyteforSR4 &=~ (1 << 7);break;
      case 3  :databyteforSR3 &=~ (1 << 0);break;
      case 4  :databyteforSR3 &=~ (1 << 1);break;
      case 5  :databyteforSR3 &=~ (1 << 2);break;
      case 6  :databyteforSR3 &=~ (1 << 3);break;
      case 7  :databyteforSR3 &=~ (1 << 4);break;
      case 8  :databyteforSR3 &=~ (1 << 5);break;
      case 9  :databyteforSR3 &=~ (1 << 6);break;
      case 10 :databyteforSR3 &=~ (1 << 7);break;
      default :break;
      }
      switch(y){
      case 1  :databyteforSR2 &=~ (1 << 0);break;
      case 2  :databyteforSR2 &=~ (1 << 1);break;
      case 3  :databyteforSR2 &=~ (1 << 2);break;
      case 4  :databyteforSR2 &=~ (1 << 3);break;
      case 5  :databyteforSR2 &=~ (1 << 4);break;
      case 6  :databyteforSR2 &=~ (1 << 5);break;
      case 7  :databyteforSR2 &=~ (1 << 6);break;
      case 8  :databyteforSR2 &=~ (1 << 7);break;
      case 9  :databyteforSR1 &=~ (1 << 0);break;
      case 10 :databyteforSR1 &=~ (1 << 1);break;
      default :break;
      }
  }
  else{}
*/
  switch(x){
  case 1  :bitWrite(databyteforSR4, 6, setvalue);break;
  case 2  :bitWrite(databyteforSR4, 7, setvalue);break;
  case 3  :bitWrite(databyteforSR3, 0, setvalue);break;
  case 4  :bitWrite(databyteforSR3, 1, setvalue);break;
  case 5  :bitWrite(databyteforSR3, 2, setvalue);break;
  case 6  :bitWrite(databyteforSR3, 3, setvalue);break;
  case 7  :bitWrite(databyteforSR3, 4, setvalue);break;
  case 8  :bitWrite(databyteforSR3, 5, setvalue);break;
  case 9  :bitWrite(databyteforSR3, 6, setvalue);break;
  case 10 :bitWrite(databyteforSR3, 7, setvalue);break;
  default :break; 
  }
  switch(y){
  case 1  :bitWrite(databyteforSR2, 0, setvalue);break;
  case 2  :bitWrite(databyteforSR2, 1, setvalue);break;
  case 3  :bitWrite(databyteforSR2, 2, setvalue);break;
  case 4  :bitWrite(databyteforSR2, 3, setvalue);break;
  case 5  :bitWrite(databyteforSR2, 4, setvalue);break;
  case 6  :bitWrite(databyteforSR2, 5, setvalue);break;
  case 7  :bitWrite(databyteforSR2, 6, setvalue);break;
  case 8  :bitWrite(databyteforSR2, 7, setvalue);break;
  case 9  :bitWrite(databyteforSR1, 0, setvalue);break;
  case 10 :bitWrite(databyteforSR1, 1, setvalue);break;
  default :break;
  }
}

void RedPlane(char z, char setvalue)
{
/*  if (setvalue == 1)
  {
    switch(z){
    case 1  :databyteforSR7 |= (1 << 0); break;
    case 2  :databyteforSR7 |= (1 << 1); break;
    case 3  :databyteforSR7 |= (1 << 2); break;
    case 4  :databyteforSR7 |= (1 << 3); break;
    case 5  :databyteforSR7 |= (1 << 4); break;
    case 6  :databyteforSR7 |= (1 << 5); break;
    case 7  :databyteforSR7 |= (1 << 6); break;
    case 8  :databyteforSR7 |= (1 << 7); break;
    case 9  :databyteforSR6 |= (1 << 0); break;
    case 10 :databyteforSR6 |= (1 << 1); break; 
    default: break;
    }
  }
  else if (setvalue == 0)
  {
    switch(z){
    case 1  :databyteforSR7 &=~ (1 << 0); break;
    case 2  :databyteforSR7 &=~ (1 << 1); break;
    case 3  :databyteforSR7 &=~ (1 << 2); break;
    case 4  :databyteforSR7 &=~ (1 << 3); break;
    case 5  :databyteforSR7 &=~ (1 << 4); break;
    case 6  :databyteforSR7 &=~ (1 << 5); break;
    case 7  :databyteforSR7 &=~ (1 << 6); break;
    case 8  :databyteforSR7 &=~ (1 << 7); break;
    case 9  :databyteforSR6 &=~ (1 << 0); break;
    case 10 :databyteforSR6 &=~ (1 << 1); break; 
    default: break;
    }
  }
  else{}
*/
  switch(z){
  case 1  :bitWrite(databyteforSR7, 0, setvalue); break;
  case 2  :bitWrite(databyteforSR7, 1, setvalue); break;
  case 3  :bitWrite(databyteforSR7, 2, setvalue); break;
  case 4  :bitWrite(databyteforSR7, 3, setvalue); break;
  case 5  :bitWrite(databyteforSR7, 4, setvalue); break;
  case 6  :bitWrite(databyteforSR7, 5, setvalue); break;
  case 7  :bitWrite(databyteforSR7, 6, setvalue); break;
  case 8  :bitWrite(databyteforSR7, 7, setvalue); break;
  case 9  :bitWrite(databyteforSR6, 0, setvalue); break;
  case 10 :bitWrite(databyteforSR6, 1, setvalue); break;
  default :break;
  }
}

void BluePlane(char z, char setvalue)
{
  switch(z){
  case 1  :bitWrite(databyteforSR5, 4, setvalue); break;
  case 2  :bitWrite(databyteforSR5, 5, setvalue); break;
  case 3  :bitWrite(databyteforSR5, 6, setvalue); break;
  case 4  :bitWrite(databyteforSR5, 7, setvalue); break;
  case 5  :bitWrite(databyteforSR4, 0, setvalue); break;
  case 6  :bitWrite(databyteforSR4, 1, setvalue); break;
  case 7  :bitWrite(databyteforSR4, 2, setvalue); break;
  case 8  :bitWrite(databyteforSR4, 3, setvalue); break;
  case 9  :bitWrite(databyteforSR4, 4, setvalue); break;
  case 10 :bitWrite(databyteforSR4, 5, setvalue); break;
  default :break;
  }
}

void GreenPlane(char z, char setvalue)
{
  switch(z){
  case 1  :bitWrite(databyteforSR6, 2, setvalue); break;
  case 2  :bitWrite(databyteforSR6, 3, setvalue); break;
  case 3  :bitWrite(databyteforSR6, 4, setvalue); break;
  case 4  :bitWrite(databyteforSR6, 5, setvalue); break;
  case 5  :bitWrite(databyteforSR6, 6, setvalue); break;
  case 6  :bitWrite(databyteforSR6, 7, setvalue); break;
  case 7  :bitWrite(databyteforSR5, 0, setvalue); break;
  case 8  :bitWrite(databyteforSR5, 1, setvalue); break;
  case 9  :bitWrite(databyteforSR5, 2, setvalue); break;
  case 10 :bitWrite(databyteforSR5, 3, setvalue); break;
  default :break;
  }
}

void resetAll()
{
  databyteforSR1 = 0;
  databyteforSR2 = 0;
  databyteforSR3 = 0;
  databyteforSR4 = 0;
  databyteforSR5 = 0;
  databyteforSR6 = 0;
  databyteforSR7 = 0;
  shiftAll(databyteforSR1, databyteforSR2, databyteforSR3, databyteforSR4, databyteforSR5, databyteforSR6, databyteforSR7);
}

void shiftAll(char databyteforSR1, char databyteforSR2, char databyteforSR3, char databyteforSR4, char databyteforSR5, char databyteforSR6, char databyteforSR7)
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, databyteforSR1);
  shiftOut(dataPin, clockPin, MSBFIRST, databyteforSR2);
  shiftOut(dataPin, clockPin, MSBFIRST, databyteforSR3);
  shiftOut(dataPin, clockPin, MSBFIRST, databyteforSR4);
  shiftOut(dataPin, clockPin, MSBFIRST, databyteforSR5);
  shiftOut(dataPin, clockPin, MSBFIRST, databyteforSR6);
  shiftOut(dataPin, clockPin, MSBFIRST, databyteforSR7);
  digitalWrite(latchPin, HIGH);
}
