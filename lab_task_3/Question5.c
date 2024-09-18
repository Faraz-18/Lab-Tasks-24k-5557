#include <stdio.h>

int main() {
char input;
printf("Enter Character  :  ");
scanf("%c",&input);

if(input>='a' && input<='z')
  printf("It is a lower case alphabet");
  
else if(input>='A' && input<='Z')
   printf("It is a upper case alphabet");
   
else if(input>='1' && input<='9')
    printf("It is a digit");
    
else 
    printf("It is a special character");


    return 0;
}
