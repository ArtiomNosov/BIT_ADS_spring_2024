#include <stdio.h>
#include <stdlib.h>
#include "obj.h"

void main() 
{
    struct obj* obj = calloc(1, obj_size());
    obj_setid(obj, 42);
    printf("The answer is %d", obj_getid(obj));
}