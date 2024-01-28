#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

typedef unsigned char byte;

typedef struct {
    byte addr[4];
} IP_address;

typedef struct {
    byte _placeholder_1[12];
    IP_address sender;
    IP_address receiver;
    //other bytes skipped
    //byte contents[];
} IPv4_header;

typedef struct {
    byte _placeholder_1[16];
    byte _placeholder_2[6];
    byte packet_type_high;
    byte packet_type_low;

    IPv4_header contents;
} Ethernet_header;

typedef struct {
    byte _0; //0x5b
    byte _1; //0x5d
    byte block_length_low;
    byte block_length_high;
    byte _4; //0x0d
    byte _5; //0x0a
             
    Ethernet_header contents;
} Block_header;

#endif //TYPES_H_INCLUDED
