#include<stdio.h>
int main(){
	int num,n;
	printf("Please enter the number");
	scanf("%d",&num);
for(n=1;n<=num;n++){
	 if(num==1){
		printf("It is not prime nor composite");
	}
	else if(num%n==0 && n!=num && n!=1){
			printf("It is not prime");
			break;
		}
	else if(n==num){
		printf("It is  prime ");
	
	}
	
	}
} 
