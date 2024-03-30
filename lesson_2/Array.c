#include "Array.h"

// Структура данных Array

typedef struct Array {
    size_t capacity;
    size_t size;
    void** array;
} Array;

// Заголовки функций доступные только внутри структуры данных

// Создать массив
Array* createArray() 
{
    Array* array = calloc(1, sizeof(Array));
    array->capacity = 0;
    array->size = 0;
    array->array = NULL;
    return array;
}

Array* createArrayWithCapacity(size_t capacity) 
{
    Array* array = calloc(1, sizeof(Array));
    array->capacity = capacity;
    array->size = 0;
    array->array = calloc(capacity, sizeof(void*));
    return array;
}

// Добавить элемент в конец массива
int addelement(Array* array, void* element)
{
    if (array->size < array->capacity) {
        array -> array[array->size] = element;
        array -> size++;
    }
    else {
        // printf("Error!");
    }
    // TODO: выделение новой памяти и return
}

// Удалить элемент по индексу

// TODO: написать так чтобы удаляло по любому индексу
// void delelement(Array* array, size_t index){
//     for (size_t i = index; i < array -> size - 1; i++) {
//         if (i == index) {
//             // array -> array[i] = array -> array[i + 1];
//         }

//     }
//     array -> size--;
// }

// Получить элемент по индексу

void* getelement(Array* array, size_t index){
    return array->array[index];
}

// Изменить элемент по индексу

void changeelement(Array *array, size_t index, void* newelement){
    array -> array[index] = newelement;

}



