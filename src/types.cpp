#include "types.h"

bool operator==(IP_address const& ip_a, IP_address const& ip_b)
{
    for (int i = 0; i < 4; ++i) {
       if (ip_a.addr[i] != ip_b.addr[i]) {
          return false;
       }
    }
   return true;
} 
