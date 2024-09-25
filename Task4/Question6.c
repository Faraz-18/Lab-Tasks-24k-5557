#include <stdio.h>

int main() {
float shoppingAmount, savedAmount, discount=0.0, finalAmount;

printf("Enter amount of the product: ");
scanf("%f",&shoppingAmount);

if (shoppingAmount >= 500) {
    if (shoppingAmount < 2000) {
            discount = 5;
}   else if (shoppingAmount <= 4000) {
            discount = 10;
}   else if (shoppingAmount <= 6000) {
            discount = 20;
}   else {
            discount = 35;
        }
        
savedAmount = (shoppingAmount * discount) / 100;
finalAmount = shoppingAmount - savedAmount;

 printf("Discount applied: %.2f%%\n", discount);
        printf("Amount saved: %.2f\n", savedAmount);
        printf("Amount after discount: %.2f\n", finalAmount);}
else {
        printf("No discount is applied. The amount is less than 500.\n");

}
}
