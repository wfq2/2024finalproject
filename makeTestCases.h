//
// Created by Wyatt Queirolo on 11/30/16.
//
#include <string>

#ifndef MIPSTESTCASES_MAKETESTCASES_H
#define MIPSTESTCASES_MAKETESTCASES_H

/*test cases supported
instructionset = ["SLT","SLTU","LUI","MOVN","MOVZ","SLT","SLTU","SLL","SRL","SRA","SLLV",
"SRLV","SRAV","LUI","ADDIU","ANDI","ORI","XORI","SLTI","SLTIU","ADDU","SUBU","AND","OR",
"XOR","NOR","LW", "LB", "LBU", "SW", "SB"]

 All functions take in register numbers as chars and return strings of the instruction

 */

std::string LUI(std::string reg1);
std::string SLL(std::string reg1,std::string reg2);
std::string SRL(std::string reg1,std::string reg2);
std::string SRA(std::string reg1,std::string reg2);
std::string SW(std::string reg1);
std::string LW(std::string reg1);
std::string LB(std::string reg1);
std::string LBU(std::string reg1);
std::string SB(std::string reg1);
std::string ANDI(std::string reg1,std::string reg2);
std::string ORI(std::string reg1,std::string reg2);
std::string XORI(std::string reg1,std::string reg2);
std::string ADDIU(std::string reg1,std::string reg2);
std::string SLTI(std::string reg1,std::string reg2);
std::string SLTIU(std::string reg1,std::string reg2);
std::string ADDU(std::string reg1,std::string reg2, std::string reg3);
std::string SUBU(std::string reg1,std::string reg2, std::string reg3);
std::string AND(std::string reg1,std::string reg2, std::string reg3);
std::string OR(std::string reg1,std::string reg2, std::string reg3);
std::string XOR(std::string reg1,std::string reg2, std::string reg3);
std::string NOR(std::string reg1,std::string reg2, std::string reg3);



#endif //MIPSTESTCASES_MAKETESTCASES_H



