#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

typedef struct {
    float x;
    float y;
} point_t;

point_t point_creator(float x, float y);

float distance(point_t point1, point_t point2);

int main()
{

    point_t p1 = point_creator(10 , 1);
    point_t p2 = point_creator(1, 5);
    float dist = distance(p1, p2);
    printf("%f", dist);
    return 0;
}

point_t point_creator(float x, float y)
{

    point_t user_point;
    user_point.x = x;
    user_point.y = y;

    return user_point;
}

float distance(point_t point1, point_t point2)
{

    float dist_x = point1.x - point2.x;
    float dist_y = point1.y - point2.y;

    return sqrtf(dist_x * dist_x + dist_y * dist_y);
}