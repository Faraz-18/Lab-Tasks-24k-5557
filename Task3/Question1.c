//QUESTION#1
//Explain the output of this C program. Why the wrong value is being displayed in the output?

//As testinteger is defined as an integer.Integer variable can only have 4 bytes, to solve this error we can define testinteger as "double".

#include <stdio.h>

int main()
{

	double testinteger = 7000000000;
	printf("Number is %lf",testinteger);



}

