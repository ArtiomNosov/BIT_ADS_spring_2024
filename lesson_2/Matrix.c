#include "Matrix.h"

// Подключение наших библиотек
#include "Array.h"

// Объявление структуры данных

typedef struct Matrix {
    int rows;
    int columns;
    Array *data;
} Matrix;



// Заголовки функций доступные только внутри структуры данных

// Создать матрицу

// TODO: исправить функцию, не работает
Matrix* createMatrix(int rows, int columns){
    Matrix *matrix = (Matrix*)calloc(1, sizeof(Matrix));
    matrix->rows = rows;
    matrix->columns = columns;
    matrix->data = (Array*)calloc(rows, sizeof(Array))
    for (size_t i = 0; i < rows; i++)
        matrix->data[i] = calloc(rows, sizeof(Array*)) 
    
    return matrix;

}

// Получить элемент по индексу