#ifndef SEPARATE_CIRCLE_H
#define SEPARATE_CIRCLE_H

#define PI 3.14

double circleArea(double radius)
{
    double area = radius * radius * PI;

    return area;
}

double circleCircumference(double radius)
{
    double circumference = 2 * radius * PI;

    return circumference;
}

#endif //SEPARATE_CIRCLE_H
