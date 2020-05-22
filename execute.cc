#include <stdio.h>
#include "luckydraw.hh"

int main(int argc, char *argv[])
{
    unsigned int source_people [100];
    for (int i = 0; i < 100; i++) {
        source_people [i] = i;
    }
    for(int i = 0; i < 10; i++) {
        unsigned int drawn = lucky_draw(source_people);
        printf("%u \n", drawn);
    }

    free_already_drawn();
    return 0;
}
