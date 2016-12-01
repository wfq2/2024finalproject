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