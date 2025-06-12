#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>
using namespace std;

class Instruction {

    public:
    string opcode;
    int rs1, rs2, rd, imm;

    Instruction(string Opcode, int Rs1, int Rs2, int Rd, int Imm);

};
#endif
