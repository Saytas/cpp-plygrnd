//
//  main.c
//  ConsoleOutput
//

#include <stdio.h>

/*
 * Exercise 1 solution
 */
int main(int argc, const char * argv[])
{
    // Problem 1: Output name
    // Note the use of the escape sequence \" to
    // include " in the output
    // The escape sequence \n moves to the next line in the console
    // It's nice to include the blank line after the name
    printf("Name: Tim \"Dr. T\" Chamillard\n");
    printf("\n");
    
    // Problem 2: Output nemesis' name
    printf("Nemesis: The Shoveler\n");
    printf("\n");
    
    // Problem 3: Output 3 favorite video games
    printf("Three Favorite Video Games\n");
    printf("--------------------------\n");
    printf("Asseto Corsa\n");
    printf("DiRT Rally\n");
    printf("Project CARS\n");
    
    printf("\n");
    return 0;
}
