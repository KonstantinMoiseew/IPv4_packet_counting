#ifndef CONVERSATION_COUNTER_HPP_INCLUDED
#define CONVERSATION_COUNTER_HPP_INCLUDED

#include <string>

#include <unordered_map>

#include "conversation-id.hpp"

std::unordered_map<Conv_ID, int> processFile(std::string filename);



#endif //CONVERSATION_COUNTER_HPP_INCLUDED 
