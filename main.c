#define DEBUG

#include <stdio.h>
#include <inttypes.h>
#include "include/multi_string.h"



typedef struct {
  int64_t value;
  enum{
    BOOLEAN,
    NUMBER,
    STRING,
    BIG_INT,
    OBJECT
  } type;
  uint32_t gc_id;
  uint8_t bool;
} JabValue;

typedef struct {

} JabInstruction;

typedef struct {
  
} JabBlock;

typedef struct {
  
} JabModule;

typedef struct {

} JabProgram;
//
//JabProgram.evaluate => return jabVal with FUNCTION TYPE
//
int main() {
    MultiString m;
    MultiString* mp = &m;
    mp = MultiString_create_readFromFile( "./primer.js" );
    puts( "just testing\n" );
    MultiString_print( mp );
}