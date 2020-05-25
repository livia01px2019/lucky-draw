#ifndef __LUCK_DRAW_HH__
#define __LUCK_DRAW_HH__

void init_lucky(const unsigned int* const source_people, const unsigned int size);
unsigned int lucky_draw();
void free_people();

#endif
