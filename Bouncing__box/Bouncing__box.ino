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
int t=20,i=1,j,k,l;
void setup() {
    pinMode(dataPin, OUTPUT);                         //Set DATA Pin as OUTPUT
    pinMode(latchPin, OUTPUT);                        //Set LATCH Pin as OUTPUT
    pinMode(clockPin, OUTPUT);                        //Set CLOCK Pin as OUTPUT
}
void loop(){
for(i=1;i<=10;i++)                                                                
{
  for(l=11-i;l>=1;l--)
for(j=10;j>=i;j--)
RGBLED_Coordinates(i,j,l,'r',1);delay(t);resetAll();
}
for(i=10;i>=1;i--)
{
  for(l=1;l<=11-i;l++)
for(j=i;j<=10;j++)
RGBLED_Coordinates(i,j,l,'g',1);delay(t);resetAll();
}   
for(i=1;i<=10;i++)                                                                
{
  for(l=10;l>=i;l--)
for(j=10;j>=i;j--)
RGBLED_Coordinates(i,j,l,'r',1);delay(t);resetAll();
}
for(i=10;i>=1;i--)
{
  for(l=i;l<=10;l++)
for(j=i;j<=10;j++)
RGBLED_Coordinates(i,j,l,'g',1);delay(t);resetAll();
}  
for(i=1;i<=10;i++)                                                                
{
  for(l=1;l<=11-i;l++)
for(j=1;j<=11-i;j++)
RGBLED_Coordinates(i,j,l,'r',1);delay(t);resetAll();
}
for(i=10;i>=1;i--)
{
for(l=11-i;l>=1;l--)
for(j=11-i;j>=1;j--)
RGBLED_Coordinates(i,j,l,'g',1);delay(t);resetAll();
}  
for(i=1;i<=10;i++)                                                                
{
  for(l=i;l<=10;l++)
for(j=1;j<=11-i;j++)
RGBLED_Coordinates(i,j,l,'r',1);delay(t);resetAll();
}
for(i=10;i>=1;i--)
{
for(l=10;l>=i;l--)
for(j=11-i;j>=1;j--)
RGBLED_Coordinates(i,j,l,'g',1);delay(t);resetAll();
} 
//RGBLED_Coordinates(1,10,i,'r',1);resetAll();RGBLED_Coordinates(2,10,i,'r',1);resetAll();RGBLED_Coordinates(3,10,i,'r',1);resetAll();RGBLED_Coordinates(4,10,i,'r',1);resetAll();RGBLED_Coordinates(5,10,i,'r',1);resetAll();
//RGBLED_Coordinates(6,10,i,'r',1);resetAll();RGBLED_Coordinates(7,10,i,'r',1);resetAll();RGBLED_Coordinates(8,10,i,'r',1);resetAll();RGBLED_Coordinates(9,10,i,'r',1);resetAll();RGBLED_Coordinates(10,10,i,'r',1);resetAll();
//RGBLED_Coordinates(10,9,i,'g',1);resetAll();RGBLED_Coordinates(10,8,i,'g',1);resetAll();RGBLED_Coordinates(10,7,i,'g',1);resetAll();RGBLED_Coordinates(10,6,i,'g',1);resetAll();RGBLED_Coordinates(10,5,i,'g',1);resetAll();   
//RGBLED_Coordinates(10,4,i,'r',1);RGBLED_Coordinates(10,3,i,'r',1);RGBLED_Coordinates(10,2,i,'r',1);RGBLED_Coordinates(10,1,i,'r',1);RGBLED_Coordinates(9,9,i,'r',1);
//RGBLED_Coordinates(9,8,i,'r',1);RGBLED_Coordinates(9,7,i,'r',1);RGBLED_Coordinates(9,6,i,'r',1);RGBLED_Coordinates(9,5,i,'r',1);RGBLED_Coordinates(9,4,i,'r',1);
//RGBLED_Coordinates(9,3,i,'r',1);RGBLED_Coordinates(9,2,i,'r',1);RGBLED_Coordinates(9,1,i,'r',1);RGBLED_Coordinates(8,9,i,'r',1);RGBLED_Coordinates(8,8,i,'r',1);
//RGBLED_Coordinates(8,7,i,'r',1);RGBLED_Coordinates(8,6,i,'r',1);RGBLED_Coordinates(8,5,i,'r',1);RGBLED_Coordinates(8,4,i,'r',1);RGBLED_Coordinates(8,3,i,'r',1);
//RGBLED_Coordinates(8,2,i,'r',1);RGBLED_Coordinates(7,9,i,'r',1);RGBLED_Coordinates(7,8,i,'r',1);RGBLED_Coordinates(7,7,i,'r',1);RGBLED_Coordinates(7,6,i,'r',1);
//RGBLED_Coordinates(7,5,i,'r',1);RGBLED_Coordinates(7,4,i,'r',1);RGBLED_Coordinates(6,9,i,'r',1);RGBLED_Coordinates(6,8,i,'r',1);RGBLED_Coordinates(6,7,i,'r',1);
//RGBLED_Coordinates(6,6,i,'r',1);RGBLED_Coordinates(6,5,i,'r',1);RGBLED_Coordinates(5,9,i,'r',1);RGBLED_Coordinates(5,8,i,'r',1);RGBLED_Coordinates(5,7,i,'r',1);
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
