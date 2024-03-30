/* obj.c */

#include "obj.h"

struct obj {
    int id;
};

/*
 * The caller will handle allocation.
 * Provide the required information only
 */

size_t obj_size(void) {
    return sizeof(struct obj);
}

void obj_setid(struct obj *o, int i) {
    o->id = i + 1;
}

int obj_getid(struct obj *o) {
    return o->id;
}