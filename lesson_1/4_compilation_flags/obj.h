/* obj.h */

#include <stdio.h>

struct obj;

/*
 * The compiler considers struct obj an incomplete type. Incomplete types
 * can be used in declarations.
 */

size_t obj_size(void);

void obj_setid(struct obj *, int);

int obj_getid(struct obj *);