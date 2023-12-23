#include <stdio.h>
int main(){
    float Al, Rent, GS, BS;

    printf("Enter your Basic salary: ");
    scanf("%f", &BS);

    Al = 0.4 * BS;
    Rent = 0.2 * BS;
    GS = BS + Al + Rent;

    printf("Allowance : %.2f\n", Al);
    printf("Rent : %.2f\n", Rent);
    printf("Gross salary : %.2f", GS);

    return 0;
}


