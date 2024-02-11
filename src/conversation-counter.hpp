#ifndef CONVERSATION_COUNTER_HPP_INCLUDED
#define CONVERSATION_COUNTER_HPP_INCLUDED

#include <string>

#include <unordered_map>

#include <boost/functional/hash.hpp>

#include "conversation-id.hpp"

//using boost::hash_combine

template <class T>
inline void hash_combine(std::size_t& seed, T const& v)
{
    seed ^= std::hash<T>()(v) +0x9e3779b9 + (seed << 6) + (seed >> 2);
}

namespace std {
    template<>
        struct hash<Conv_ID> {
            std::size_t operator()(Conv_ID const& in) const
            {
                size_t seed = 0;
                for (int i = 0; i < 4; ++i) {
                    hash_combine(seed, in.first.addr[i]);
                }
                for (int i = 0; i < 4; ++i) {
                    hash_combine(seed, in.second.addr[i]);
                }
                return seed;
            }
        };
}


typedef std::unordered_map<Conv_ID, int> map_type; 

map_type processFile(std::string filename);



#endif //CONVERSATION_COUNTER_HPP_INCLUDED 
