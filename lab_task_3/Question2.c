#include <stdio.h>

int main() {
int num;
printf("Enter Number: ");
scanf("%d",&num);
if(num%2==0 && num>0 && num%10==0){
    printf("Accepted");}
else
   printf("Rejected");

    return 0;
}
