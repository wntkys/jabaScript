#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

typedef struct {
    char** body; //array of null iterated strings
    uint32_t length;
} MultiString;

MultiString* MultiString_create_read( const char* name ) {
    FILE *fp;
    fp = fopen ( name, "r" );

    MultiString* dest;
    dest = ( MultiString* )malloc( sizeof( MultiString ) );
}

#endif //IO_H_INCLUDED