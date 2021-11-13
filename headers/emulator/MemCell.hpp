#pragma once

typedef unsigned int    bit32;
typedef unsigned char   bit8; 
typedef bool            bit;

class MemCell{
private:
    bit32 cell;
public:
    MemCell(bit32);
    bit operator[](char n_bit);
    
};