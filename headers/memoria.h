#ifndef MEMORIA_H
#define MEMORIA_H

//Funções
short determinarEndereco(opc opcode, char inputDir[]);
void carregarMemoria(unsigned char* memoria, FILE* fdEntrada);
void converterNumeros(unsigned char* memoria, FILE* fdEntrada);
opc converterInstrucao(char instrucaoEsq[], char instrucaoDir[], short* endereco);
void escreveInstrucao(unsigned char opcode, short endereco, bool isLeft, bool isExit, unsigned char* memoria);

//Verificar opcode
opc verificaLoad(char instrucaoDir[]);
opc verificaJump(char instrucaoDir[]);
opc verificaJumpP(char instrucaoDir[]);
opc verificaAdd(char instrucaoDir[]);
opc verificaSub(char instrucaoDir[]);
opc verificaStor(char instrucaoDir[]);
opc verificaLoadMenos(char inputDir[]);
short verificaEndereco(char instrucaoDir[], bool isLeftRight);

void escreverArquivo(unsigned char* memoria, FILE* fdSaida);
void preencherZero(unsigned char* memoria);

void transferirRR(Registrador reg1, Registrador reg2);
void transferirMR(Memoria m, unsigned long long int PosicaoMemoria);
unsigned long long int converteEndereco(Endereco * ender);

#endif