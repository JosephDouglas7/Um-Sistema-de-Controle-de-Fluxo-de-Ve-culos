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
    }
    return 1;
}


//validar pagamento de aluguel de veículo

float validar_aluguel(float *aluguel_V){
 if (aluguel_V < 0) {
        printf("Valor de pagamento inválido. Deve ser um número positivo.\n");
    } else {
        printf("Valor de pagamento válido.\n");
    }

    return 0;
}


//validar entrada de veículos

float validar_entrada_V(float *entrada_V){ 
float hora;     
if (hora < 12 || hora > 19) {
    printf("Horário inválido. Deve estar entre 12h e 19h.\n");
    } else {
        printf("Entrada de veiculo válida.\n");
    }
    return 0;
}  


//validar saída de veículos 

float validar_saida_V(float *saida_V){ 
float hora; 
    
if (hora < 7 || hora > 22) {
        printf("Hora de saída inválida. Deve estar entre 07:00 e 22:00.\n");
    } else {
        printf("Saída de veiculo válida.\n");
    }
    return 0;
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
