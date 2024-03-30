#include <stdio.h>
 
void rect(char sign, int w, int h) {
    int i, j;
 
    for (i = 0; i < w; i++) 
        putchar(sign);
    putchar('\n');
 
    for (i = 0; i < h-2; i++) {
        for (j = 0; j < w; j++) {
            if (j == 0 || j == w-1) 
                putchar(sign);
            else 
                putchar(' ');        
        }
        putchar('\n');
    }
 
    for (i = 0; i < w; i++) 
        putchar(sign);
    putchar('\n');
}
 
void diagonals(char sign, int w) {
    int i, j;
 
    for (i = 0; i < w; i++) {
        for (j = 0; j < w; j++) {
            if (i == j || i+j == w-1) 
                putchar(sign);
            else 
                putchar(' ');        
        }
        putchar('\n');
    }
}