#include "conversation_id.hpp"
#include <cstring>
#include "Block-reader.h"

Conv_ID readnexPhrase(FILE* in)
{
    Block* block = readBlock(in);
    IPv4_header header = block->contents->contents->header;
    freeBlock(block);
    Conv_ID result = std::make_pair(header.sender, header.reciever);
    if (0 < memcpy(&result.first, &result.second) {
            std::swap(result.first, result.second);
            }


