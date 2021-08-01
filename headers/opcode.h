#include <stdio.h>
#include <stdint.h>


struct opcodeHigh {

	unsigned int a : 4;
	unsigned int b : 4;
};

struct opcodeLow {

	unsigned int c : 4;
	unsigned int d : 4;
};

union opcodeHigh_U {

	struct opcodeHigh opHigh;
	uint8_t opHighByte;
};

union opcodeLow_U {

	struct opcodeLow opLow;
	uint8_t opLowByte;
};


//unsigned short opcode;
uint16_t opcode;



void test();