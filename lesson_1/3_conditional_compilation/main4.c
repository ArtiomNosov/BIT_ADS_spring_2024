#include <stdio.h>
#define DEBUG
 
int main(void)
{
#ifdef DEBUG
    printf("Debug mode");
#endif
    return 0;
}