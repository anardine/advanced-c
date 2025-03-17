
 // memory copy definition and implementation

#include<stdint.h>
#include <sys/_types/_size_t.h>


 void memcpy(void const *source, void *dest, size_t size) {
    
    char *tempSource = (char*)source;
    char *tempDestination = (char*) dest;

    for (int i=0; i<size; i++) 
    tempDestination[i] = tempSource[i]; 
 } 

