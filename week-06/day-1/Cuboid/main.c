#include <stdio.h>

int main() {


// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

    double sideFirst;
    double sideSecond;
    double sideThird;

    printf("Please give me the first side of the cuboid!\n");
    scanf("%lf" , &sideFirst);

    printf("Please give me the second side of the cuboid!\n");
    scanf("%lf" , &sideSecond);

    printf("Please give me the first third of the cuboid!\n");
    scanf("%lf" , &sideThird);

    double surfaceArea = 2 * (sideFirst * sideSecond + sideFirst * sideThird + sideSecond * sideThird);
    double volume = sideFirst * sideSecond * sideThird;

    printf("Surface Area: %.0lf\n", surfaceArea);
    printf("Volume: %.0lf\n", volume);

    return 0;
}