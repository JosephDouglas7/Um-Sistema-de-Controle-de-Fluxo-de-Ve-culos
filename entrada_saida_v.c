#include<stdio.h>   
#include<stdlib.h> 
#include"entrada_saida_v.h" 


typedef struct entrada_s entrada_S;
typedef struct entrada_s{
  char marca_V[20]; 
  char placa_V[9]; 
  char cor_V[20]; 
}; 


char tela_entrada_saida(void){   
    char op; 
    system("clear||cls");
    printf("\n");    
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\n#                    = = = = =  Entrada/Saída de veículos = = = = =                    #\n");
    printf("\n#  1.Cadastrar e.s                                                                     #\n");  
    printf("\n#  2.Pesquisar e.s                                                                     #\n");
    printf("\n#  3.Alterar e.s                                                                       #\n"); 
    printf("\n#  4.Excluir e.s                                                                       #\n");  
    printf("\n#  5.retornar ao menu principal                                                        #\n"); 
    printf("\n########################################################################################\n");  
    printf("\nQual sua opcao?:"); 
    scanf("%c",&op); 
    getchar();  
    return op;
}    


char modulo_entrada_saida(void){  
  char op;  
  do{
     op = tela_entrada_saida();
    switch(op){ 
      case  '1' : entrada_saida(); 
                  break; 
      case  '2' : pesquisar_e_s(); 
                  break;
      case  '3' : alterar_e_s(); 
                  break;  
      case  '4' : excluir_e_s(); 
                  break;  
      case  '5' : tela_menu_principal(); 
                  break;
    }
  } while (op != '5'); 
  return 0; 
}  


char entrada_saida(void){    
    entrada_S cv;
    system("clear||cls");
    printf("\n");    
    printf("\n########################################################################################\n"); 
    printf("\n#                    = = = = =  Entrada/Saída de veículos = = = = =                    #\n");
    printf("\nMarca do veículo:");  
    scanf(" %20[^\n]", cv.marca_V);
    printf("\nPlaca do veículo:");  
    scanf(" %8[^\n]", cv.placa_V);
    printf("\nCor do veículo:");   
    scanf(" %20[^\n]", cv.cor_V);
    getchar();   
    sleep(1);    
}  


char pesquisar_e_s(void){ 
     system("clear||cls");
     printf("\n");  
     printf("\n########################################################################################\n");  
     printf("\n#                                                                                      #\n");  
     printf("\nPlaca do veículo:");  
     scanf(" %8[^\n]", cv.placa_V);
     printf("\n");  
     getchar();  
}

  void alterar_e_s(void){  
     system("clear||cls");
     printf("\n");  
     printf("\n########################################################################################\n");  
     printf("\n#                                                                                      #\n");  
     printf("\n# Placa do veículo para alterar:                                                       #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n");  
     printf("\n");  
     getchar();  
     return;
}


  void excluir_e_s(void){  
     system("clear||cls");
     printf("\n");  
     printf("\n########################################################################################\n");   
     printf("\n#                                                                                      #\n");
     printf("\nPlaca do veículo para excluir:");  
     printf("\n");   
     getchar();  
     return;
}
