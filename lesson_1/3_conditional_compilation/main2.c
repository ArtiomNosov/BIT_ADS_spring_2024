#include <stdio.h>
#define N 22
  
int main(void)
{
#if N==22
    printf("N=22");
#else
    printf("N is undefined");
#endif
    return 0;
}