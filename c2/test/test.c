#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int oldsize = 5;
    int newsize = 10;
    int *a = (int*) malloc (oldsize * sizeof(int));
    printf("%d\n",sizeof(a));
    for (size_t i =0;i<oldsize;++i) {
        a[i] = i;
    }

    for (size_t i = 0; i < oldsize; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    
    a = (int *) realloc (a, newsize);
    printf("%d\n",sizeof(a));
    for (size_t i = 0; i < newsize; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }

    a = (int *) realloc (a, oldsize);
    printf("%d\n",sizeof(a));
    for (size_t i = 0; i < newsize; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    char path[] = {"1.txt"};
    return 0;
}
