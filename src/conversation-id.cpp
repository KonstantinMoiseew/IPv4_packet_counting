#include "conversation-id.hpp"
#include <cstring>
#include <stdexcept>
#include "block-reader.h"


Conv_ID readnexPhrase(FILE* in)
{
    Block* block = readBlock(in);
    if (block == NULL) 
    { 
        throw std::runtime_error("unexpected end-of-file");
    }
    IPv4_header header = block->contents.contents.header;
    freeBlock(block);
    Conv_ID result = std::make_pair(header.sender, header.reciever);
    if (0 < memcmp(&result.first, &result.second) {
            std::swap(result.first, result.second);
            }

            return result;

}


