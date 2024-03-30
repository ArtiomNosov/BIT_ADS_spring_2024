#include <stdio.h>
#define N 24
 
int main(void)
{
#if N==22
    printf("N = 22");
#elif N==24
    printf("N=24");
#else
    printf("N is undefined");
#endif
    return 0;
}