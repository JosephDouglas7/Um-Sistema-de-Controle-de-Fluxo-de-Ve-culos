//Bibliotecas  


#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h> 
#include "veiculo.h" 
#include "entrada_saida_V.h" 
#include "relatorios.h"
#include "menus.h" 
#include "finalizar.h" 




void pausa() {
    sleep(60); // Pausa por 1 minuto
}


char menu_principal(void);


int main(void){  
    
  char op;  
  do{
     op = tela_menu_principal();
    switch(op){ 
      case  '1' : modulo_cadastrar_veiculo(); 
                  break; 
      case  '2':  modulo_cadastrar_cliente(); 
                  break;
      case  '3' : modulo_entrada_saida(); 
                  break;  
      case  '4' : tela_relatorios(); 
                  break; 
      case  '5' : tela_sobre(); 
                  break; 
      case  '6' : tela_equipe(); 
                  break; 
      case '7' : finalizar(); 
                 break;
    }
  } while (op != '7'); 
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
   printf("\n#      2.Módulo cadastrar cliente                   #\n");
   printf("\n#      3.Módulo entrada e saída                     #\n"); 
   printf("\n#      4.Relatórios                                 #\n");  
   printf("\n#      5.Sobre                                      #\n"); 
   printf("\n#      6.Equipe                                     #\n"); 
   printf("\n#      7.Encerrar programa                          #\n");
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
     printf("\n# Este projeto foi desenvolvido por:                                                   #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n# Aluno: Joseph Douglas                                                                #\n"); 
     printf("\n# Email: joseph.batista.066@ufrn.edu.br                                                #\n"); 
     printf("\n# Redes sociais:@josephdouglas                                                         #\n"); 
     printf("\n# Git: https://github.com/JosephDouglas7/Um-Sistema-de-Controle-de-Fluxo-de-Ve-culos   #\n"); 
     printf("\n#                                                                                      #\n");
     printf("\n########################################################################################");  
     printf("\n"); 
     getchar();  
  }  
