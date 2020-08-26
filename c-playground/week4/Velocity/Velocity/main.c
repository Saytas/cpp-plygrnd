//
//  main.c
//  Velocity
//

#include <stdio.h>

#include <math.h>

#define TIME_TO_MOVE 3

/*
 * Calculates velocity vector
 */
int main(int argc, const char * argv[])
{
    typedef struct Vector Vector;
    struct Vector
    {
        float x;
        float y;
    };
    
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
    printf("\n");
    
    // calculate deltas
    float deltaX = pointTwoX - pointOneX;
    float deltaY = pointTwoY - pointOneY;
    
    // calculate and print velocity vector
    Vector velocity;
    velocity.x = deltaX / TIME_TO_MOVE;
    velocity.y = deltaY / TIME_TO_MOVE;
    printf("Velocity vector: (%.2f,%.2f)\n", velocity.x, velocity.y);
    
    // sanity check
    float distance = sqrtf(powf(deltaX, 2) + powf(deltaY, 2));
    float speed = distance / TIME_TO_MOVE;
    float direction = atan2f(deltaY, deltaX);
    direction *= 180 / M_PI;
    printf("Speed: %.2f\n", speed);
    printf("Direction: %.2f degrees\n", direction);
    
    // calculate unit direction vector
    Vector unitDirection;
    unitDirection.x = deltaX;
    unitDirection.y = deltaY;
    float length = sqrtf(powf(unitDirection.x, 2) +
                         powf(unitDirection.y, 2));
    unitDirection.x /= length;
    unitDirection.y /= length;
    
    // calculate and print velocity vector
    velocity.x = unitDirection.x * speed;
    velocity.y = unitDirection.y * speed;
    printf("Velocity vector: (%.2f,%.2f)\n", velocity.x, velocity.y);
    
    printf("\n");
    return 0;
}
