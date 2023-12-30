#include <stdio.h>



int main() {
    // Declare variables
    int year, day;
    int month=1;

    // Input the year
    printf("Enter the year: ");
    scanf("%d", &year);

    day = (1 + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) + 5 * j)% 7;

    // Check if the year is valid (Gregorian calendar starts from 1583)
    if (year >= 1583) {


        // Display the result
        printf("\nOn January 1st of %d, the day is: ", year);

        switch (day) {
            case 0:
                printf("Saturday\n");
                break;
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
        }
    } else {
        printf("\nInvalid input. Please enter a year from 1583 onwards.\n");
    }

    return 0;
}

