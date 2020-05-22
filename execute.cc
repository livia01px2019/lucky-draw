#include <stdio.h>
#include "luckydraw.hh"

int main(int argc, char *argv[])
{
    unsigned int source_people [100];
    for (int i = 0; i < 100; i++) {
        source_people [i] = i;
    }
    init_lucky(source_people);

    for(int i = 0; i < 100; i++) {
        try {
            unsigned int drawn = lucky_draw();
            printf("%u \n", drawn);
        } catch (const char* msg) {
            printf("%s", msg);
            free_people();
            return -1;
        }
        
    }

    free_people();
    return 0;
}
