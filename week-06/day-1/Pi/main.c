#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that circle
// area = radius * radius * PI

double circleArea(double radius);

int main()
{

    double userRadius;

    printf("Please give me the radius of circle the circle");
    scanf("%lf", &userRadius);

    printf("%lf" ,circleArea(userRadius));

    return 0;
}

double circleArea(double radius)
{
    double area = radius * radius * PI;

    return area;
}