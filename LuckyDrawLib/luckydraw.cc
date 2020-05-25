#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <algorithm>
#include "luckydraw.hh"

unsigned int* people = 0;
int counter = 0;
int people_size = 0;

void init_lucky(const unsigned int* const source_people, const unsigned int size) {
    people_size = size;
    people = new unsigned int[size];
    for (int i = 0; i < people_size; i ++){
        people[i] = source_people[i];
    }
}

unsigned int lucky_draw()
{ 
    srand((unsigned) time(0));

    if (counter >= people_size) {
        throw "All people already drawn.";
    }

    int index_drawn = rand()%(people_size-counter);
    unsigned int return_person = people[index_drawn];

    people[people_size-1-counter] = people[index_drawn];

    counter++;
    return return_person;
}

void free_people()
{
    delete[] people;
    people = 0;
    counter = 0;
    people_size = 0;
}
