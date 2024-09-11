/*Construct a C program with the flowchart below. The input value of the principle must be between 100
Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.*/

#include <stdio.h>

int main() {
  int principal, intrest_rate, time_period;
  float simple_intrest;
  
  printf("Enter Principal (Between 100 To 1,000,000 Rs.): \n");
  scanf("%d",&principal);
  while (principal<100 || principal >1000000) 
  {printf("Please Enter Principal (Between 100 To 1,000,000 Rs.): \n");
  scanf("%d",&principal);}
  
  printf("Enter Intrest Rate (between 5 - 10): \n");
  scanf("%d",&intrest_rate);
   while (intrest_rate <5 || intrest_rate>10)
  {printf("Enter Intrest Rate (between 5 - 10): \n");
  scanf("%d",&intrest_rate);}
  
  printf("Enter Time Period (between 1 to 10 years.): \n");
  scanf("%d",&time_period);
   while (time_period <1 || time_period >10)
  {printf("Enter Time Period (between 1 to 10 years.): \n");
  scanf("%d",&time_period);}
  
  simple_intrest = (principal*intrest_rate*time_period)/100;
  printf("Simple Intrest is %f",simple_intrest);
    return 0;
}
