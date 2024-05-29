#include <stdio.h>  
#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <unistd.h> 
#include "cliente.h"
#include "validar.h"


typedef struct cliente Cliente; 


void cadastrar_cliente(void){ 
    Cliente* vco1; 


    vco1 = preencher_cliente();
    gravar_cliente(vco1); 
    free(vco1);

}  


void pesquisar_cliente(void){ 
   Cliente* carro;
   char* placa;

   placa = tela_pesquisar_cliente();
   carro = buscar_cliente(placa);
   exibir_cliente(carro);
   free(carro); 
   free(placa);

}  


void alterar_cliente(void){  
  void regravar_cliente(Cliente* vco1);
   Cliente* vco1;
   char* vco;

   vco = tela_alterar_cliente();
   vco1 = buscar_cliente(vco);
   if (vco1 == NULL) {
       printf("\n\nAluno não encontrado!\n\n");
     } else {
       vco1 = preencher_cliente();
       strcpy(vco1->cpf, vco);
       regravar_cliente(vco1);
       free(vco1); 
  }
  free(vco);
}  


 void excluir_cliente(void){  
    void regravar_cliente(Cliente* vco1);
    Cliente* vco1;
    char * vco;

      vco = tela_excluir_cliente();
    vco1 = (Cliente*) malloc(sizeof(Cliente));
    vco1 = buscar_cliente(vco);
    if (vco1 == NULL) {
        printf("\n\nAluno não encontrado!\n\n");
      } else {
        //aln->cpf;
        regravar_cliente(vco1);
        free(vco1);

 } 
  free(vco);
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
      case  '5': tela_menu_principal(); 
                 break;
    }
  } while (op != '5'); 

}    


char tela_cadastrar_cliente(void){ 
  char op; 
  system("clear||cls");
  printf("\n");   
                 
 printf("\n#####################################################################\n"); 
 printf("\n#             = = = = tela cadastrar cliente = = = =                #\n"); 
 printf("\n# 1.cadastrar cliente                                               #\n"); 
 printf("\n# 2.Pesquisar cliente                                               #\n");
 printf("\n# 3.alterar cliente                                                 #\n"); 
 printf("\n# 4.excluir cliente                                                 #\n"); 
 printf("\n# 5.Retornar ao menu principal                                      #\n"); 
 printf("\n#####################################################################\n"); 
 printf("\nQual sua opcao?:"); 
 scanf("%c",&op);  
 getchar();  
 return op;

}


Cliente* preencher_cliente(void){   
   Cliente *vco1;
   vco1 = (Cliente*) malloc(sizeof(Cliente));
   system("clear||cls");
   printf("\n");
   printf("\n#################################################\n"); 
   printf("\n#                                               #\n");     
   printf("\nNome do motorista:");  
   scanf(" %19[^\n]",vco1->nome); 
   validar_nome(vco1->nome);
   printf("\nContato do motorista:");  
   scanf(" %8[^\n]",vco1->celular); 
   validar_nome(vco1->celular); 
   printf("\nCPF:"); 
   scanf(" %11[^\n]",vco1->cpf); 
   validar_nome(vco1->cpf); 
   getchar(); 
   sleep(1);
   return vco1;
} 


char* tela_pesquisar_cliente(void){  
     char* vco;
     vco = (char*) malloc(9*sizeof(char));
     system("clear||cls");
     printf("\n");
     printf("\n###############################################\n"); 
     printf("\n#                                             #\n");  
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
    printf("\n################################################\n"); 
    printf("\n#                                              #\n"); 
    printf("\nAlterar CPF:"); 
    scanf("%11[^\n]",vco);
    getchar(); 
    sleep(1);
    return vco;
} 


char* tela_excluir_cliente(void){  
    char *vco;
    vco = (char*) malloc(12*sizeof(char)); 
    system("clear||cls");
    printf("\n");
    printf("\n############################################\n"); 
    printf("\n#                                          #\n"); 
    printf("\nExcluir CPF:");  
    scanf("%11[^\n]",vco);
    getchar(); 
    sleep(1);
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


void exibir_cliente(Cliente* carro) {  
  Cliente *vco1;
  vco1 = (Cliente*) malloc(sizeof(Cliente));
  if (vco1 == NULL) {
    printf("\n= = = Veiculo Inexistente = = =\n");
  } else {
    printf("\n= = = Veiculo Cadastrado = = =\n");
    printf("Nome: %s\n", vco1->nome);
    printf("Celular: %s\n", vco1->celular);
    printf("CPF: %s\n", vco1->cpf);  
    printf("Status: %d\n", vco1->status);
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

