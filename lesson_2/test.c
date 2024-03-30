#include <stdio.h>
#include <stdlib.h>

// Подключение наших библиотек
#include "Array.h"

void main()
{
    float a;
    int b = 10;
    int c = 20;
    void* t = (void*)&a;
    // Создание массива
    Array* array_int = createArrayWithCapacity(10);
    addelement(array_int, &b);
    addelement(array_int, &c);
    printf("%d\n", sizeof(void*));
    printf("%d\n", *((int*)getelement(array_int, 0)));
    printf("%d\n", *((int*)getelement(array_int, 1)));
    return;
}