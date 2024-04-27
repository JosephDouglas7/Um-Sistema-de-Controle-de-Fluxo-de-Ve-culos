#include<stdio.h>   
#include<stdlib.h> 
#include"Cadastrar_veiculo.h"
#include<string.h> 
//#include"Validar_N_Cadastrar_veiculo.h"
//#include"Validar_N_Cadastrar_veiculo.h"
//#include"Validar_placa_veiculo.h" 
//#include"Validar_placa_veiculo.h"

typedef struct cadastrar_v Cadastrar_V;
struct cadastrar_v{
  char nome[100];
  char celular[15]; 
  char marca_V[20]; 
  char placa_V[15]; 
  char cpf[11]; 
};   


char Cadastrar_veiculo(Cadastrar_V*,char); 
char Pesquisar_cadastro_v(Cadastrar_V*,char);


char tela_cadastrar_veiculo(void){ 
     char op; 
     system("clear||cls");
     printf("\n");   
     printf("\n########################################################################################\n"); 
     printf("\n#                  = = = = tela cadastrar veiculo/cadast.C = = = =                 #\n");
     printf("\n# 1.cadastrar veiculo                                                              #\n"); 
     printf("\n# 2.Pesquisar veiculo                                                              #\n"); 
     printf("\n# 3.alterar cadastro                                                               #\n"); 
     printf("\n# 4.excluir cadastro                                                               #\n"); 
     printf("\n# 5.Retornar ao menu principal                                                     #\n"); 
printf("\n########################################################################################\n"); 
     printf("\nQual sua opcao?:"); 
     scanf("%c",&op);  
     getchar();  
     return op;
}  

Cadastrar_V* al;

char modulo_cadastrar_veiculo(void){  
  char op;  
  do{
     op = tela_cadastrar_veiculo();
    switch(op){ 
      case  '1' : cadastrar_veiculo; 
                  break; 
      case  '2' : pesquisar_cadastro_v;  
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



char Cadastrar_veiculo(Cadastrar_V* al,char i){  
   //Em desenvolvimento...
    system("clear||cls");
    printf("\n");
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\nNome do motorista:");  
    scanf(" %99[^\n]",al[i].nome);
    printf("\nContato do motorista:");  
    scanf(" %14[^\n]", al[i].celular);
    printf("\nMarca do veículo:");  
    scanf(" %19[^\n]",al[i].marca_V);
    printf("\nPlaca do veículo:");  
    scanf(" %14[^\n]", al[i].placa_V);
    printf("\nCPF:"); 
    scanf(" %10[^\n]", al[i].cpf);
    getchar(); 
    sleep(1);     
    return 0;
}  


char Pesquisar_cadastro_v(Cadastrar_V* al,char i){ 
    //Em desenvolvimento...
    char op; 
     system("clear||cls");
     printf("\n");   
     printf("\nNome do motorista: %s\n",al[i].nome);  
     printf("\nContato do motorista: %s\n",al[i].celular);
     printf("\nMarca do veículo: %s\n",al[i].marca_V); 
     printf("\nPlaca do veículo: %s\n",al[i].placa_V); 
     printf("\nCPF: %s\n",al[i].cpf);
     printf("\n");
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
