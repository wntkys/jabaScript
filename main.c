#include <stdio.h>
#include <inttypes.h>

typedef struct {
  int64_t value;
  uint8_t currentType;
  uint32_t gc_id;
  uint8_t bool;
} JabObject;

int main() {
    printf( "Hello, World!" );
}