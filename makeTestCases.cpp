//
// Created by Wyatt Queirolo on 11/30/16.
//
#include <stdio.h>
#include <stdlib.h>
#include "makeTestCases.h"

#define minimm -32768
#define maximm 32767
#define bigmax 65535


std::string LUI(std::string reg1){
    std::string imm = std::to_string(rand() % bigmax + 1);
    return "LUI " + reg1 + ", " + imm + "\n";
}

std::string SLL(std::string reg1,std::string reg2){
    std::string imm = std::to_string(rand() % 31 + 1);
    return "SLL " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string SRL(std::string reg1,std::string reg2){
    std::string imm = std::to_string(rand() % 31 + 1);
    return "SRL " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string SRA(std::string reg1,std::string reg2){
    std::string imm = std::to_string(rand() % 31 + 1);
    return "SRA " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string SW(std::string reg1){
    std::string offset = std::to_string((rand() % 10 + 1) * 4);
    return "SW " + reg1 + ", " + offset + "($0)\n";
}
std::string LW(std::string reg1){
    std::string offset = std::to_string((rand() % 10 + 1) *4);
    return "LW " + reg1 + ", " + offset + "($0)\n";
}

std::string LB(std::string reg1){
    std::string offset = std::to_string(rand() % 40 + 1);
    return "LB " + reg1 + ", " + offset + "($0)\n";
}
std::string LBU(std::string reg1){
    std::string offset = std::to_string(rand() % 40 + 1);
    return "LBU " + reg1 + ", " + offset + "($0)\n";
}

std::string SB(std::string reg1){
    std::string offset = std::to_string(rand() % 40 + 1);
    return "SB " + reg1 + ", " + offset + "($0)\n";
}

std::string ADDIU(std::string reg1,std::string reg2){
    std::string imm = std::to_string(rand() % 31 + 1);
    return "ADDIU " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string ADDU(std::string reg1,std::string reg2, std::string reg3){
    return "ADDU " + reg1 + ", " + reg2 + ", " + reg3 + "\n";
}

std::string SUBU(std::string reg1,std::string reg2, std::string reg3){
    return "SUBU " + reg1 + ", " + reg2 + ", " + reg3 + "\n";
}

std::string SLTI(std::string reg1,std::string reg2){
    std::string imm = std::to_string((rand() % maximm) - minimm);
    return "SLTI " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string SLTIU(std::string reg1,std::string reg2){
    std::string imm = std::to_string((rand() % maximm) - minimm);
    return "SLTIU " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string ANDI(std::string reg1,std::string reg2){
    std::string imm = std::to_string(rand() % bigmax + 1);
    return "ANDI " + reg1 + ", " + reg2 + ", " + imm + "\n";
}
std::string ORI(std::string reg1,std::string reg2){
    std::string imm = std::to_string(rand() % bigmax + 1);
    return "ORI " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string XORI(std::string reg1,std::string reg2){
    std::string imm = std::to_string(rand() % bigmax + 1);
    return "XORI " + reg1 + ", " + reg2 + ", " + imm + "\n";
}

std::string AND(std::string reg1,std::string reg2, std::string reg3){
    return "AND " + reg1 + ", " + reg2 + ", " + reg3 + "\n";
}
std::string OR(std::string reg1,std::string reg2, std::string reg3){
    return "OR " + reg1 + ", " + reg2 + ", " + reg3 + "\n";
}
std::string XOR(std::string reg1,std::string reg2, std::string reg3){
    return "XOR " + reg1 + ", " + reg2 + ", " + reg3 + "\n";
}
std::string NOR(std::string reg1,std::string reg2, std::string reg3){
    return "NOR " + reg1 + ", " + reg2 + ", " + reg3 + "\n";
}