#include <stdio.h>

int main() {
    // Declare variables
    float basicSalary, dearnessAllowance, houseRentAllowance, grossSalary;

    // Input basic salary
    printf("Enter Amesh's basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate dearness allowance and house rent allowance
    dearnessAllowance = 0.4 * basicSalary;
    houseRentAllowance = 0.2 * basicSalary;

    // Calculate gross salary
    grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;

    // Display the result
    printf("\nBasic Salary: $%.2f\n", basicSalary);
    printf("Dearness Allowance: $%.2f\n", dearnessAllowance);
    printf("House Rent Allowance: $%.2f\n", houseRentAllowance);
    printf("Gross Salary: $%.2f\n", grossSalary);

    return 0;
}
