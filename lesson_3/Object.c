#include "Object.h"

// Глобальные переменные, константы и макросы
#define OBJECT "Object"
size_t hash = 0;


// Определение структуры ("объекта")
typedef struct Object {
    // Приватные методы
    void (*Free)(Object*);
    void (*Initialize)(Object*);
    // Родительская структура ("класс")
    /*Parent super;*/
    // Поля
    size_t _hash;
    // Методы внутри "интерфейс" публичные
    IObject interface;
} Object;

/* Функций доступные только внутри структуры "объект" */

bool Equals(IObject* objectLeft, IObject* objectRight)
{
    return true;
}

size_t GetHashCode(IObject* interface)
{
    return interface->object->_hash;
}

IObject* Clone(IObject* object)
{
    return newObject();
}

bool PointerEquals(IObject* objectLeft, IObject* objectRight)
{
    return objectLeft == objectRight;
}

const char* ToString(IObject* interface)
{
    return OBJECT;
}

void Free(Object* object)
{
    free(object);
}

void Initialize(Object* object)
{
    // Публичные методы
    object->interface.Equals = Equals;
    object->interface.GetHashCode = GetHashCode;
    object->interface.Clone = Clone;
    object->interface.PointerEquals = PointerEquals;
    object->interface.ToString = ToString;
    // Приватные методы
    object->Free = Free;
    object->Initialize = Initialize;
    // Поля "объекта"
    hash += 1;
    object->_hash = hash;
    object->interface.object = object;
}

IObject* newObject()
{ 
    Object* object = (Object*) calloc(1, sizeof(Object));
    Initialize(object);
    return &(object->interface);
}

void deleteObject(IObject* interface)
{
    Free(interface->object);
}

// Если необходимо, то определение ("переопределение") функций ("методов") родетельской структуры ("класса")
/* Комментарий: в случае попытки использования ООП в чистом Си, необходимо для 
каждой отличающейся по логике работы структуры реализовывать все методы 
методы базовой структуры, которая композируется во все следующие */

// Определение функций ("методов") структуры ("класса")