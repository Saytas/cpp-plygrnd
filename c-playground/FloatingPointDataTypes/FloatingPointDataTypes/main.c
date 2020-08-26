//
//  main.c
//  FloatingPointDataTypes
//

#include <stdio.h>

//
// Demonstrates floating-point data types
//
int main(int argc, const char * argv[])
{
    // collected data
    int hoursDriven = 5;
    int milesDriven = 262;
    
    // calculate and print miles per hour
    float mph = (float)milesDriven / hoursDriven;
    printf("MPH: %.1f\n", mph);
    
    return 0;
}
