//Feito com a ajuda: https://copilot.microsoft.com/


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include"validar.h"


//Validar número do motorista 

int validar_celular(char *celular) {
    int len = strlen(celular);
    if(len != 11) {
        return 0;
    }
    for(int i = 0; i < len; i++) {
        if(celular[i] < '0' || celular[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int validar1() {
    char celular[12];
    printf("Digite o número do celular: ");
    scanf("%s", celular);
    if(validar_celular(celular)) {
        printf("Celular válido.\n");
    } else {
        printf("Celular inválido.\n");
    }
    return 0;
}


//Validar CPF 

int valida_cpf(char* cpf) {
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

int validar2() {
    char cpf[12];
    printf("Digite o CPF: ");
    scanf("%s", cpf);

    if(valida_cpf(cpf)) {
        printf("CPF válido.\n");
    } else {
        printf("CPF inválido.\n");
    }

    return 0;
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

int validar3() {
    char nome[50];
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // remove newline character
    if(validar_nome(nome)) {
        printf("Nome válido.\n");
    } else {
        printf("Nome inválido.\n");
    }
    return 0;
}


//Validar placa de veículo 

int valida_placa(char *placa) {
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

int validar4() {
    char placa[9];
    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);
    if (valida_placa(placa)) {
        printf("Placa válida!\n");
    } else {
        printf("Placa inválida!\n");
    }
    return 0;
} 


//Feito com ajuda: https://copilot.microsoft.com/
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
if (hora < 7 || hora > 19) {
     //printf("Hora de entrada inválida. Deve estar entre 07:00 
//e 19:00.\n");
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
