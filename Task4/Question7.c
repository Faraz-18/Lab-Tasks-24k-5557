#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];
    float chargePerUnit, amountCharges, surcharge = 0, netAmount;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Determine the charge per unit based on units consumed
    if (units <= 199) {
        chargePerUnit = 16.20;
    } else if (units >= 200 && units < 300) {
        chargePerUnit = 20.10;
    } else if (units >= 300 && units < 500) {
        chargePerUnit = 27.10;
    } else {
        chargePerUnit = 35.90;
    }

    // Calculate the total charges
    amountCharges = units * chargePerUnit;

    // Calculate surcharge if bill exceeds Rs. 18000
    if (amountCharges > 18000) {
        surcharge = amountCharges * 0.15;
    }

    // Calculate the net amount to pay
    netAmount = amountCharges + surcharge;

    // Print the bill
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Amount Charges @Rs. %.2f per unit: %.2f\n", chargePerUnit, amountCharges);
    printf("Surcharge Amount: %.2f\n", surcharge);
    printf("Net Amount to be paid by the Customer: %.2f\n", netAmount);

    return 0;
}

