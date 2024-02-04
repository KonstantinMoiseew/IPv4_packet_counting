#ifdef BLOCK_READER_H_INCLUDED
#define BLOCK_READER_H_INCLUDED

#include "types.h"

Block* readBlock(FILE* in);
void freeBlock(Block* rv);

#endif //BLOCK_READER_INCLUDED
