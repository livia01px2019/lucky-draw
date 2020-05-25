#include <stdio.h>
#include "luckydraw.hh"

int main(int argc, char *argv[])
{
    int size = 100;
    unsigned int source_people [size];
    for (int i = 0; i < size; i++) {
        source_people [i] = i;
    }
    init_lucky(source_people, size);

    for(int i = 0; i < 10; i++) {
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
