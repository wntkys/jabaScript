#ifndef JAB_H_INCLUDED
#define JAB_H_INCLUDED

//#include "jab_value.h"

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

#endif //JAB_H_INCLUDED