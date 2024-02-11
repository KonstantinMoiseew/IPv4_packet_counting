The file given has the structure, consisting of adjacent blocks with the following structure:

    -------------------------------------------------------------------------------------------------------------------------------------------|
                Block header             |                                      Content of block                                               |
            byte 0: 0x5b;                |-----------------------------------------------------------------------------------------------------|
            byte 1: 0x5d;                |  Ethernet header             |                           Content of Ethernet frame                  |
            byte 2: low block length;    |  bytes 0-5: any;             |----------------------------------------------------------------------|
            byte 3: high block length;   |  bytes 6-11: any;            |  IPv4 header                       |        Content of IPv4 packet   |
            byte 4: 0x0d;                |  byte 12: high packet type;  |  bytes 0-11: any;                  |---------------------------------|
            byte 5: 0x0a;                |  byte 13: low packet type;   |  bytes 12-15: sender IP address;   |                                 |
                                         |                              |  bytes 16-19: receiver IP address; |         The rest of bytes       |
                                         |                              |                                    |                                 |
     -------------------------------------------------------------------------------------------------------------------------------------------

    If the type of Ethernet frame is not 0x080, drop it. If it is, continue to investigate it. The "Conversation" is considered to be the set of all IP packets that sourse IP addresses are the same and the receiver IP addresses are the same and vice versa.

    Count all conversations in the file given.


    My answer:
    169.254.222.225 - 224.0.0.252 : 11
169.254.222.225 - 169.254.255.255 : 23
169.254.222.225 - 169.254.223.125 : 156
169.254.222.225 - 239.255.255.250 : 8
169.254.223.125 - 239.255.255.250 : 5
169.254.223.125 - 169.254.255.255 : 4
