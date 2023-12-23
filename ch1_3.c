#include <stdio.h>

int main() {
    // Declare variables
    int marks[5];
    float totalMarks = 0.0, percentage;

    
    printf("Enter marks for 5 subjects\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Marks should be between 0 and 100.\n");
            return 1; 
        }

      
        totalMarks += marks[i];
    }

  
    percentage = (totalMarks / (5 * 100)) * 100;

    // Display the result
    printf("\nAggregate Marks: %.2f\n", totalMarks);
    printf("Percentage Marks: %.2f\n", percentage);

    return 0;
}

