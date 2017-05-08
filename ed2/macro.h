#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int MOV;
#define swap(x,y,size) do \
   { unsigned char swap_temp[size]; \
     memcpy(swap_temp,y,size); \
     memcpy(y,x,       size); \
     memcpy(x,swap_temp,size); \
     MOV=MOV+3; \
    } while(0)
#define insert(x,y,size) do \
    { memcpy(x,y,size); \
      MOV=MOV+1; \
    } while(0)
