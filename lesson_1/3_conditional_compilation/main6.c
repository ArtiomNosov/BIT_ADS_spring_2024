#include <stdio.h>
#define BETA
#define DEBUG
 
int main(void)
{
#if defined DEBUG && !defined BETA
    printf("debug mode; final version");
#elif defined DEBUG && defined BETA
    printf("debug mode; beta version");
#else
    printf("undefined mode");
#endif
    return 0;
}