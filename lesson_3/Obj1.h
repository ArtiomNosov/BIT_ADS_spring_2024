#ifndef OBJ1_H 
#define OBJ1_H 

// Подключение наших библиотек
#include "Object.h"

// Объявление и определение структуры "интерфейс"
typedef struct Obj1 Obj1;
typedef struct IObj1 IObj1;
typedef struct IObj1 {
    IObject super;
    int (*getX)(IObj1*);
    Obj1* object;
} IObj1;

IObj1* newObj1();
void deleteObj1(IObj1*);

#endif