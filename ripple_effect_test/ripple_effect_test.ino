/* Voxel Shield Sketch
  Controls a Light Emitting Diode(LED) Cube of 8x8x8 voxels arranged
  by 64 columns(anodes) and 8 layers(cathodes).
*/

byte cube[][8] = {
  // Layer 1
  {0b00000000,  // Row 1
   0b00000000,  // Row 2
   0b00000000,  // Row 3
   0b00000000,  // Row 4
   0b00000000,  // Row 5
   0b00000000,  // Row 6
   0b00000000,  // Row 7
   0b00000000}, // Row 8

  // Layer 2
  {0b00000000,  // Row 1
   0b00000000,  // Etc ...
   0b00000000, 
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000, 
   0b00000000},

  // Layer 3
  {0b00000000, 
   0b00000000, 
   0b00000000, 
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000, 
   0b00000000},

  // Layer 4
  {0b00000000, 
   0b00000000, 
   0b00000000, 
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000, 
   0b00000000},

  // Layer 5 
  {0b00000000, 
   0b00000000, 
   0b00000000, 
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000, 
   0b00000000},

  // Layer 6
  {0b00000000, 
   0b00000000, 
   0b00000000, 
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000, 
   0b00000000},

  // Layer 7
  {0b00000000, 
   0b00000000, 
   0b00000000, 
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000, 
   0b00000000},

  // Layer 8
  {0b00000000, 
   0b00000000, 
   0b00000000, 
   0b00000000,
   0b00000000,
   0b00000000, 
   0b00000000, 
   0b00000000}
};
// Shift Register pin assignments
int dataPin     = 2;
int clockPin    = 4;
int latchPin    = 3;
int masterClear = 0;

// Cube indicies
int rowIndex   = 0;        // used for shifting out the data
int layerIndex  = 0;

