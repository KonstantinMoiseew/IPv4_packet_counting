#ifdef CONVERSATION_ID_HPP_INCLUDED
#define CONVERSATION_ID_HPP_INCLUDED

#include <utility>
#include "types.h"

typedef std::pair<IP_address, IP_address> Conv_ID;
Conv_ID readnextPhrase(FILE* in);

#endif //CONVERSATION_IC_HPP_INCLUDED
