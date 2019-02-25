#include <stdio.h>
#include "circle.h"

int main() {

    double userRadius;

    printf("Please give me the radius of circle the circle");
    scanf("%lf", &userRadius);

    printf("%lf\n" ,circleArea(userRadius));
    printf("%lf\n" , circleCircumference(userRadius));

    return 0;
}