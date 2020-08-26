//
//  main.c
//  FloatingPointVariablesAndOperations
//

#include <stdio.h>

// Constant for Problem 2
#define MAX_SCORE 100000

/*
 * Exercise 3 Solution
 */
int main(int argc, const char * argv[])
{
    // Problem 1: Save and display score
    int score = 42550;
    printf("Score: %d\n", score);
    
    // Problem 2: Calculate and display percentage
    float percentage = ((float)score / MAX_SCORE) * 100;
    printf("Percentage: %.2f\n", percentage);
    
    // Problem 3: Display rounded percentage
    printf("Rounded Percentage: %.0f\n", percentage);
    printf("\n");
    
    return 0;
}
