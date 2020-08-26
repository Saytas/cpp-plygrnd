//
//  main.c
//  EnergeticEinstein
//

#include <stdio.h>
#include <math.h>

// Speed of the light
#define C 299792458

/*
 * Calculates Einstein's energy equation
 */
int main(int argc, const char * argv[])
{
    float m;
    float e;
    
    // get mass and calculate energy
    printf("Enter mass in kg: ");
    scanf("%f", &m);
    e = m * powf(C, 2);
    printf("Energy: %f Joules\n", e);
    
    return 0;
}
