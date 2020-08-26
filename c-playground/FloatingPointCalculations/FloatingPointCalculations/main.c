//
//  main.c
//  FloatingPointCalculations
//

#include <stdio.h>

/*
 * Exercise 4 Solution
 */
int main(int argc, const char * argv[])
{
    // Problem 1: Convert between temperatures
    float originalFahrenheit;
    float calculatedCelsius;
    float calculatedFahrenheit;
    
    // prompt for and get original Fahrenheit temperature
    printf("Enter temperature (Fahrenheit): ");
    scanf("%f", &originalFahrenheit);
    
    // calculate and display temperature in Celsius
    calculatedCelsius = (originalFahrenheit - 32) / 9 * 5;
    printf("Celsius Temperature: %f\n", calculatedCelsius);
    
    // calculate and display temperature in Fahrenheit
    calculatedFahrenheit = calculatedCelsius * 9 / 5 + 32;
    printf("Fahrenheit Temperature: %f\n", calculatedFahrenheit);
    
    printf("\n");
    return 0;
}
