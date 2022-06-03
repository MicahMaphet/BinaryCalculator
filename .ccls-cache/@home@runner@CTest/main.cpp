#include <iostream>
using namespace std;

//These are the logic gate
bool And(bool bool1, bool bool2) {
  if (bool1 == 1) {
  if (bool2 == 1) {
  return 1; // code ends at return statement
  }
}
  return 0;
}

bool Or(bool bool1, bool bool2) {
  if (bool1 == 1) {
  return 1;
  }
  if (bool2 == 1) {
  return 1;
  }
  return 0;
}

bool Not(bool bool1) {
  if (bool1 == 1) {
  return 0;
  }
  return 1;
}
  
void AddBinary(bool num1[4], bool num2[4]) {

bool num3[4];  //the final output number

/* the booleans below are just to store values to avoid running calculations over and over again */
bool bitA;
bool bitB;
bool bitC;
bool bitD;
bool bitE;
bool bitF;

// Stage 1
num3[3] = 
And(
Not(And(num1[3], num2[3])),
Or(num1[3], num2[3])
);

/* Stage 1 finds the And value of the 4th digit of numbers
1 and 2 and value being run through Not (inverted) and the
4th digit of numbers 1 and 2 being run thorugh the Or. 
All of the code is being run through And. Specificaly numbers
1 and 2 4th number Not And, and numbers 1 and 2 4th number Or*/ 

bitA = And(num1[3], num2[3]);
/* This keeps track of a number that will be used on the 
second section of Stage 2 */

// Stage 2

/*The value will be used twice, so it is better to declare 
it in a seprate variable*/
bitB = 
And(
Not(And(num1[2], num2[2])),
Or(num1[2], num2[2]));

num3[2] =
And(
Not(And(bitB, bitA)), //bitB is being used twice
Or(bitB, bitA));

bitC =// will be used later in Stage 3
Or(
And(num1[2], num2[2]),
And(bitB, bitA));

// Stage 3

bitD = 
And(
Not(And(num1[1], num2[1])),
Or(num1[1], num2[1]));
/* The value of bitD will be used in two logic gate functions,
so it is more effiecent to declare it in a variable in order to
avoid repeating the same equartion twice*/

num3[1] = 
And(
Not(And(bitD, bitC)), 
Or(bitD, bitC));

bitE =
Or(
And(num1[1], num2[1]),
And(bitD, bitC));

// Stage 4

bitF =
And(
Not(And(num1[0], num2[0])),
Or(num1[0], num2[0]));

num3[0] =
And(
Not(And(bitF, bitE)),
Or(bitF, bitE));

cout << num1[0] << num1[1] << num1[2] << num1[3] << "\n"
<< num2[0] << num2[1] << num2[2] << num2[3] << "\n"
<< num3[0] << num3[1] << num3[2] << num3[3] ;

/*cout << "\n"<< "\nbitA = " << bitA << "\nbitB = " <<bitB
<< "\nbitC = " << bitC << "\nbitD = " << bitD << "\nbitE = "
<< bitE << "\nbitF = " << bitF;*/ //extra data, mainly for testing
}


int main() {
/* This is where you put the binary numbers. These are putting 
the 4 bit values into an array for easier accesibility and 
over all is easier to work with. */
  bool num1[4] = {0, 0, 1, 1}; 
  bool num2[4] = {0, 0, 1, 0};
  AddBinary(num1, num2); 
/* Do not add numbers that will exceed 
15 because this program will not be able to display the hole number.
If you add 1111 and 0001 it will display 0000 when the correct 
ansewer is 10000*/
  return 0;
}
