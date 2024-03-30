#include "Obj2.h"

// Глобальные переменные, константы и макросы
#define OBJ2 "Obj2"


// Определение структуры ("объекта")
typedef struct Obj2 {
    int y;
    IObj2 interface;
} Obj2;

/* Функций доступные только внутри структуры "объект" */
void FreeObj2(Obj2* obj2)
{
    free(obj2);
}

int getY(IObj2* obj2)
{
    return obj2->object->y;
}

void InitializeObj2(Obj2* obj2)
{
    // Публичные методы
    IObj1* p = newObj1();
    obj2->interface.super = *p;
    free(p);
    obj2->y = 0;
    obj2->interface.object = obj2;
    obj2->interface.getY = getY;
}

IObj2* newObj2()
{ 
    Obj2* obj2 = (Obj2*) calloc(2, sizeof(Obj2));
    InitializeObj2(obj2);
    return &(obj2->interface);
}

void deleteObj2(IObj2* interface)
{
    deleteObj1(&(interface->super));
    FreeObj2(interface->object);
}

// Если необходимо, то определение ("переопределение") функций ("методов") родетельской структуры ("класса")
/* Комментарий: в случае попытки использования ООП в чистом Си, необходимо для 
каждой отличающейся по логике работы структуры реализовывать все методы 
методы базовой структуры, которая композируется во все следующие */

// Определение функций ("методов") структуры ("класса")