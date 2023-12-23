#include <stdio.h>

int main() {
    
    float Km, Metre, Feet, Inches, Cm;

    
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &Km);

    
    Metre = Km * 1000; 
    Cm= Km * 100000; 
    Feet = Km * 3280.84; 
    Inches = Km * 39370.1; 

 
    printf("\nDistance in Meters: %.2f m", Metre);
    printf("\nDistance in Feet: %.2f ft", Feet);
    printf("\nDistance in Inches: %.2f in", Inches);
    printf("\nDistance in Centimeters: %.2f cm", Cm);

    return 0;
}
