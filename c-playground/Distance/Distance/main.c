//
//  main.c
//  Distance
//

#include <stdio.h>

#include <math.h>

/*
 * Calculates distance between 2 user-specified points
 */
int main(int argc, const char * argv[])
{
    float pointOneX;
    float pointOneY;
    float pointTwoX;
    float pointTwoY;
    
    // prompt for and get user input
    printf("Enter x for first point: ");
    scanf("%f", &pointOneX);
    printf("Enter y for first point: ");
    scanf("%f", &pointOneY);
    printf("Enter x for second point: ");
    scanf("%f", &pointTwoX);
    printf("Enter y for second point: ");
    scanf("%f", &pointTwoY);
    
    // calculate and print the distance between the two points
    float distance = sqrtf(powf(pointOneX - pointTwoX, 2) +
                           powf(pointOneY - pointTwoY, 2));
    printf("\n");
    printf("Distance between the points: %.2f", distance);
    
    printf("\n");
    return 0;
}
