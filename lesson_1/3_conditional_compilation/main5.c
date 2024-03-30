#include <stdio.h>
//#define DEBUG
 
int main(void)
{
#ifndef DEBUG
    printf("Production mode");
#else
    printf("Debug mode");
#endif
    return 0;
}