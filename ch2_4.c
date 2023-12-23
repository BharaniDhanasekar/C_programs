#include <stdio.h>
#include <math.h>

int main() {

    float x, y, r, theta;


    printf("Enter the x-coordinate: ");
    scanf("%f", &x);

    printf("Enter the y-coordinate: ");
    scanf("%f", &y);


    r = sqrt(x * x + y * y);
    theta = atan2(y, x);


    theta = theta * 180 / M_PI;


    printf("\nPolar Coordinates:\n");
    printf("r = %.2f\n", r);
    printf("θ = %.2f degrees\n", theta);

    return 0;
}
