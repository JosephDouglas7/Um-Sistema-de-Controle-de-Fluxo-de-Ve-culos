#include<stdio.h>   
#include<stdlib.h> 
#include"Cadastrar_veiculo.h" 


typedef struct {
  char nome[100];
  char celular[15]; 
  char marca_V[20]; 
  char placa_V[15]; 
  char cpf[11];
} Cadastrar_V; 


char tela_cadastrar_veiculo(void){ 
     char op; 
     system("clear||cls");
     printf("\n");   
     printf("\n########################################################################################\n"); 
     printf("\n#                  = = = = tela cadastrar veiculo/cadast.c = = = =                     #\n");
     printf("\n# 1.cadastrar veiculo/cadastrar cliente                                                #\n");  
     printf("\n# 2.pesquisar cadastro.v                                                               #\n"); 
     printf("\n# 3.alterar cadastro.v                                                                 #\n"); 
     printf("\n# 4.excluir cadastro.v                                                                 #\n"); 
     printf("\n# 5.retornar ao menu principal                                                         #\n"); 
     printf("\n########################################################################################\n"); 
     printf("\nQual sua opcao?:"); 
     scanf("%c",&op);  
     getchar();  
     return op;
}  


char modulo_cadastrar_veiculo(void){  
  char op;  
  do{
     op = tela_cadastrar_veiculo();
    switch(op){ 
      case  '1' : cadastrar_veiculo(); 
                  break; 
      case  '2' : pesquisar_cadastro_v(); 
                  break;
      case  '3' : alterar_cadastro(); 
                  break;  
      case  '4' : excluir_cadastro_v(); 
                  break;  
      case  '5' : tela_menu_principal(); 
                  break;
    }
  } while (op != '5'); 
  return 0;
}  


 char cadastrar_veiculo(void){  
    system("clear||cls");
    printf("\n");
    printf("\n########################################################################################\n"); 
    printf("\nNome do motorista:");  
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", novo_cadastrar_v->nome);
    printf("\nContato do motorista:");  
    scanf(" %[0-9]", novo_cadastrar_v->celular);
    printf("\nMarca do veículo:");  
    scanf(" %[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", novo_cadastrar_v->marca_V);
    printf("\nPlaca do veículo:");  
    scanf(" %[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", novo_cadastrar_v->placa_V);
    printf("\nCPF:"); 
    scanf(" %[0-9]", novo_cadastrar_v->cpf);
    getchar();  
    sleep(1);    
    free(novo_cadastrar_v); 
    return 0;
}


char pesquisar_cadastro_v(void){ 
     system("clear||cls");
     printf("\n");  
     printf("\n########################################################################################\n");  
     printf("\n#                                                                                      #\n");  
     printf("\n# Pesquisar cadastro.v:                                                                #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n");  
     printf("\n");  
     getchar();  
     return 0;
}


  char alterar_cadastro(void){  
     system("clear||cls");
     printf("\n");   
     printf("\n########################################################################################\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n# Nome do motorista para alterar:                                                      #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n"); 
     printf("\n");  
     getchar(); 
     return 0;
}


  char excluir_cadastro_v(void){  
     system("clear||cls");
     printf("\n");   
     printf("\n########################################################################################\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n# Nome do motorista para excluir:                                                      #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n"); 
     getchar(); 
     return 0;
}
