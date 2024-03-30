#ifndef ARRAY_H 
#define ARRAY_H 

// Подключение стандартных библиотек
#include <stdlib.h>

// Подключение наших библиотек

typedef struct Array Array;

// Заголовки функций доступные вне структуры данных
/*Some functions*/
Array* createArray();

Array* createArrayWithCapacity(size_t capacity);

// Добавить элемент в конец массива
int addelement(Array* array, void* element);
void* getelement(Array* array, size_t index);



#endif