void all(){
  cube[1][1] = 255; cube[2][1] = 255; cube[3][1] = 255; cube[4][1] = 255; cube[5][1] = 255; cube[6][1] = 255; cube[7][1] = 255; cube[8][1] = 255; 
  cube[1][2] = 255; cube[2][2] = 255; cube[3][2] = 255; cube[4][2] = 255; cube[5][2] = 255; cube[6][2] = 255; cube[7][2] = 255; cube[8][2] = 255; 
  cube[1][3] = 255; cube[2][3] = 255; cube[3][3] = 255; cube[4][3] = 255; cube[5][3] = 255; cube[6][3] = 255; cube[7][3] = 255; cube[8][3] = 255; 
  cube[1][4] = 255; cube[2][4] = 255; cube[3][4] = 255; cube[4][4] = 255; cube[5][4] = 255; cube[6][4] = 255; cube[7][4] = 255; cube[8][4] = 255; 
  cube[1][5] = 255; cube[2][5] = 255; cube[3][5] = 255; cube[4][5] = 255; cube[5][5] = 255; cube[6][5] = 255; cube[7][5] = 255; cube[8][5] = 255; 
  cube[1][6] = 255; cube[2][6] = 255; cube[3][6] = 255; cube[4][6] = 255; cube[5][6] = 255; cube[6][6] = 255; cube[7][6] = 255; cube[8][6] = 255; 
  cube[1][7] = 255; cube[2][7] = 255; cube[3][7] = 255; cube[4][7] = 255; cube[5][7] = 255; cube[6][7] = 255; cube[7][7] = 255; cube[8][7] = 255; 
  cube[1][8] = 255; cube[2][8] = 255; cube[3][8] = 255; cube[4][8] = 255; cube[5][8] = 255; cube[6][8] = 255; cube[7][8] = 255; cube[8][8] = 255; 
}
void none(){
  cube[1][1] = 0; cube[2][1] = 0; cube[3][1] = 0; cube[4][1] = 0; cube[5][1] = 0; cube[6][1] = 0; cube[7][1] = 0; cube[8][1] = 0; 
  cube[1][2] = 0; cube[2][2] = 0; cube[3][2] = 0; cube[4][2] = 0; cube[5][2] = 0; cube[6][2] = 0; cube[7][2] = 0; cube[8][2] = 0; 
  cube[1][3] = 0; cube[2][3] = 0; cube[3][3] = 0; cube[4][3] = 0; cube[5][3] = 0; cube[6][3] = 0; cube[7][3] = 0; cube[8][3] = 0; 
  cube[1][4] = 0; cube[2][4] = 0; cube[3][4] = 0; cube[4][4] = 0; cube[5][4] = 0; cube[6][4] = 0; cube[7][4] = 0; cube[8][4] = 0; 
  cube[1][5] = 0; cube[2][5] = 0; cube[3][5] = 0; cube[4][5] = 0; cube[5][5] = 0; cube[6][5] = 0; cube[7][5] = 0; cube[8][5] = 0; 
  cube[1][6] = 0; cube[2][6] = 0; cube[3][6] = 0; cube[4][6] = 0; cube[5][6] = 0; cube[6][6] = 0; cube[7][6] = 0; cube[8][6] = 0; 
  cube[1][7] = 0; cube[2][7] = 0; cube[3][7] = 0; cube[4][7] = 0; cube[5][7] = 0; cube[6][7] = 0; cube[7][7] = 0; cube[8][7] = 0; 
  cube[1][8] = 0; cube[2][8] = 0; cube[3][8] = 0; cube[4][8] = 0; cube[5][8] = 0; cube[6][8] = 0; cube[7][8] = 0; cube[8][8] = 0;
}
void box(){
  cube[1][1] = 0b11111111; cube[2][1] = 0b10000001; cube[3][1] = 0b10000001; cube[4][1] = 0b10000001; cube[5][1] = 0b10000001; cube[6][1] = 0b10000001; cube[7][1] = 0b10000001; cube[8][1] = 0b11111111; 
  cube[1][2] = 0b10000001; cube[2][2] = 0b00000000; cube[3][2] = 0b00000000; cube[4][2] = 0b00000000; cube[5][2] = 0b00000000; cube[6][2] = 0b00000000; cube[7][2] = 0b00000000; cube[8][2] = 0b10000001; 
  cube[1][3] = 0b10000001; cube[2][3] = 0b00000000; cube[3][3] = 0b00000000; cube[4][3] = 0b00000000; cube[5][3] = 0b00000000; cube[6][3] = 0b00000000; cube[7][3] = 0b00000000; cube[8][3] = 0b10000001; 
  cube[1][4] = 0b10000001; cube[2][4] = 0b00000000; cube[3][4] = 0b00000000; cube[4][4] = 0b00000000; cube[5][4] = 0b00000000; cube[6][4] = 0b00000000; cube[7][4] = 0b00000000; cube[8][4] = 0b10000001; 
  cube[1][5] = 0b10000001; cube[2][5] = 0b00000000; cube[3][5] = 0b00000000; cube[4][5] = 0b00000000; cube[5][5] = 0b00000000; cube[6][5] = 0b00000000; cube[7][5] = 0b00000000; cube[8][5] = 0b10000001; 
  cube[1][6] = 0b10000001; cube[2][6] = 0b00000000; cube[3][6] = 0b00000000; cube[4][6] = 0b00000000; cube[5][6] = 0b00000000; cube[6][6] = 0b00000000; cube[7][6] = 0b00000000; cube[8][6] = 0b10000001; 
  cube[1][7] = 0b10000001; cube[2][7] = 0b00000000; cube[3][7] = 0b00000000; cube[4][7] = 0b00000000; cube[5][7] = 0b00000000; cube[6][7] = 0b00000000; cube[7][7] = 0b00000000; cube[8][7] = 0b10000001; 
  cube[1][8] = 0b11111111; cube[2][8] = 0b10000001; cube[3][8] = 0b10000001; cube[4][8] = 0b10000001; cube[5][8] = 0b10000001; cube[6][8] = 0b10000001; cube[7][8] = 0b10000001; cube[8][8] = 0b11111111;
}
void box2(){
  cube[1][1] = 0b00000000; cube[2][1] = 0b00000000; cube[3][1] = 0b00000000; cube[4][1] = 0b00000000; cube[5][1] = 0b00000000; cube[6][1] = 0b00000000; cube[7][1] = 0b00000000; cube[8][1] = 0b00000000; 
  cube[1][2] = 0b00000000; cube[2][2] = 0b01111110; cube[3][2] = 0b01000010; cube[4][2] = 0b01000010; cube[5][2] = 0b01000010; cube[6][2] = 0b01000010; cube[7][2] = 0b01111110; cube[8][2] = 0b00000000; 
  cube[1][3] = 0b00000000; cube[2][3] = 0b01000010; cube[3][3] = 0b00000000; cube[4][3] = 0b00000000; cube[5][3] = 0b00000000; cube[6][3] = 0b00000000; cube[7][3] = 0b01000010; cube[8][3] = 0b00000000; 
  cube[1][4] = 0b00000000; cube[2][4] = 0b01000010; cube[3][4] = 0b00000000; cube[4][4] = 0b00000000; cube[5][4] = 0b00000000; cube[6][4] = 0b00000000; cube[7][4] = 0b01000010; cube[8][4] = 0b00000000; 
  cube[1][5] = 0b00000000; cube[2][5] = 0b01000010; cube[3][5] = 0b00000000; cube[4][5] = 0b00000000; cube[5][5] = 0b00000000; cube[6][5] = 0b00000000; cube[7][5] = 0b01000010; cube[8][5] = 0b00000000; 
  cube[1][6] = 0b00000000; cube[2][6] = 0b01000010; cube[3][6] = 0b00000000; cube[4][6] = 0b00000000; cube[5][6] = 0b00000000; cube[6][6] = 0b00000000; cube[7][6] = 0b01000010; cube[8][6] = 0b00000000; 
  cube[1][7] = 0b00000000; cube[2][7] = 0b01111110; cube[3][7] = 0b01000010; cube[4][7] = 0b01000010; cube[5][7] = 0b01000010; cube[6][7] = 0b01000010; cube[7][7] = 0b01111110; cube[8][7] = 0b00000000; 
  cube[1][8] = 0b00000000; cube[2][8] = 0b00000000; cube[3][8] = 0b00000000; cube[4][8] = 0b00000000; cube[5][8] = 0b00000000; cube[6][8] = 0b00000000; cube[7][8] = 0b00000000; cube[8][8] = 0b00000000;
}
void box3(){
  cube[1][1] = 0b00000000; cube[2][1] = 0b00000000; cube[3][1] = 0b00000000; cube[4][1] = 0b00000000; cube[5][1] = 0b00000000; cube[6][1] = 0b00000000; cube[7][1] = 0b00000000; cube[8][1] = 0b00000000; 
  cube[1][2] = 0b00000000; cube[2][2] = 0b00000000; cube[3][2] = 0b00000000; cube[4][2] = 0b00000000; cube[5][2] = 0b00000000; cube[6][2] = 0b00000000; cube[7][2] = 0b00000000; cube[8][2] = 0b00000000; 
  cube[1][3] = 0b00000000; cube[2][3] = 0b00000000; cube[3][3] = 0b00111100; cube[4][3] = 0b00100100; cube[5][3] = 0b00100100; cube[6][3] = 0b00111100; cube[7][3] = 0b00000000; cube[8][3] = 0b00000000; 
  cube[1][4] = 0b00000000; cube[2][4] = 0b00000000; cube[3][4] = 0b00100100; cube[4][4] = 0b00000000; cube[5][4] = 0b00000000; cube[6][4] = 0b00100100; cube[7][4] = 0b00000000; cube[8][4] = 0b00000000; 
  cube[1][5] = 0b00000000; cube[2][5] = 0b00000000; cube[3][5] = 0b00100100; cube[4][5] = 0b00000000; cube[5][5] = 0b00000000; cube[6][5] = 0b00100100; cube[7][5] = 0b00000000; cube[8][5] = 0b00000000; 
  cube[1][6] = 0b00000000; cube[2][6] = 0b00000000; cube[3][6] = 0b00111100; cube[4][6] = 0b00100100; cube[5][6] = 0b00100100; cube[6][6] = 0b00111100; cube[7][6] = 0b00000000; cube[8][6] = 0b00000000; 
  cube[1][7] = 0b00000000; cube[2][7] = 0b00000000; cube[3][7] = 0b00000000; cube[4][7] = 0b00000000; cube[5][7] = 0b00000000; cube[6][7] = 0b00000000; cube[7][7] = 0b00000000; cube[8][7] = 0b00000000; 
  cube[1][8] = 0b00000000; cube[2][8] = 0b00000000; cube[3][8] = 0b00000000; cube[4][8] = 0b00000000; cube[5][8] = 0b00000000; cube[6][8] = 0b00000000; cube[7][8] = 0b00000000; cube[8][8] = 0b00000000;
}
void box4(){
  cube[1][1] = 0b00000000; cube[2][1] = 0b00000000; cube[3][1] = 0b00000000; cube[4][1] = 0b00000000; cube[5][1] = 0b00000000; cube[6][1] = 0b00000000; cube[7][1] = 0b00000000; cube[8][1] = 0b00000000; 
  cube[1][2] = 0b00000000; cube[2][2] = 0b00000000; cube[3][2] = 0b00000000; cube[4][2] = 0b00000000; cube[5][2] = 0b00000000; cube[6][2] = 0b00000000; cube[7][2] = 0b00000000; cube[8][2] = 0b00000000; 
  cube[1][3] = 0b00000000; cube[2][3] = 0b00000000; cube[3][3] = 0b00000000; cube[4][3] = 0b00000000; cube[5][3] = 0b00000000; cube[6][3] = 0b00000000; cube[7][3] = 0b00000000; cube[8][3] = 0b00000000; 
  cube[1][4] = 0b00000000; cube[2][4] = 0b00000000; cube[3][4] = 0b00000000; cube[4][4] = 0b00011000; cube[5][4] = 0b00011000; cube[6][4] = 0b00000000; cube[7][4] = 0b00000000; cube[8][4] = 0b00000000; 
  cube[1][5] = 0b00000000; cube[2][5] = 0b00000000; cube[3][5] = 0b00000000; cube[4][5] = 0b00011000; cube[5][5] = 0b00011000; cube[6][5] = 0b00000000; cube[7][5] = 0b00000000; cube[8][5] = 0b00000000; 
  cube[1][6] = 0b00000000; cube[2][6] = 0b00000000; cube[3][6] = 0b00000000; cube[4][6] = 0b00000000; cube[5][6] = 0b00000000; cube[6][6] = 0b00000000; cube[7][6] = 0b00000000; cube[8][6] = 0b00000000; 
  cube[1][7] = 0b00000000; cube[2][7] = 0b00000000; cube[3][7] = 0b00000000; cube[4][7] = 0b00000000; cube[5][7] = 0b00000000; cube[6][7] = 0b00000000; cube[7][7] = 0b00000000; cube[8][7] = 0b00000000; 
  cube[1][8] = 0b00000000; cube[2][8] = 0b00000000; cube[3][8] = 0b00000000; cube[4][8] = 0b00000000; cube[5][8] = 0b00000000; cube[6][8] = 0b00000000; cube[7][8] = 0b00000000; cube[8][8] = 0b00000000;
}

