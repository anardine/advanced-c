
#include"memcpy.c"
#include<stdlib.h>

int main() {

    int a = 10;
    int *pToDest = malloc(sizeof(int));

    memcpy(&a, pToDest);
    
    return 0;
}
