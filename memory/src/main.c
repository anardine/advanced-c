
#include"memcpy.c"
#include<stdlib.h>

int main() {

    int a = 10;
    int *pToDest = (int*)malloc(sizeof(int));

    memcpy(&a, pToDest, sizeof(a));

    free(pToDest);
    
    return 0;
}

