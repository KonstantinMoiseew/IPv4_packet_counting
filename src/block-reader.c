#include "block-reader.h"
#include <limits.h>
#include <stdlib.h>

Block* readBlock(FILE* in)
{
    Block_header h;
    fread(&h, sizeof(h), 1, in);

    unsigned block_contents_len = h.block_length_high;
    block_contents_len << CHAR_BIT;

    block_contents_len += h.block_length_low;

    Block* result = malloc(sizeof(block_header) + block_contents_len);
    result.header = h;
    fread(&result.contents, block_contents_len, 1, in);
    
    return result;
    }


void freeBlock(Block* rv)
{
    free(rv);

}


