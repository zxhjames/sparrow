#include <stdio.h>
#include <stdlib.h>
void foo(void) {
    printf("bye\n");
}

int main() {
    atexit(&foo);
    printf("end");
}