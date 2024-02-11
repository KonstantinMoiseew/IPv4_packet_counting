#include <iostream>

#include <cstdio>

#include "conversation-counter.hpp"


int main() {

    std::string filename = "res/IPConv.pkc";
    auto conversations = processFile(filename);
    for (auto& conv : conversations) {
        std::cout << conv.first.first << " - " << conv.first.second << " : " << conv.second << "\n";
    }
    
    return 0;
}
