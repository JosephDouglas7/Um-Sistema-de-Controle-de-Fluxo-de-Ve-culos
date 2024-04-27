#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para usar a função isdigit

// Função para validar o CPF
int validaCPF(const char *cpf) {
    // Verifica se o CPF tem exatamente 11 caracteres
    if (strlen(cpf) != 11) {
        return 0; // CPF inválido
    }

    // Verifica se todos os caracteres são dígitos
    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0; // CPF inválido
        }
    }

    // Verifica os dígitos verificadores
    int soma1 = 0, soma2 = 0;
    for (int i = 0; i < 9; i++) {
        soma1 += (cpf[i] - '0') * (10 - i);
        soma2 += (cpf[i] - '0') * (11 - i);
    }

    int digito1 = (soma1 * 10) % 11;
    int digito2 = (soma2 * 10) % 11;

    if (digito1 == 10) digito1 = 0;
    if (digito2 == 10) digito2 = 0;

    if (digito1 == cpf[9] - '0' && digito2 == cpf[10] - '0') {
        return 1; // CPF válido
    } else {
        return 0; // CPF inválido
    }
}

int main() {
    char cpf[12]; // Tamanho máximo do CPF (11 dígitos + '\0')

    printf("Digite o CPF (11 dígitos): ");
    scanf("%11s", cpf);

    if (validaCPF(cpf)) {
        printf("CPF válido: %s\n", cpf);
    } else {
        printf("CPF inválido. Digite um CPF válido com 11 dígitos.\n");
    }

    return 0;
}
