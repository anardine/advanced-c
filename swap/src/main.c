

#include<stdint.h>
#include<stdio.h>
#include"swap.c"


int main() {

    int num1 = 10;
    int num2 = 20;

    int *pToNum1 = &num1; 
    int *pToNum2 = &num2; 

    swapNums(pToNum1, pToNum2);

    return 0;
}