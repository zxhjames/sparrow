#ifndef _MODULE1_A_H 
#define _MODULE1_A_H

typedef struct A {
    char* name;
    int type;
} AA ;

AA* init(void);
void destroy(AA *a);
void process(int seconds);
#endif