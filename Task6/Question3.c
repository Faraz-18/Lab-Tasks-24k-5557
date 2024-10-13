#include<stdio.h>
int main(){
	int i,num,x=0,y=1,sum=0;
	printf("Please enter number");
	scanf("%d",&num);//5
	for(i=1;i<=num;i++){
		if(num == 1 ){
			printf("It is neither prime nor composite\n");
			break;
		}
		else if(num%i ==0 && i!=1 && i!=num ){
			printf("It is not prime\n");
			break;
		}
		else if(i==num) {
			
			printf("It is prime\n");	
		}
}
for(i=0;i<num;i++){
printf("%d,",sum);
x=y;
y=sum;
sum=x+y;
	}
}
