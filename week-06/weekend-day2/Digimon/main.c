#include <stdio.h>
#include <mem.h>
#include "digimon.h"

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)
 *
 * You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega
 *
 * The digimons are stored in an array.
 *
 * Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"
 * 2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"
 * 3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"
 * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */

int main()
{

    digimon_t digimon1;
    strcpy(digimon1.name, "Agumon");
    digimon1.age = 2;
    digimon1.health = 30;
    digimon1.digivolution = ROOKIE;
    strcpy(digimon1.name_of_tamer, "Tai");

    digimon_t digimon2;
    strcpy(digimon2.name, "Greymon");
    digimon2.age = 3;
    digimon2.health = 50;
    digimon2.digivolution = CHAMPION;
    strcpy(digimon2.name_of_tamer, "Tai");

    digimon_t digimon3;
    strcpy(digimon3.name, "Metal-Greymon");
    digimon3.age = 4;
    digimon3.health = 70;
    digimon3.digivolution = ULTIMATE;
    strcpy(digimon3.name_of_tamer, "Tai");

    digimon_t digimon4;
    strcpy(digimon4.name, "War-Greymon");
    digimon4.age = 5;
    digimon4.health = 100;
    digimon4.digivolution = MEGA;
    strcpy(digimon4.name_of_tamer, "Tai");

    digimon_t digimons[4];
    digimons[0] = digimon1;
    digimons[1] = digimon2;
    digimons[2] = digimon3;
    digimons[3] = digimon4;

    printf("%d\n", get_same_tamer(digimons, 4, "Tai"));
    printf("%d\n", get_minimum_health(digimons, 4));
    printf("%.3f\n", get_average_health(digimons, 4, "Tai"));
    printf("%d\n", get_same_digivolution_level(digimons, 4, ULTIMATE));




    return 0;
}