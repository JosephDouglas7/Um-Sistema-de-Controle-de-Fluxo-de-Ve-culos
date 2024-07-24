#include <stdio.h>  
#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <unistd.h> 
#include "cliente.h"
#include "validar.h"


typedef struct cliente Cliente; 


void cadastrar_cliente(void){ 
    Cliente* cliente; 
    cliente = preencher_cliente();
    gravar_cliente(cliente); 
    free(cliente);
}  


void pesquisar_cliente(void){ 
   Cliente* carro;
   char* cpf;  
   cpf = tela_pesquisar_cliente();
   carro = buscar_cliente(cpf);
   exibir_cliente(carro);
   free(carro); 
   free(cpf);
}  


void alterar_cliente(void){  
   Cliente* cliente;
   char* cpf;
   cpf = tela_alterar_cliente();
   cliente = buscar_cliente(cpf);
   if (cliente == NULL) {
       printf("\n\nAluno não encontrado!\n\n");
     } else {
       cliente = preencher_cliente();
       regravar_cliente(cliente);
       free(cliente); 
  }
  free(cpf);
}  


 void excluir_cliente(void){  
    Cliente* cpf;
    char * cliente;
    cliente = tela_excluir_cliente();
    cpf = (Cliente*) malloc(sizeof(Cliente));
    cpf = buscar_cliente(cliente);
    if (cpf == NULL) {
        printf("\n\nAluno não encontrado!\n\n");
      } else {
        cpf->status = 0;
        regravar_cliente(cpf);
        free(cpf);
 } 
  free(cliente);
} 


void modulo_cadastrar_cliente(void){  
  char op;   

  do{
     op = tela_cadastrar_cliente();
    switch(op){ 
      case  '1' : cadastrar_cliente(); 
                  break;  
      case  '2' : pesquisar_cliente();
                  break;
      case  '3' : alterar_cliente(); 
                  break;  
      case  '4' : excluir_cliente(); 
                  break;   
    }
  } while (op != '5'); 
}    


char tela_cadastrar_cliente(void){ 
  char op; 
  system("clear||cls");
  printf("\n");   
 printf("\n###################################\n"); 
 printf("\n# = =  tela cadastrar cliente = = #\n"); 
 printf("\n# 1.cadastrar cliente             #\n"); 
 printf("\n# 2.Pesquisar cliente             #\n");
 printf("\n# 3.alterar cliente               #\n"); 
 printf("\n# 4.excluir cliente               #\n"); 
 printf("\n# 5.Retornar ao menu principal    #\n"); 
 printf("\n###################################\n"); 
 printf("\nQual sua opcao?:"); 
 scanf("%c",&op);  
 getchar();  
 return op;
}


Cliente* preencher_cliente(void){   
   Cliente *cliente;
   cliente = (Cliente*) malloc(sizeof(Cliente));
   system("clear||cls");
   printf("\n");  
   ler_nome(cliente->nome); 
   ler_celular(cliente->celular); 
   ler_cpf(cliente->cpf); 
   cliente->status = 1;
   getchar(); 
   sleep(1);
   return cliente;
} 


void ler_nome(char* nome){ 
  printf("\nDigite o nome do cliente:");
  scanf("%s", nome);
  while (!validar_nome(nome)) {
   printf("Nome do cliente inválido!\n");
   printf("\nDigite o nome do cliente:");
   scanf("%s", nome); 
 }
}  


void ler_celular(char* celular){ 
  printf("\nDigite o telefone do cliente:");
  scanf("%s", celular);
  while (!validar_celular(celular)) {
     printf("Telefone do cliente inválido!\n");
     printf("\nDigite o telefone do cliente:");
     scanf("%s", celular); 
   }
} 


void ler_cpf1(char* cpf){ 
  printf("\nDigite o CPF do cliente (apenas números):");
  scanf("%s", cpf); 
  while (!validar_cpf(cpf)) {
   printf("CPF do cliente inválido!\n");
   printf("Digite o CPF do cliente:");
   scanf("%s", cpf);  
 }
}  


char* tela_pesquisar_cliente(void){  
     char* vco;
     vco = (char*) malloc(9*sizeof(char));
     system("clear||cls");
     printf("\n"); 
     printf("\n- - - Pesquisar cliente - - -\n");
     printf("\nPesquisar CPF:");  
     scanf(" %11[^\n]",vco);
     getchar(); 
     sleep(1);  
     return vco;
}  


char* tela_alterar_cliente(void){  
    char* vco;
    vco = (char*) malloc(12*sizeof(char)); 
    system("clear||cls");
    printf("\n");
    printf("\n- - - Alterar cliente - - -\n");       
    printf("\nAlterar CPF:"); 
    scanf(" %11[^\n]",vco);
    getchar(); 
    sleep(1);
    return vco;
} 


char* tela_excluir_cliente(void){  
    char *vco;
    vco = (char*) malloc(12*sizeof(char)); 
    system("clear||cls");
    printf("\n");
    printf("\n- - - Excluir cliente - - -\n"); 
    printf("\nExcluir CPF:");  
    scanf(" %12[^\n]",vco);
    getchar(); 
    return vco;
}  


void erro_arquivo_cliente(void){ 
   printf("Ops! Ocorreu um erro no arquivo!\n");

} 


void gravar_cliente(Cliente* vco1){  
    FILE* fp;
    fp = fopen("cliente.dat", "ab");
    if (fp == NULL) {
      erro_arquivo_cliente();
    }
    fwrite(vco1, sizeof(Cliente), 1, fp);
    fclose(fp);
} 


Cliente* buscar_cliente(char* placa) { 
  FILE* fp;
  Cliente* vco1;
  vco1 = (Cliente*) malloc(sizeof(Cliente));
  fp = fopen("cliente.dat", "rb");
  if (fp == NULL) {
    erro_arquivo_cliente();
  }
  while(fread(vco1, sizeof(Cliente), 1, fp)) {
    if ((strcmp(vco1->cpf,placa) == 0) && (vco1->status == 1)) {
      fclose(fp);
      return vco1;
    }
  }
  fclose(fp);
  return NULL;
} 


void exibir_cliente(Cliente* cliente) {  
    //for (cliente = carro; cliente != NULL; cliente = cliente->prox)
    //{
        //printf("%d-> ", cliente->cliente);
   // }
   // printf("\n");
//}
  if (cliente == NULL) {
    printf("\n= = = Cliente Inexistente = = =\n");
  } else {
    printf("\n= = = Cliente Cadastrado = = =\n");
    printf("Nome: %s\n", cliente->nome);
    printf("Celular: %s\n", cliente->celular);
    printf("CPF: %s\n", cliente->cpf);  
    printf("Status: %d\n",cliente->status);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}  


 void regravar_cliente(Cliente* vco1) {  
  int achou;
  FILE* fp;
  Cliente* vco1_Lido;
  vco1_Lido = (Cliente*) malloc(sizeof(Cliente));
  fp = fopen("cliente.dat", "r+b");
  if (fp == NULL) {
    erro_arquivo_cliente();
  }
  achou = 0;
  while(fread(vco1_Lido, sizeof(Cliente), 1, fp) && !achou) {
    fread(vco1_Lido, sizeof(Cliente), 1, fp);
    if (strcmp(vco1_Lido->cpf, vco1->cpf) == 0) {
      achou = 1;
      fseek(fp, -1*sizeof(Cliente), SEEK_CUR);
          fwrite(vco1, sizeof(Cliente), 1, fp);
      break;
    }
  }
  fclose(fp);
  free(vco1_Lido);
} 

