#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

typedef unsigned char byte;

typedef struct {
    byte addr[4];
} IP_address;

bool operator==(IP_address const& ip_a, IP_address const& ip_b);

typedef struct {
    byte _placeholder_1[12];
    IP_address sender;
    IP_address receiver;
} IPv4_header;

typedef struct {
    IPv4_header header;
    byte contents[];
} IPv4_packet;


typedef struct {
    byte _placeholder_1[6];
    byte _placeholder_2[6];
    byte packet_type_high;
    byte packet_type_low;
} Ethernet_header;

typedef struct {
    Ethernet_header header;
    IPv4_packet contents;
} Ethernet_packet;


typedef struct {
    byte _0; //0x5b
    byte _1; //0x5d
    byte block_length_low;
    byte block_length_high;
    byte _4; //0x0d
    byte _5; //0x0a
} Block_header;

typedef struct {
    Block_header header;
    Ethernet_packet contents;
} Block;

#endif //TYPES_H_INCLUDED
