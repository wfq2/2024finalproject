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

std::string makecases(int numcases, int memcases, int forwardlevel){
    int mod;
    int registers;
    if (memcases){
        mod = 21;
    }
    else{
        mod=16;
    }
    if (forwardlevel == 1){
        registers = 5;
    }
    else if (forwardlevel == 2){
        registers = 15;
    }
    else{
        registers = 28;
    }
    //std::cout << numcases <<std::endl;
    std::string acc = "";
    for (int i=0;i<numcases;i++) {
        std::string reg1 = std::to_string(rand() % registers);
        std::string reg2 = std::to_string(rand() % registers);
        std::string reg3 = std::to_string(rand() % registers);
        int num = rand() % mod;
        //std::cout << num <<std::endl;
        switch (num) {
            case 0:
                acc += LUI(reg1);
                break;
            case 1:
                acc += SLL(reg1, reg2);
                break;
            case 2:
                acc += SRL(reg1, reg2);
                break;
            case 3:
                acc += SRA(reg1, reg2);
                break;
            case 4:
                acc += NOR(reg1, reg2, reg3);
                break;
            case 5:
                acc += XOR(reg1, reg2, reg3);
                break;
            case 6:
                acc += OR(reg1, reg2, reg3);
                break;
            case 7:
                acc += AND(reg1, reg2, reg3);
                break;
            case 8:
                acc += SUBU(reg1, reg2, reg3);
                break;
            case 9:
                acc += ANDI(reg1, reg2);
                break;
            case 10:
                acc += ORI(reg1, reg2);
                break;
            case 11:
                acc += XORI(reg1, reg2);
                break;
            case 12:
                acc += ADDIU(reg1, reg2);
                break;
            case 13:
                acc += SLTI(reg1, reg2);
                break;
            case 14:
                acc += SLTIU(reg1, reg2);
                break;
            case 15:
                acc += ADDU(reg1, reg2, reg3);
                break;
            case 16:
                acc += LW(reg1);
                break;
            case 17:
                acc += SW(reg1);
                break;
            case 18:
                acc += LB(reg1);
                break;
            case 19:
                acc += SB(reg1);
                break;
            case 20:
                acc += LBU(reg1);
                break;
            default:
                break;
        }
    }
    //std::cout<<acc;
    return acc;
}