#include <stdio.h>

int main() {
char operator;
int num1,num2;
int result;
printf("Enter operator (+,-,*,/): ");
scanf("%c",&operator);
printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);
switch(operator){
        case'+':
            result = num1 + num2;
            printf("%d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d",result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d",result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d",result);
            }else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }




    return 0;
}