void draw(){
  // Repeat p many times before moving on to next frame 
  // change what p is less than; more for slower annimation, less for faster
  for(int p = 0; p < 10; p++){ 
    // Reset to first layer
    layerIndex = 0;
    for(int q = 0; q < 8; q++){
      // Reset to row 1
      rowIndex = 0;
      // Make shift registers accept new data
      digitalWrite(latchPin, LOW);
      // Shift out the layer data first
      shiftOut(dataPin, clockPin, MSBFIRST, 0b00000001 << layerIndex);    
      for(int t = 0; t < 8; t++){
        // Shift out the rows of data
        shiftOut(dataPin, clockPin, MSBFIRST, cube[layerIndex][rowIndex]);
        // Move onto the next row then repeat
        rowIndex++;                                                       
      }
      // Move onto the next layer and repeat
      layerIndex++;
      digitalWrite(latchPin, HIGH);
    }
  }
}

void setup() 
{
  // Setup the pin modes
  pinMode(dataPin,     OUTPUT);
  pinMode(clockPin,    OUTPUT);
  pinMode(latchPin,    OUTPUT);
  pinMode(masterClear, OUTPUT);

  // Clear the shift registers
  digitalWrite(masterClear, LOW);
  delay(10);
  digitalWrite(masterClear, HIGH);
}

void loop() 
{
  //Expanding Box Animation
  // Repeat 10 times
  for(int k = 0;k < 10;k++){
    box();
    draw();
    box2();
    draw();
    box3();
    draw();
    box4();
    draw();
    box3();
    draw();
    box2();
    draw();
  }
}
