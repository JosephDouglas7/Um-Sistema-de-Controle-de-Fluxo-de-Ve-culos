#Bibliotecas  

#include<stdio.h> 
#include<stdlib.h> 

void tela_menu_principal(void); 
void tela_sobre(void);  
void tela_equipe(void);
void tela_cadastrar_veiculo(void);

int main(void){ 
   tela_menu_principal();  
   tela_sobre(); 
   tela_equipe(); 
   tela_cadastrar_veiculo();
   return 0;
}  
void tela_menu_principal(void){ 
   char op; 
   system("clear||crl"); 
   printf("\n"); 
   printf("\n#####################################################");
   printf("\n#                                                   #");
   printf("\n#             ===============================       #");
   printf("\n#             ||   |        |              ||       #"); 
   printf("\n#             ||   |________|              ||       #");
   printf("\n#         ____||                           ||       #"); 
   printf("\n#         ____===============================       #");
   printf("\n#             ||== O ==||         ||== O ==||       #");
   printf("\n#             ===========         ===========       #");
   printf("\n#####################################################");
   printf("\n#                                                   #"); 
   printf("\n#   = Sistema de controle de fluxo de veículos =    #"); 
   printf("\n#      1.Módulo veículos                            #"); 
   printf("\n#      2.Módulo clientes                            #"); 
   printf("\n#      3.Módulo entrada e saída                     #"); 
   printf("\n#      4.Relatórios                                 #");  
   printf("\n#      5.Sobre                                      #"); 
   printf("\n#      6.Equipe                                     #");
   printf("\n#Qual sua opcao?:"); 
   scanf("%c",&op); 
   getchar();   
}   
   void tela_sobre(void) {
       system("clear||cls");
       printf("\n"); 
       printf("\n####################################################"); 
       printf("\n#                                                  #"); 
       printf("\n#   Universidade Federal do Rio Grande do Norte    #"); 
       printf("\n#      Centro de Ensino Superior do Seridó         #"); 
       printf("\n#     Departamento de Computação e Tecnologia      #"); 
       printf("\n#       Disciplina DCT1106 -- Programação          #"); 
       printf("\n# projeto Sistema de Controle de Fluxo de Veículos #"); 
       printf("\n#  Developed by @josephdouglas -- since Mar, 2024  #"); 
       printf("\n####################################################"); 
       printf("\n#                                                  #"); 
       printf("\n# == Sistema de Controle de Fluxo de Veículos ==   #"); 
       printf("\n# Programa para geração de nota para a diciplina   #"); 
       printf("\n# DCT1106 - Programação. O programa contém todos   #"); 
       printf("\n# os conhecimentos aprendidos na disciplina.       #"); 
       printf("\n#                                                  #");
       printf("\n####################################################");
       printf("\n"); 
       getchar(); 
} 
  void tela_equipe(void){ 
     system("clear||cls");
     printf("\n"); 
     printf("\n########################################################################################"); 
     printf("\n#                                                                                      #"); 
     printf("\n#                    Universidade Federal do Rio Grande do Norte                       #"); 
     printf("\n#                       Centro de Ensino Superior do Seridó                            #"); 
     printf("\n#                     Departamento de Computação e Tecnologia                          #"); 
     printf("\n#                        Disciplina DCT1106 -- Programação                             #"); 
     printf("\n#                   projeto Sistema de Controle de Fluxo de Veículos                   #"); 
     printf("\n#                    Developed by @josephdouglas -- since Mar, 2024                    #"); 
     printf("\n########################################################################################"); 
     printf("\n#                                                                                      #");
     printf("\n#                    = Sistema de controle de fluxo de veículos =                      #");
     printf("\n#                                                                                      #"); 
     printf("\n#    Este projeto exemplo foi desenvolvido por:                                        #"); 
     printf("\n#                                                                                      #"); 
     printf("\n#  Aluno: Joseph Douglas                                                               #"); 
     printf("\n#  Email: joseph.batista.066@ufrn.edu.br                                               #"); 
     printf("\n# Redes sociais:@josephdouglas                                                         #"); 
     printf("\n# Git: https://github.com/JosephDouglas7/Um-Sistema-de-Controle-de-Fluxo-de-Ve-culos   #"); 
     printf("\n#                                                                                      #");
     printf("\n########################################################################################");  
     printf("\n"); 
     getchar();
  } 
  void tela_cadastrar_veiculo(void){ 
     system("clear||cls");
     printf("\n");   
     printf("\n########################################################################################"); 
     printf("\n#                                                                                      #\n");
     printf("\n#                    = = = = Cadastrar Veículo = = = =                                 #\n"); 
     printf("\n# Nome do motorista:                                                                   #\n"); 
     printf("\n# Marca do veículo:                                                                    #\n"); 
     printf("\n# Número de contato:                                                                   #\n"); 
     printf("\n# Placa do veículo:                                                                    #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n"); 
     printf("\n"); 
     getchar();
  } 
