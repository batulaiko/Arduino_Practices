// Anode 7 segment 9 to 0 down counter
// Initialize two-dimensional array A
boolean A[7][10]={ // 7 column 10 raw A matrix
 {0,0,1,0,0,0,0,0,1,1},  //G A[0]  {0,0,1,1,1,1,1,0,1,1}
 {0,0,1,0,0,0,1,1,1,0},  //F A[1]  {1,0,0,0,1,1,1,0,1,1}
 {1,0,1,0,1,1,1,0,1,0},  //E A[2]  {1,0,1,0,0,0,1,0,1,0}   For
 {0,0,1,0,0,1,0,0,1,0},  //D A[3]  {1,0,1,1,0,1,1,0,1,1}   Cathode 
 {0,0,0,0,0,0,0,1,0,0},  //C A[4]  {1,1,0,1,1,1,1,1,1,1}   Seven
 {0,0,0,1,1,0,0,0,0,0},  //B A[5]  {1,1,1,1,1,0,0,1,1,1}   Segment
 {0,0,0,0,0,1,0,0,1,0}}; //A A[6]  {1,0,1,1,0,1,1,1,1,1}

int i = 0; // initialize variable "i" to zero
void setup()
{
 pinMode(7,OUTPUT); //set pin 7 as output
 pinMode(6,OUTPUT); //set pin 6 as output
 pinMode(5,OUTPUT); //set pin 5 as output
 pinMode(4,OUTPUT); //set pin 4 as output
 pinMode(3,OUTPUT); //set pin 3 as output
 pinMode(2,OUTPUT); //set pin 2 as output
 pinMode(1,OUTPUT); //set pin 1 as output
    

}
// The following code runs repeatedly
void loop()
{
 digitalWrite(7,A[0][i]); // Pin 7's output will be A[O] {0,0,1,0,0,0,0,0,1,1}
 digitalWrite(6,A[1][i]); // Pin 6's output will be A[1] {0,0,1,0,0,0,1,1,1,0}
 digitalWrite(5,A[2][i]); // Pin 5's output will be A[2] {1,0,1,0,1,1,1,0,1,0}
 digitalWrite(4,A[3][i]); // Pin 4's output will be A[3] {0,0,1,0,0,1,0,0,1,0}
 digitalWrite(3,A[4][i]); // Pin 3's output will be A[4] {0,0,0,0,0,0,0,1,0,0}
 digitalWrite(2,A[5][i]); // Pin 2's output will be A[5] {0,0,0,1,1,0,0,0,0,0}
 digitalWrite(1,A[6][i]); // Pin 1's output will be A[6] {0,0,0,0,0,1,0,0,1,0}
 delay(500); //wait for 500 milliseconds
 i++; // increase the value of i by one
 i = i % 10; // if variable "i" is equal to 10 set it to zero.
}
