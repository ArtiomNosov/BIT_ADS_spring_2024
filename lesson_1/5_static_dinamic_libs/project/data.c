#include <stdio.h>
#include "../library/mylib.h"
 
void data(void) {
    char strs[3][30];
    char *prompts[3] = {
        "Ваше имя: ", 
        "Местонахождение: ", 
        "Пунк прибытия: "};
    int i;
 
    for (i = 0; i < 3; i++) {
        printf("%s", prompts[i]);
        fgets(strs[i], 30, stdin);
    }
 
    diagonals('~', 7);
 
    for (i = 0; i < 3; i++) {
        printf("%s", prompts[i]);
        text(strs[i]);
    }
}