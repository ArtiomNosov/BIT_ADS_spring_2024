#include <stdio.h>

#include "Object.h"
#include "Obj1.h"
#include "Obj2.h"

int main()
{
    IObject* object = newObject();
    printf("%s\n", object->ToString(object));
    deleteObject(object);
    IObj1* obj1 = newObj1();
    printf("%s\n", ((IObject*)obj1)->ToString(object));
    printf("%d\n", obj1->getX(obj1));
    deleteObj1(obj1);
    IObj2* obj2 = newObj2();
    printf("(%d, %d)\n", ((IObj1*)obj2)->getX(obj1), obj2->getY(obj2));
    deleteObj2(obj2);
    return 0;
}