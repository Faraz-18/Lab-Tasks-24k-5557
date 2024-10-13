#include<stdio.h>
int main(){
	int i;
	int a=64;
	for(i=0;i<=5;i++){
		if(i==0 || i==5){
		printf("%c %c %c %c %c\n",a+1,a+2,a+3,a+4,a+5);
		a++;
		}
		else {
		printf("%c       %c\n",a+1,a+5);
		a++;
		}
		
	}
}
