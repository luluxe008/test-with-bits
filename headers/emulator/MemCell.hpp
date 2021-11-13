#pragma once

typedef unsigned int    bit32_t;
typedef unsigned char   bit8_t;
typedef unsigned char   instruction_t; //5 bits
typedef bool            bit_t;

class MemCell{
private:
    bit32 cell;
public:
    MemCell(bit32);
    bit_t operator[](char n_bit);
    bit8_t n_octet(char n);
    instruction_t instruction(); // 5 bits
    
};
