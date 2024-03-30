#ifndef OBJECT_H 
#define OBJECT_H 

// Подключение стандартных библиотек
#include <stdlib.h>
#include <stdbool.h>

// Подключение наших библиотек

// Объявление и определение структуры "интерфейс"
typedef struct Object Object;
typedef struct IObject IObject;
typedef struct IObject {
    // Определяет, равен ли указанный объект текущему объекту.
    bool (*Equals)(IObject*, IObject*); 
    // Служит хэш-функцией по умолчанию
    size_t (*GetHashCode)(IObject*);
    // Возвращает объект Type для текущего экземпляра.
    // GetType() TODO: потом сделать
    // Создает копию текущего объекта Object.
    IObject* (*Clone)(IObject*);
    // Cовпадают ли указанные экземпляры Object.
    bool (*PointerEquals)(IObject*, IObject*);
    // Возвращает строку, представляющую текущий объект.
    const char* (*ToString)(IObject*);
    Object* object;
} IObject;

IObject* newObject();
void deleteObject(IObject*);

#endif