#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main(void)
{
    /*Declared the variables*/
    float result = 0.0, input=0.0, degrees =0.0;

    printf("Select a number between 0 y 1: ");
    scanf("%f", &input);

    /*Protection code*/
    while (input <0 || input >1)
    {
        printf("The number is not allowed \n\r");
        printf("Try another one: ");
        scanf("%f", &input);
    }

    /*Applied the sine function*/
    result = sin(input);

    /*Convert radians to degrees*/
    degrees = result *(180/PI);

    /* %.2f = Truncated to two decimals*/
    printf("The result is %.2f radians \n\r", result);
    printf("Or %.2f degrees ",degrees);
    return 0;
}

