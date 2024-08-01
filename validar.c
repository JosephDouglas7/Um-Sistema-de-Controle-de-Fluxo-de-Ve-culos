//Feito com ajuda: https://copilot.microsoft.com/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include"validar.h"


//Validar número do motorista 

int validar_celular(char *celular) {
    int len = strlen(celular);
    if(len != 9) {
        return 0;
    }
    for(int i = 0; i < len; i++) {
        if(celular[i] < '0' || celular[i] > '9') {
            return 0;
        }
    }
    return 1;
}


//Validar CPF 

int validar_cpf(char* cpf) {
    int i, j, digito1 = 0, digito2 = 0;

    if(strlen(cpf) != 11)
        return 0;

    for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--)
        digito1 += (cpf[i]-48) * j;

    digito1 %= 11;
    if(digito1 < 2)
        digito1 = 0;
    else
        digito1 = 11 - digito1;

    if((cpf[9]-48) != digito1)
        return 0;

    for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--)
        digito2 += (cpf[i]-48) * j;

    digito2 %= 11;
    if(digito2 < 2)
        digito2 = 0;
    else
        digito2 = 11 - digito2;

    if((cpf[10]-48) != digito2)
        return 0;

    return 1;
}


//Validar nome 

int validar_nome(char *nome) {
    int len = strlen(nome);
    for(int i = 0; i < len; i++) {
        if(!isalpha(nome[i]) && nome[i] != ' ') {
            return 0;
        }
    }
    return 1;
}


//Validar placa de veículo 

int validar_placa(char *placa) {
    int i;
    for (i = 0; i < 3; i++) {
        if (!isalpha(placa[i])) {
            return 0;
        }
    }
    if (placa[3] != '-') {
        return 0;
    }
    for (i = 4; i < 8; i++) {
        if (!isdigit(placa[i])) {
            return 0;
        }    
        while(buscar_entrada_saida(placa)!= NULL){ 
           printf("Placa já registrada");     
           scanf("%s",placa);
        }
    }
    return 1;
}


//validar pagamento de aluguel de veículo

int validar_aluguel(int *i){
 if (i < 0) {
    printf("Valor de pagamento inválido. Deve ser um número positivo.\n");
    } else {
        printf("Valor de pagamento válido.\n");
    }
}


//validar entrada de veículos

int validar_entrada_V(char *hora1){ 
    int i;
    if (strlen(hora1) != 5) {
        return 0; // Comprimento incorreto
    }
    else if (!isalpha(hora1[0]) || !isalpha(hora1[1])) {
        return 1; // Os dois primeiros caracteres devem ser letras
    }
    else if (hora1[2] != ':') {
        return 1; // O terceiro caractere deve ser dois pontos
    }
    for (i = 3; i < 5; i++) {
        if (!isdigit(hora1[i])) {
            return 1; // Os caracteres restantes devem ser dígitos
        }
    }
    return 1; // Data válida
}  


//validar saída de veículos 

int validar_saida_V(char *hora) {
    int i;
    if (strlen(hora) != 5) {
        return 0; // Comprimento incorreto
    }
    else if (!isalpha(hora[0]) || !isalpha(hora[1])) {
        return 1; // Os dois primeiros caracteres devem ser letras
    }
    else if (hora[2] != ':') {
        return 1; // O terceiro caractere deve ser dois pontos
    }
    for (i = 3; i < 5; i++) {
        if (!isdigit(hora[i])) {
            return 1; // Os caracteres restantes devem ser dígitos
        }
    }
    return 1; // Data válida
}


//Validar ano 

int validar_ano(char *ano_V){
    for (int i = 0; ano_V[i] != '\0'; i++) {
        if (ano_V[i] != '/' && !isdigit(ano_V[i])) {
            return 0; // Não é numérico
        }
    }
    return 1; // É numérico
}
