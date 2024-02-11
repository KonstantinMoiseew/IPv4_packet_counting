#include <iostream>

#include <cstdio>

#include "block-reader.hpp"

#include "types.h"

#include "conversation-id.hpp"

std::ostream& operator<<(std::ostream& out, IP_address const& rv)
 { 
     for (int i=0; i<4; ++i) {
         if (i !=0) {
             out << "."; }
         out << (int) rv.addr[i];
         }
         return out;
}

int main() {

    std::string filename = "res/IPConv.pkc";

    FILE* in = fopen(filename.c_str(), "r");
    Block* b = readBlock(in);
    if (hasNeededType(b)) {
        Conv_ID id = extractConv_ID(b);
        std::cout << id.first << "  " << id.second << "\n";

    }

    freeBlock(b);

    fclose(in);
    
    return 0;
}
