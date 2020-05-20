#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "luckydraw.hh"

int main(int argc, char *argv[])
{
    unsigned int source_people [100];
    for (int i = 0; i < 100; i++) {
        source_people [i] = i;
    }
    for(int i = 0; i < 10; i++) {
        printf("%u \n", lucky_draw(source_people));
    }
}