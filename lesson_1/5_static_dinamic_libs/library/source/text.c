#include <stdio.h>
 
void text(char *ch) {
    while (*ch++ != '\0') 
        putchar('*');
    putchar('\n');
}