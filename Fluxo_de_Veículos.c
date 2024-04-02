//Bibliotecas  

#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<string.h>

char tela_menu_principal(void);  
char modulo_cadastrar_veiculo(void);
char tela_cadastrar_veiculo(void);  
char cadastrar_veiculo(void);
char alterar_cadastro(void); 
char excluir_cadastro_v(void); 
char modulo_entrada_saida(void);
char tela_entrada_saida(void); 
char entrada_saida(void);
void alterar_e_s(void); 
void excluir_e_s(void);
char tela_relatorios(void);  
void tela_sobre(void);  
void tela_equipe(void);  


void pausa() {
    sleep(60); // Pausa por 1 minuto
}


char menu_principal(void);


int main(void){ 
  menu_principal();  
  return 0;  
}


char menu_principal(void){  
  char op;  
  do{
     op = tela_menu_principal();
    switch(op){ 
      case  '1' : tela_cadastrar_veiculo(); 
                break;
      case  '2' : tela_entrada_saida(); 
                break;  
      case  '3' : tela_relatorios(); 
                break; 
      case  '4' : tela_sobre(); 
                break; 
      case  '5' : tela_equipe(); 
                break;
    }
  } while (op != '5'); 
  return 0; 
}  




char tela_menu_principal(void){ 
   char op; 
   system("clear||crl"); 
   printf("\n"); 
   printf("\n#####################################################\n");
   printf("\n#                                                   #\n");
   printf("\n#             ===============================       #\n");
   printf("\n#             ||   |        |              ||       #\n"); 
   printf("\n#             ||   |________|              ||       #\n");
   printf("\n#         ____||                           ||       #\n"); 
   printf("\n#         ____===============================       #\n");
   printf("\n#             ||== O ==||         ||== O ==||       #\n");
   printf("\n#             ===========         ===========       #\n");
   printf("\n#####################################################\n");
   printf("\n#                                                   #\n"); 
   printf("\n#   = Sistema de controle de fluxo de veículos =    #\n"); 
   printf("\n#      1.Módulo cadastro de veículos                #\n"); 
   printf("\n#      2.Módulo entrada e saída                     #\n"); 
   printf("\n#      3.Relatórios                                 #\n");  
   printf("\n#      4.Sobre                                      #\n"); 
   printf("\n#      5.Equipe                                     #\n");
   printf("\nQual sua opcao?:"); 
   scanf("%c",&op); 
   getchar();   
   return op;
}   


   void tela_sobre(void) {
       system("clear||cls");
       printf("\n"); 
       printf("\n####################################################\n"); 
       printf("\n#                                                  #\n"); 
       printf("\n#   Universidade Federal do Rio Grande do Norte    #\n"); 
       printf("\n#      Centro de Ensino Superior do Seridó         #\n"); 
       printf("\n#     Departamento de Computação e Tecnologia      #\n"); 
       printf("\n#       Disciplina DCT1106 -- Programação          #\n"); 
       printf("\n# projeto Sistema de Controle de Fluxo de Veículos #\n"); 
       printf("\n#  Developed by @josephdouglas -- since Mar, 2024  #\n"); 
       printf("\n####################################################\n"); 
       printf("\n#                                                  #\n"); 
       printf("\n# == Sistema de Controle de Fluxo de Veículos ==   #\n"); 
       printf("\n# Programa para geração de nota para a diciplina   #\n"); 
       printf("\n# DCT1106 - Programação. O programa contém todos   #\n"); 
       printf("\n# os conhecimentos aprendidos na disciplina.       #\n"); 
       printf("\n#                                                  #\n");
       printf("\n####################################################\n");
       printf("\n"); 
       getchar();  
} 


  void tela_equipe(void){ 
     system("clear||cls");
     printf("\n"); 
     printf("\n########################################################################################\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n#                    Universidade Federal do Rio Grande do Norte                       #\n"); 
     printf("\n#                       Centro de Ensino Superior do Seridó                            #\n"); 
     printf("\n#                     Departamento de Computação e Tecnologia                          #\n"); 
     printf("\n#                        Disciplina DCT1106 -- Programação                             #\n"); 
     printf("\n#                   projeto Sistema de Controle de Fluxo de Veículos                   #\n"); 
     printf("\n#                    Developed by @josephdouglas -- since Mar, 2024                    #\n"); 
     printf("\n########################################################################################\n"); 
     printf("\n#                                                                                      #\n");
     printf("\n#                    = Sistema de controle de fluxo de veículos =                      #\n");
     printf("\n#                                                                                      #\n"); 
     printf("\n#    Este projeto exemplo foi desenvolvido por:                                        #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n#  Aluno: Joseph Douglas                                                               #\n"); 
     printf("\n#  Email: joseph.batista.066@ufrn.edu.br                                               #\n"); 
     printf("\n# Redes sociais:@josephdouglas                                                         #\n"); 
     printf("\n# Git: https://github.com/JosephDouglas7/Um-Sistema-de-Controle-de-Fluxo-de-Ve-culos   #\n"); 
     printf("\n#                                                                                      #\n");
     printf("\n########################################################################################");  
     printf("\n"); 
     getchar();  
  } 


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
     return 0;
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


  char tela_entrada_saida(void){   
    char op; 
    system("clear||cls");
    printf("\n");    
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\n#                    = = = = =  Entrada/Saída de veículos = = = = =                    #\n");
    printf("\n#  1.Cadastrar e.s                                                                     #\n"); 
    printf("\n#  2.Alterar e.s                                                                       #\n"); 
    printf("\n#  3.Excluir e.s                                                                       #\n");  
    printf("\n#                                                                                      #\n"); 
    printf("\n########################################################################################\n");  
    printf("\nQual sua opcao?:"); 
    scanf("%c",&op); 
    getchar();  
    return 0;
}    

       
char modulo_entrada_saida(void){  
  char op;  
  do{
     op = tela_entrada_saida();
    switch(op){ 
      case  '1' : entrada_saida(); 
                break;
      case  '2' : alterar_e_s(); 
                break;  
      case  '3' : excluir_e_s(); 
                break; 
    }
  } while (op != '3'); 
  return 0; 
}  

       
char entrada_saida(void){   
    system("clear||cls");
    printf("\n");    
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\n#                    = = = = =  Entrada/Saída de veículos = = = = =                    #\n");
    printf("\n#  Marca do veículo:                                                                   #\n"); 
    printf("\n#  Placa do veículo:                                                                   #\n"); 
    printf("\n#  Cor do veículo:                                                                     #\n");  
    printf("\n#                                                                                      #\n"); 
    printf("\n########################################################################################\n");  
    getchar();  
    return 0;
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
     printf("\n# Placa do veículo para excluir:                                                       #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n");  
     printf("\n");   
     getchar();  
     return;
}


 char tela_relatorios(void){  
    int op;
    system("clear||cls");
    printf("\n"); 
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n"); 
    printf("\n#                    = = = = = Relatórios = = = = =                                    #\n"); 
    printf("\n#  Nome do motorista:                                                                  #\n");  
    printf("\n#  Contato do motorista:                                                               #\n");  
    printf("\n#  Marca do veículo:                                                                   #\n");  
    printf("\n#  Placa do veículo:                                                                   #\n");   
    printf("\n#  Cor do veículo:                                                                     #\n"); 
    printf("\n########################################################################################\n");
    getchar(); 
   return 0;
}
