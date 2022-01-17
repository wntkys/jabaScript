#ifndef MULTI_STRING_H_INCLUDED
#define MULTI_STRING_H_INCLUDED
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char** body; //array of null iterated strings
    int64_t length;
} MultiString;

MultiString* MultiString_create_readFromFile( const char* name ) {
    FILE *FileP;
    FileP = fopen ( name, "r" );
    if ( FileP == NULL ) {
        #ifdef DEBUG
        printf( "file at specified path: \"%s\" does not exist\n", name );
        #endif
        return NULL;
    }
    MultiString* dest;
    dest = ( MultiString* )malloc( sizeof( MultiString ) );
    int64_t currentSize = 16;
    char* string = ( char* )calloc( 1024, sizeof( char ) );
    dest->body = ( char** )calloc( currentSize, sizeof(char*) );
    int64_t strNumb = 0;
    while ( fgets( string, 1024, FileP ) != NULL ) {
        dest->body[ strNumb ] = ( char * )calloc( strlen( string ), sizeof( char ) );
        strcpy( dest->body[ strNumb ], string );
        strNumb++;
        if ( strNumb == currentSize ) {
            currentSize += 16;
            dest->body = ( char** )realloc( dest->body, currentSize * sizeof(char*) );
        }
    }
    dest->length = strNumb;
    return dest;
}

void MultiString_print( MultiString* ms ) {
    for ( int64_t i = 0; i < ms->length; i++ ) {
        printf( "%s\n", ms->body[ i ] );
    }
}

#endif //MULTI_STRING_H_INCLUDED