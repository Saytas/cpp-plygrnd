//
//  main.c
//  IntegerDataTypes
//

#include <stdio.h>

#define MINUTES_PER_HOUR 60

//
// Demonstrates integer data types
//
int main(int argc, const char * argv[])
{
    int totalMinutes = 113;
    
    // calculate and print hours
    int hours = totalMinutes / MINUTES_PER_HOUR;
    printf("Hours: %d\n", hours);
    
    // calculate and print minutes
    int minutes = totalMinutes % MINUTES_PER_HOUR;
    printf("Minutes: %d\n", minutes);
    
    return 0;
}
