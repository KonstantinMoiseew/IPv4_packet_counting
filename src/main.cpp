#include <iostream>

#include <cstdio>

#include "conversation-counter.hpp"


int main() {

    std::string filename = "res/IPConv.pkc";
    auto conversation = processFile(filename);

    
    return 0;
}
