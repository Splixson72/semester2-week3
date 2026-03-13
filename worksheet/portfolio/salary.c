
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Zaryaab Ullah
 * ID:201992194
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 30000;
   float original_salary = salary;
   float national_insurance = 0.09;
   float tax_rate = 0.25;

    // calculate the deductions and final take-home salary
   float nat_deduction = salary * national_insurance;
   salary -= nat_deduction;
   float tax_deduction = 0;
   if(salary>=12500)
   {
      salary -= 12500;
      tax_deduction = salary * tax_rate;
      salary -= tax_deduction;
      salary += 12500;
   }
   
    printf("Salary £%.2f\n",original_salary);
    printf("NI contribution £%.2f\n",nat_deduction);
    printf("Tax contribution £%.2f\n",tax_deduction);
    printf("Take home salary £%.2f\n",salary);

    return 0;
 }