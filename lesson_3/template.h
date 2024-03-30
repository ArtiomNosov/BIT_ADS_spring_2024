#ifndef TEMPLATE_H 
#define TEMPLATE_H 

// Подключение стандартных библиотек
#include <stdlib.h>

// Подключение наших библиотек

// Объявление и определение структуры "интерфейс"
typedef struct IExample {
    void* (*dosmth)(void*);
} IExample;

// Объявление структуры "объект"
typedef struct Example Example;

#endif