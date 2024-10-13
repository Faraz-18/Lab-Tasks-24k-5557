#include<stdio.h>
int main(){
	int num,i,mod,cube,sum=0;
	printf("Please enter the number");
	scanf("%d",&num);//123
	
	i=num;
while(i!=0)
{
	mod=i%10;
    cube=mod*mod*mod;
    sum=sum+cube;
    i=i/10;//1
}
    if(sum==num){
    	printf("It is an armstrong number");
	}
	else{
		printf("It is not an armstrong number");
	}}
