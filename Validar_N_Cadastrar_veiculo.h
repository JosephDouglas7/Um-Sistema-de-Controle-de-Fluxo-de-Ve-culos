//Feito com a ajuda do chat copiloto

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para usar a função isalpha
#include<string.h>
// Função para validar o nome
int validaNome(const char *nome) {
    // Verifica se o nome é nulo ou vazio
    if (nome == NULL || nome[0] == '\0') {
        return 0; // Nome inválido
    }

    // Percorre cada caractere do nome
    for (int i = 0; nome[i] != '\0'; i++) {
        // Verifica se o caractere é uma letra ou espaço
        if (!isalpha(nome[i]) && nome[i] != ' ') {
            return 0; // Nome inválido
        }
    }

    return 1; // Nome válido
}

int main() {
    char nome[100]; // Tamanho máximo do nome

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o caractere de nova linha (\n) do final do nome
    if (nome[strlen(nome) - 1] == '\n') {
        nome[strlen(nome) - 1] = '\0';
    }

    if (validaNome(nome)) {
        printf("Nome válido: %s\n", nome);
    } else {
        printf("Nome inválido. O nome deve conter apenas letras e espaços.\n");
    }

    return 0;
}
