#ifndef CONVERSATION_ID_HPP_INCLUDED
#define CONVERSATION_ID_HPP_INCLUDED

#include <cstdio>

#include <utility>

#include "types.h"

typedef std::pair<IP_address, IP_address> Conv_ID;
Conv_ID extractConv_ID(Block* block);

bool hasNeededType(Block* block);

#endif //CONVERSATION_ID_HPP_INCLUDED



