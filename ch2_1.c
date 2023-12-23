#include <stdio.h>

int main() {
    
    int number, digit, sum = 0;

    
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    
    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a five-digit number.\n");
        return 1; 
    }

    
    while (number > 0) {
        digit = number % 10; 
        sum += digit; 
        number /= 10; }


    printf("\nSum of the digits: %d\n", sum);

    return 0;
}

