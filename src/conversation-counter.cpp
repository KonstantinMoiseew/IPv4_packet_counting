#include "conversation-counter.hpp"

#include <cstdio>

#include "block-reader.hpp"

std::unordered_map<Conv_ID, int> processFile(std::string filename)
 {
    FILE* in = fopen(filename.c_str(), "r");
    std::unordered_map<Conv_ID, int> result;
    Block* current;
    while(NULL != (current = readBlock(in))) {
       if (hasNeededType(current)) {
        Conv_ID id = extractConv_ID(current);
        if (0 == result.count(id))
        {
            result.insert({id, 1});

    }
        else {
            result.at(id) += 1;
        }
     }
        freeBlock(current);

    }
    fclose(in);
    return result;

 }
