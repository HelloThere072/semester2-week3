
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:
 * ID:
 */

int main( void ) {
    float salary = 36250.00;
    float ni_rate = 8.0;
    float tax_rate = 15.0;

    float ni_contribution;
    float salary_after_ni;
    float taxable_amount;
    float tax_contribution;
    float take_home_salary;

    ni_contribution = salary * (ni_rate / 100.0);
    salary_after_ni = salary - ni_contribution;

    if (salary_after_ni > 12500.0) {
        taxable_amount = salary_after_ni - 12500.0;
        tax_contribution = taxable_amount * (tax_rate / 100.0);
    } else {
        tax_contribution = 0.0;
    }

    take_home_salary = salary_after_ni - tax_contribution;

    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}