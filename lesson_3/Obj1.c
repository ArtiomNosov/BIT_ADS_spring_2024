#include "Obj1.h"

// Глобальные переменные, константы и макросы
#define OBJ1 "Obj1"


// Определение структуры ("объекта")
typedef struct Obj1 {
    int x;
    IObj1 interface;
} Obj1;

/* Функций доступные только внутри структуры "объект" */
void FreeObj1(Obj1* obj1)
{
    free(obj1);
}

int getX(IObj1* obj1)
{
    return obj1->object->x;
}

const char* ToStringObj1(IObject* interface)
{
    return OBJ1;
}

void InitializeObj1(Obj1* obj1)
{
    // Публичные методы
    IObject* p = newObject();
    obj1->interface.super = *p;
    obj1->interface.super.ToString = ToStringObj1;
    free(p);
    obj1->x = 0;
    obj1->interface.object = obj1;
    obj1->interface.getX = getX;
}

IObj1* newObj1()
{ 
    Obj1* obj1 = (Obj1*) calloc(1, sizeof(Obj1));
    InitializeObj1(obj1);
    return &(obj1->interface);
}

void deleteObj1(IObj1* interface)
{
    deleteObject(&(interface->super));
    FreeObj1(interface->object);
}

// Если необходимо, то определение ("переопределение") функций ("методов") родетельской структуры ("класса")
/* Комментарий: в случае попытки использования ООП в чистом Си, необходимо для 
каждой отличающейся по логике работы структуры реализовывать все методы 
методы базовой структуры, которая композируется во все следующие */

// Определение функций ("методов") структуры ("класса")