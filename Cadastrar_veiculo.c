#include<stdio.h>  
#include"Cadastrar_veiculo.h" 


char tela_cadastrar_veiculo(void){ 
     char op; 
     system("clear||cls");
     printf("\n");   
     printf("\n########################################################################################\n"); 
     printf("\n#                  = = = = tela cadastrar veiculo = = = =                              #\n");
     printf("\n# 1.cadastrar veiculo                                                                  #\n"); 
     printf("\n# 2.alterar cadastro                                                                   #\n"); 
     printf("\n# 3.excluir cadastro                                                                   #\n"); 
     printf("\n#                                                                                      #\n"); 
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
      case  '2' : alterar_cadastro(); 
                  break;  
      case  '3' : excluir_cadastro_v(); 
                  break; 
    }
  } while (op != '3'); 
  return 0;
}  


 char cadastrar_veiculo(void){  
    system("clear||cls");
    printf("\n");
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\n# Nome do motorista:                                                                   #\n"); 
    printf("\n# Contato do motorista:                                                                #\n"); 
    printf("\n# Marca do veículo:                                                                    #\n"); 
    printf("\n# Placa do veículo:                                                                    #\n"); 
    printf("\n#                                                                                      #\n"); 
    printf("\n########################################################################################\n"); 
    getchar(); getchar(); getchar(); 
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
