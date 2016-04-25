#include <stdio.h>

void allocmem1()
{
    char* memleak2 = malloc(100*sizeof(char));
}

void allocmem2()
{
    char* memleak2 = malloc(10*sizeof(char));
    allocmem1();
}

void allocmem3()
{
    char* memleak2 = malloc(5*sizeof(char));
    allocmem2();
}

int main(int argc, const char **argv)
{
    char* memleak1 = malloc(5*sizeof(char));
    char* memfreed = malloc(5*sizeof(char));
        
    int i=0;
    for (i=0; i<100; i++){
      allocmem3();
    }

    free(memfreed);
    return 0;
}


