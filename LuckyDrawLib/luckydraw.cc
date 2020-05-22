#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "luckydraw.hh"

unsigned int* already_drawn = new unsigned int[100];
int counter = 0;

unsigned int lucky_draw(unsigned int* const source_people)
{
    srand((unsigned) time(0));

    int index_drawn = rand()%(100-counter);
    int add = 0;
    for (int i = 0; i < counter; i++){
        if (index_drawn >= *(already_drawn + i)) {
            add++;
        }
    }

    int actual_index = index_drawn + add;
    already_drawn[counter] = actual_index; 
    counter++;

    return *(source_people + actual_index);
}

void free_already_drawn()
{
    delete[] already_drawn;
    already_drawn = 0;
    counter = 0;
}
