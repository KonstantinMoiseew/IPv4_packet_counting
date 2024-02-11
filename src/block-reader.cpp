#include "block-reader.hpp"

#include <cstdlib>

#include <climits>

Block* readBlock(FILE* in)
{
    Block_header h;
    fread(&h, sizeof(h), 1, in);
    if(feof(in)) {
            return NULL;
            }

    unsigned block_contents_len = h.block_length_high;

    block_contents_len <<= CHAR_BIT;

    block_contents_len |= h.block_length_low;

    Block* result = (Block*)malloc(sizeof(Block_header) + block_contents_len);
    result->header = h;
    if(1 != fread(&result->contents, block_contents_len, 1, in))  {
        free(result);
        return NULL;
    } 
    return result;
}


void freeBlock(Block* rv)
{
    free(rv);

}


