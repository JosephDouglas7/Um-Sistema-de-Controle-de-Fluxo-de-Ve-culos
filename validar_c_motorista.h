//Feito com a ajuda do chat copiloto 


 #include <stdio.h>
 #include <string.h>
 #include <ctype.h> // Para usar a função isdigit

 // Função para validar o número de celular
 int validaCelular(const char *numero) {
     // Verifica se o número é nulo ou vazio
     if (numero == NULL || numero[0] == '\0') {
         return 0; // Número inválido
     }

     // Verifica se o número tem exatamente 9 dígitos
     if (strlen(numero) != 9) {
         return 0; // Número inválido
     }

     // Verifica se todos os caracteres são dígitos
     for (int i = 0; numero[i] != '\0'; i++) {
         if (!isdigit(numero[i])) {
             return 0; // Número inválido
         }
     }

     // Verifica se o primeiro dígito é 9
     if (numero[0] != '9') {
         return 0; // Número inválido
     }

     return 1; // Número válido
 }

 int main() {
     char numero[10]; // Tamanho máximo do número de celular (9 dígitos + '\0')

     printf("Digite o número de celular (9 dígitos): ");
     scanf("%9s", numero);

     if (validaCelular(numero)) {
         printf("Número de celular válido: %s\n", numero);
     } else {
         printf("Número de celular inválido. Deve ter 9 dígitos e começar com 9.\n");
     }

     return 0;
 }

