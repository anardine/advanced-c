
 // memory copy definition and implementation

 #include<stdio.h>

 void memcpy(int *source, int *dest) {
    
    *dest = 0;
    *dest = *source | *dest;

    printf("the value at the source is: &d \n", *source);
    printf("the value at the dest is: &d \n", *dest); 

 } 


