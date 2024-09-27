// QUESTION 1
# include <stdio.h>
int main(void ){
	int fatcalories,fatgram;
	float percent,tcalories;
	printf("Please Enter Total Calories in The Food:\n");
	scanf("%f",&tcalories);
	printf("Please Enter Fat Quantity in Food :\n");
	scanf("%d",&fatgram);
	if (tcalories >0 && fatgram>0){	
	fatcalories = fatgram * 9;
}
	else {printf("Invalid Input Values\n");
	}
	if (fatcalories > tcalories){
		printf("Either total Calories or Fat quantity is invalid");
	}
	else {
		percent = (fatcalories/tcalories)*100;
		printf("The Fat Calorie Percentage is : %.2f",percen);
		
		
}
}
