/*A customer asks the IT firm to develop a program in C language which can take tax rate and salary from the user on runtime and then calculate the tax,
the user has to pay and the salary he/she will have after paying the tax. This information is then provided to the user.*/

#include <stdio.h>

int main() {
 float Salary, TaxRate, SalaryAfterTax, Tax;
 printf("Enter Salary: \n");
 scanf("%f",&Salary);
 printf("Enter Tax Rate (Percent):\n");
 scanf("%f",&TaxRate);
 Tax = (TaxRate / 100) * Salary;
 SalaryAfterTax = Salary - Tax;
 printf("Salary after paying tax: %.2f\n", SalaryAfterTax);
  

    return 0;
}
