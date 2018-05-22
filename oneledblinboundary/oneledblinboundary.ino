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
int t=10,i=1,j,k,l;
void setup() {
    pinMode(dataPin, OUTPUT);                         //Set DATA Pin as OUTPUT
    pinMode(latchPin, OUTPUT);                        //Set LATCH Pin as OUTPUT
    pinMode(clockPin, OUTPUT);                        //Set CLOCK Pin as OUTPUT
}
void loop(){
  for(i=1;i<=10;i++)
  {
    if(i==1)
    {
for(int k=1;k<=10;k++)
{ RGBLED_Coordinates(10,1,k,'b',1);delay(t);resetAll();}
for(l=1;l<=10;l++)
{RGBLED_Coordinates(10,l,10,'b',1);delay(t);resetAll();}
for(l=10;l>=1;l--)
{RGBLED_Coordinates(10,10,l,'b',1);delay(t);resetAll();}
for(l=10;l>=1;l--)
{RGBLED_Coordinates(10,l,1,'b',1);delay(t);resetAll();}
   }
   else if(i==2)
   {
for(int l=2;l<=9;l++)
{ RGBLED_Coordinates(9,2,l,'b',1);delay(t);resetAll();}
for(l=2;l<=9;l++)
{RGBLED_Coordinates(9,l,9,'b',1);delay(t);resetAll();}
for(l=9;l>=2;l--)
{RGBLED_Coordinates(9,9,l,'b',1);delay(t);resetAll();}
for(l=9;l>=2;l--)
{RGBLED_Coordinates(9,l,2,'b',1);delay(t);resetAll();}
   }
 if(i==3)
 {
   for(int k=3;k<=8;k++)
{ RGBLED_Coordinates(8,3,k,'b',1);delay(t);resetAll();}
for(l=3;l<=8;l++)
{RGBLED_Coordinates(8,l,8,'b',1);delay(t);resetAll();}
for(l=8;l>=3;l--)
{RGBLED_Coordinates(8,8,l,'b',1);delay(t);resetAll();}
for(l=8;l>=3;l--)
{RGBLED_Coordinates(8,l,3,'b',1);delay(t);resetAll();}
 }
 if(i==4)
 {
   for(int k=4;k<=7;k++)
{ RGBLED_Coordinates(7,4,k,'b',1);delay(t);resetAll();}
for(l=4;l<=7;l++)
{RGBLED_Coordinates(7,l,7,'b',1);delay(t);resetAll();}
for(l=7;l>=4;l--)
{RGBLED_Coordinates(7,7,l,'b',1);delay(t);resetAll();}
for(l=7;l>=4;l--)
{RGBLED_Coordinates(7,l,4,'b',1);delay(t);resetAll();}
 }
  if(i==5)
 {
   for(int k=5;k<=6;k++)
{ RGBLED_Coordinates(6,5,k,'b',1);delay(t);resetAll();}
for(l=5;l<=6;l++)
{RGBLED_Coordinates(6,l,6,'b',1);delay(t);resetAll();}
for(l=6;l>=5;l--)
{RGBLED_Coordinates(6,6,l,'b',1);delay(t);resetAll();}
for(l=6;l>=5;l--)
{RGBLED_Coordinates(6,l,5,'b',1);delay(t);resetAll();}
 }
  if(i==6)
 {
   for(int k=6;k<=6;k++)
{ RGBLED_Coordinates(5,6,k,'b',1);delay(t);resetAll();}
for(l=6;l<=6;l++)
{RGBLED_Coordinates(5,l,6,'b',1);delay(t);resetAll();}
for(l=6;l>=6;l--)
{RGBLED_Coordinates(5,6,l,'b',1);delay(t);resetAll();}
for(l=6;l>=6;l--)
{RGBLED_Coordinates(5,l,6,'b',1);delay(t);resetAll();}
 } 
  if(i==7)
 {
   for(int k=5;k<=6;k++)
{ RGBLED_Coordinates(4,5,k,'b',1);delay(t);resetAll();}
for(l=4;l<=7;l++)
{RGBLED_Coordinates(4,l,6,'b',1);delay(t);resetAll();}
for(l=7;l>=4;l--)
{RGBLED_Coordinates(4,6,l,'b',1);delay(t);resetAll();}
for(l=7;l>=4;l--)
{RGBLED_Coordinates(4,l,5,'b',1);delay(t);resetAll();}
 }
 if(i==8)
 {
   for(int k=4;k<=7;k++)
{ RGBLED_Coordinates(3,4,k,'b',1);delay(t);resetAll();}
for(l=4;l<=7;l++)
{RGBLED_Coordinates(3,l,7,'b',1);delay(t);resetAll();}
for(l=7;l>=4;l--)
{RGBLED_Coordinates(3,7,l,'b',1);delay(t);resetAll();}
for(l=7;l>=4;l--)
{RGBLED_Coordinates(3,l,4,'b',1);delay(t);resetAll();}
 }
 if(i==9)
 {
   for(int k=3;k<=8;k++)
{ RGBLED_Coordinates(2,3,k,'b',1);delay(t);resetAll();}
for(l=3;l<=8;l++)
{RGBLED_Coordinates(2,l,8,'b',1);delay(t);resetAll();}
for(l=8;l>=3;l--)
{RGBLED_Coordinates(2,8,l,'b',1);delay(t);resetAll();}
for(l=8;l>=3;l--)
{RGBLED_Coordinates(2,l,3,'b',1);delay(t);resetAll();}
 }
   else if(i==10)
   {
for(int k=2;k<=9;k++)
{ RGBLED_Coordinates(1,2,k,'b',1);delay(t);resetAll();}
for(l=2;l<=9;l++)
{RGBLED_Coordinates(1,l,9,'b',1);delay(t);resetAll();}
for(l=9;l>=2;l--)
{RGBLED_Coordinates(1,9,l,'b',1);delay(t);resetAll();}
for(l=9;l>=2;l--)
{RGBLED_Coordinates(1,l,2,'b',1);delay(t);resetAll();}
   }
}
}
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
