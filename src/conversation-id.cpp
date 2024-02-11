#include "conversation-id.hpp"

#include <cstring>

#include <stdexcept>

#include "block-reader.hpp"

#include <climits>

std::ostream& operator<<(std::ostream& out, IP_address const& rv)
 {
     for (int i=0; i<4; ++i) {
         if (i !=0) {
             out << "."; }
         out << (int) rv.addr[i];
         }
         return out;
}



bool hasNeededType(Block* block) {
    Ethernet_header h = block->contents.header;

        unsigned packet_type = h.packet_type_high;
        packet_type <<= CHAR_BIT;
        packet_type |= h.packet_type_low;

        return packet_type == 0x0800;
}

Conv_ID extractConv_ID(Block* block)
{
    IPv4_header header = block->contents.contents.header;

    Conv_ID result = std::make_pair(header.sender, header.receiver);
    if (0 < memcmp(&result.first, &result.second, sizeof(IP_address))) {
            std::swap(result.first, result.second);
            }

            return result;

}


