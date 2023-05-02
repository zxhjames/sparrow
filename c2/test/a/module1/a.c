#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "a.h"

void process(int seconds) {
    printf("processing... \n");
    sleep(seconds);
}

AA *init() {
    // 初始化一个编译器组件
    // 
    AA* obj = (AA*) malloc (sizeof(AA));
    if (obj == NULL) {
        perror("init null error");
    }
    obj->name = "linux";
    obj->type = 1;
    process(1);
    printf("init finished\n");
    return obj;
}

void destroy(AA *a) {
    if (a == NULL) {
        perror("obj has destroyed!");
    }
    process(1);
    free(a);
    printf("obj is destroyed\n");
}