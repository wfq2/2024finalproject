#include <iostream>
#include "makeTestCases.h"

int main(int argc, char *argv[]) {
    int numcases = atoi(argv[1]);
    int memcases = atoi(argv[2]);
    int forwardlevel = atoi(argv[3]);
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
    std::cout<<acc;
    return 0;
}