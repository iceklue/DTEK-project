#ifndef ENITTY
#define ENTITY
#include <stdint.h>   /* Declarations of uint_32 and the like */
 struct entity
{
    int x,y;
    int w,h;
     uint8_t image[];
};

#endif