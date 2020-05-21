#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "luckydraw.hh"

unsigned int* already_drawn = new unsigned int[100];

unsigned int lucky_draw(unsigned int* const source_people)
{
    srand((unsigned) time(0));
    int index_drawn = rand() % 100;
    while(already_drawn[index_drawn]) {
        index_drawn = rand() % 100;
    }

    *(already_drawn + index_drawn) = 1; 
    return *(source_people + index_drawn);
}