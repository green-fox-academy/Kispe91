#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer gamer_pc;
    gamer_pc.cpu_speed_GHz = 4.8;
    gamer_pc.ram_size_GB = 16;
    gamer_pc.bits = 64;

    printf("Your computer speed(GHz) is: %.3f, ram size is: %d GB, and the operating system type is %d bits\n",
            gamer_pc.cpu_speed_GHz, gamer_pc.ram_size_GB, gamer_pc.bits);


    Notebook asus_vivbook;
    asus_vivbook.cpu_speed_GHz = 3.78;
    asus_vivbook.ram_size_GB = 8;
    asus_vivbook.bits = 64;

    printf("Your notebook speed(GHz) is: %.3f, ram size is: %d GB, and the operating system type is %d bits\n",
           asus_vivbook.cpu_speed_GHz,  asus_vivbook.ram_size_GB,  asus_vivbook.bits);
    return 0;
}