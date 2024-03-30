#include "Stack.h"

// Подключение наших библиотек
#include "Array.h"

// Объявление структуры данных
typedef struct Stack {
    Array* array;
} Stack;

// Заголовки функций доступные только внутри структуры данных

// Добавить элемент
void put(Stack* stack, void* elem) 
{
    add_to_end(stack->array, elem);
}

// Удалить элемент
void* pop(Stack* stack)
{
    if (size(stack->array) <= 0)
        return NULL;
    
    void* result = get(stack->array, stack->array->size - 1);
    delete(stack->array, stack->array->size - 1);
    return result;
}