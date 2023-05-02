#include <stdio.h>
#include "../module1/a.h"
#include "../module2/b.h"

int main(void) {
    loading();
    AA* a = init();
    printf("name is %s, type is %d\n",a->name, a->type);
    destroy(a);
    return 0;
}