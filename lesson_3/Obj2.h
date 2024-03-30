#ifndef OBJ2_H 
#define OBJ2_H 

// Подключение наших библиотек
#include "Obj1.h"

// Объявление и определение структуры "интерфейс"
typedef struct Obj2 Obj2;
typedef struct IObj2 IObj2;
typedef struct IObj2 {
    IObj1 super;
    int (*getY)(IObj2*);
    Obj2* object;
} IObj2;

IObj2* newObj2();
void deleteObj2(IObj2*);

#endif