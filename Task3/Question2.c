//QUESTION#2
//Write a C program that takes two integer values as input from the user. Then swap the values taken
//from the user and display the output of the variables.

#include <stdio.h>

int main() {
  int Num1, Num2, Temp;
  printf("Enter Num1:\t");
  scanf("%d",&Num1);
  printf("Enter Num2:\t");
  scanf("%d",&Num2);
  Temp = Num1;
  Num1 = Num2;
  Num2 = Temp;
  printf("Now the first number is : %d\n",Num1);
  printf("And the second number is : %d",Num2);


    return 0;
}
