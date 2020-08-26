//
//  main.c
//  RAF
//
//  Created by SY on 8/25/20.
//  Copyright © 2020 Selahittin Saytaş. All rights reserved.
//
//
//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

/*
 * File:   main.c
 * Author: Selahittin Saytaş
 */

#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

// The gravitational constant
#define G 9.81
#define MAX_LENGTH 100

typedef struct Input Input;
struct Input
{
    float theta;
    float speed;
};

void getInputValuesFromString(char string[], Input *inputValues);

/*
 * Programming Assignment 3
 */
int main(int argc, char** argv)
{
    // IMPORTANT: Only add code in the section
    // indicated below. The code I've provided
    // makes your solution work with the
    // automated grader on Coursera
    char input[MAX_LENGTH];
    fgets(input, MAX_LENGTH, stdin);
    while (input[0] != 'q')
    {
        Input inputValues;
        getInputValuesFromString(input, &inputValues);

        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed
        
        // Convert theta from degrees to radians
        inputValues.theta *= M_PI / 180;
        
        // x component of the velocity at start
        float velocityX = inputValues.speed * cosf(inputValues.theta);
        // y component of the velocity at start
        float velocityY = inputValues.speed * sinf(inputValues.theta);
        // time until shell reaches apex
        float t = velocityY / G;
        // height of shell at apex
        float h = powf(velocityY, 2) / (2 * G);
        // distance shell travels horizontally
        float dX = velocityX * 2 * t;
        
        printf("%.2f %.2f\n", h, dX);
        
        // Don't add or modify any code below
        // this comment
        fgets(input, MAX_LENGTH, stdin);
    }

    return 0;
}

/*
* Extracts input values from provided string
*/
void getInputValuesFromString(char string[], Input *inputValues)
{
    // find first space index
    int spaceIndex = -1;
    char *result = NULL;
    result = strchr(string, ' ');
    char *stringStart = &string[0];
    spaceIndex = result - stringStart;

    // extract theta from string
    char* thetaString = malloc((spaceIndex + 1) * sizeof(char));
    strncpy(thetaString, string, spaceIndex);
    thetaString[spaceIndex] = '\0';
    inputValues->theta = atof(thetaString);

    // extract speed from string
    string = &string[spaceIndex + 1];
    inputValues->speed = atof(string);

    // free memory
    free(thetaString);
    thetaString = NULL;
}
