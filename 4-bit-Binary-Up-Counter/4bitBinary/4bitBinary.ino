// 4 bit binary up counter (MOD-16 counter)
// Initialize two-dimensional array A
boolean A[4][16]={
 {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, //[A0]
 {0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1}, //[A1]
 {0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1}, //[A2]
 {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1}}; //[A3]

int i = 0; // initialize variable "i" to zero
void setup()
{
 pinMode(12,OUTPUT); //set pin 12 as output
 pinMode(11,OUTPUT); //set pin 11 as output
 pinMode(10,OUTPUT); //set pin 10 as output
 pinMode(9,OUTPUT); //set pin 9 as output

}
// The following code runs repeatedly
void loop()
{
 digitalWrite(12,A[0][i]); // Pin 12's output will be A[O]
 digitalWrite(11,A[1][i]); // Pin 10's output will be A[1]
 digitalWrite(10,A[2][i]); // Pin 12's output will be A[2]
 digitalWrite(9,A[3][i]);  // Pin 9's  output will be A[3]
 delay(500); //wait for 500 milliseconds
 i++; // increase the value of i by one
 i = i % 16; // if variable "i" is equal to 16 set it to zero.
}
