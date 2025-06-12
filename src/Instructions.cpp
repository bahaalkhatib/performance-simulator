#include "../include/Instruction.h"
#include <iostream>

Instruction::Instruction(string Opcode, int Rs1, int Rs2, int Rd, int Imm)
    : opcode(Opcode), rs1(Rs1), rs2(Rs2), rd(Rd), imm(Imm) {}

