/* input.h */
#include <ncurses.h>
#include <string.h>
#include <stdlib.h>

#define ENTER 10
#define BACKSPACE 263

char* get_input(void);
int search(char *phrase);