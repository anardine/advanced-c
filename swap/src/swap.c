

#include<stdint.h>
#include"swap.h"

void swapNums(int *pNum1, int *pNum2) {

    int temp;

    temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;

}