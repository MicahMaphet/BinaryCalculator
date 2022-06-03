This is a calculator that adds 4 digit binary numbers the way an actual computer does.
Without, using the variable int, the operator +, just booleans.
Except the main function int main.
--Instructions-- 
Either put 0 or 1, anything else will not work.
The first 4 digits the program asks you to type
are the first number.
The last 4 are the second number.
If you want to make sure it works, the first digit
is the ones place, the second is the twos,
the third one the fours place and the last one the
eights place. It is in increaments of powers of 2.
A computer calculates numbers in logic gates, for this very simple calculator it has 3 types of logic gates. 
Their are other kinds of logic gates not listed.
Not, 0 = 1, 1 = 0.
When a number is passed through a Not logic gate, it inverts the value.
And(1, 1) = 1. Both values have to be 1 to output 1, everything else is 0.
Or(1, 0) = 1.
Or is the opposite of And because to output 0, the input must be two 0s.
The better way to look at it is, either of the values need to be 1 to output 1.
I came up with all the code but not how it worked.
I looked at how a computer adds numbers and then recreated it into C++.
It is a model of how a computer adds basic numbers. 
Since it is only meant to calculate 4 bit numbers, adding values that go over 15 will result in an incorrect ansewer. 
The program stops calculating at the 4th digit.
If you add 1111 (15) and 0001 (1), the result should be 10000 (16). This calculator will display 0000.
This works with Repl.it, the other repository doesn't
