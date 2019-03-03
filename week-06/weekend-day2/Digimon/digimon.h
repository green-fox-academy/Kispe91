#ifndef DIGIMON_DIGIMON_H
#define DIGIMON_DIGIMON_H

enum digivolution_level {
    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA
} digivolution_level_t;

typedef struct digimon {
    char name[127];
    int age;
    int health;
    char name_of_tamer[255];
    enum digivolution_level digivolution;
} digimon_t;

int get_minimum_health(struct digimon* array_of_digimon_list, int array_length)
{
    int min_health = array_of_digimon_list[0].health;
    int min_health_index = 0;

    for (int i = 0; i < array_length; ++i) {
        if(array_of_digimon_list[i].health < min_health) {
            min_health = array_of_digimon_list[i].health;
            min_health_index = i;
        }
    }

    return min_health_index;
}

int get_same_digivolution_level(struct digimon* array_of_digimon_list, int array_length, enum digivolution_level digivolution)
{

    int sum_of_digivolution_level = 0;

    for (int i = 0; i < array_length; ++i) {
        if(array_of_digimon_list[i].digivolution == digivolution) {
            sum_of_digivolution_level++;
        }
    }

    return sum_of_digivolution_level;
}

int get_same_tamer(struct digimon* array_of_digimon_list, int array_length, const char *tamer_name)
{

    int sum_same_character = 0;
    int number_of_digimons_of_tamer = 0;

    for (int i = 0; i < array_length; ++i) {
        for (int j = 0; j < strlen(tamer_name); ++j) {
            if (array_of_digimon_list[i].name_of_tamer[j] != tamer_name[j]) {
                sum_same_character = 0;
                break;
            } else {
                sum_same_character++;
            }
        }
        if(sum_same_character == strlen(tamer_name)) {
            number_of_digimons_of_tamer++;
        }
        sum_same_character = 0;
    }

    return number_of_digimons_of_tamer;
}

float get_average_health(struct digimon* array_of_digimon_list, int array_length, const char *tamer_name)
{

    float average_health_of_digimons_from_same_tamer = 0;

    for (int i = 0; i < array_length; ++i) {
        average_health_of_digimons_from_same_tamer +=
        (float) array_of_digimon_list[i].health / (float) get_same_tamer(array_of_digimon_list, array_length, tamer_name);
    }

    return average_health_of_digimons_from_same_tamer;
}

#endif //DIGIMON_DIGIMON_H
