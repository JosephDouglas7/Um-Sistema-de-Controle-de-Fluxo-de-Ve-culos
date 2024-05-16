#include <stdio.h>  
#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <unistd.h> 
#include "cliente.h"
#include "validar.h"

typedef struct cliente Cliente;

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


void cadastrar_cliente(void){  
   Cliente *vco1;
   vco1 = (Cliente*) malloc(sizeof(Cliente));
   system("clear||cls");
   printf("\n");
   printf("\n###########################################################\n"); 
   printf("\n#                                                         #\n");     
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
   return;

} 


void pesquisar_cliente(void){ 
     system("clear||cls");
     printf("\n");
     printf("\n###############################################\n"); 
     printf("\n#                                             #\n");  
     printf("\nPesquisar CPF:"); 
     getchar(); 
     sleep(1);
     return;
}  


void alterar_cliente(void){ 
    system("clear||cls");
    printf("\n");
    printf("\n################################################\n"); 
    printf("\n#                                              #\n"); 
    printf("\nAlterar CPF:"); 
    getchar(); 
    sleep(1);
    return;
} 


void excluir_cliente(void){ 
    system("clear||cls");
    printf("\n");
    printf("\n############################################\n"); 
    printf("\n#                                          #\n"); 
    printf("\nAlterar CPF:"); 
    getchar(); 
    sleep(1);
    return;
}
