#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <algorithm>
#include "luckydraw.hh"

unsigned int* people = new unsigned int[100];
int counter = 0;

void init_lucky(const unsigned int* const source_people) {
    for (int i = 0; i < 100; i ++){
        people[i] = source_people[i];
    }
}

unsigned int lucky_draw()
{ 
    srand((unsigned) time(0));

    if (counter >= 100) {
        throw "100 already drawn.";
    }

    int index_drawn = rand()%(100-counter);
    int return_person = people[index_drawn];

    // swap
    int temp = people[index_drawn];
    people[index_drawn] = people[99-counter];
    people[99-counter] = temp;

    counter++;
    return return_person;
}

void free_people()
{
    delete[] people;
    people = 0;
    counter = 0;
}
