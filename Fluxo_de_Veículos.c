//Bibliotecas  

#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h>

char tela_menu_principal(void); 
void tela_sobre(void);  
void tela_equipe(void); 
char modulo_cadastrar_veiculo(void);
char tela_cadastrar_veiculo(void); 
char cadastrar_novo_veiculo(void); 
char alterar_cadastro(void); 
char excluir_cadastro_v(void);
char tela_entrada_saida(void);
char tela_relatorios(void); 

int main(void){ 
   tela_menu_principal();  
   tela_sobre(); 
   tela_equipe(); 
   tela_cadastrar_veiculo();  
   cadastrar_novo_veiculo();  
   alterar_cadastro(); 
   excluir_cadastro_v();
   tela_entrada_saida(); 
   tela_relatorios();
   return 0;
}  

void pausa() {
    sleep(60); // Pausa por 1 minuto
}


char menu_principal(void){  
  char op;  
  do{
     op = tela_menu_principal();
    switch(op){ 
      case '1': 
        tela_cadastrar_veiculo(); 
        pausa();
        break; 
      case '2':  
        tela_entrada_saida(); 
        pausa();
        break;  
      case '3': 
       tela_relatorios(); 
       pausa();
       break; 
      case '4': 
       tela_sobre(); 
       pausa();
       break; 
      case '5': 
       tela_equipe(); 
       pausa();
       break;
    }
  } while (op != '0');
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
   scanf("%s",&op); 
   getchar();   
   return op;
}   
   

char modulo_cadastrar_veiculo(void){
    char opcao;
    do {
        opcao = tela_cadastrar_veiculo();
        switch(opcao) { 
            case '1': 	cadastrar_novo_veiculo();  
                        break;
            case '2':   alterar_cadastro();   
                        break;
            case '3': 	excluir_cadastro_v(); 
                        
                        break;
        } 		
    } while (opcao != '4'); 
    return 0;
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
     printf("\n#                                                                                      #\n");
     printf("\n#                    = = = = Cadastrar Veículo = = = =                                 #\n"); 
     printf("\n# 1. Cadastrar um novo veículo                                                         #\n"); 
     printf("\n# 2. Alterar/editar cadastro de veículo                                                #\n"); 
     printf("\n# 3. Excluir cadastro de veículo                                                       #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n");  
     printf("\nQual sua opcao?:"); 
     scanf("%c",&op);
     getchar(); 
     return op;
  }  
  char cadastrar_novo_veiculo(void){  
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
     printf("\n"); 
     getchar();  
     sleep(1); 
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
     sleep(1); 
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
     sleep(1); 
     return 0;
  }

  char tela_entrada_saida(void){  
    system("clear||cls");
    printf("\n");    
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\n#                    = = = = =  Entrada/Saída de veículos = = = = =                    #\n");
    printf("\n#  1. Novo Cadastro                                                                    #\n"); 
    printf("\n#  2. Alterar cadastro                                                                 #\n"); 
    printf("\n#  3. Editar cadastro                                                                  #\n"); 
    printf("\n#  4. Excluir cadastro                                                                 #\n");  
    printf("\n#                                                                                      #\n"); 
    printf("\n########################################################################################\n"); 
    printf("\nQual sua opcao?:"); 
    scanf("%c",&op);  
    getchar(); 
    sleep(1); 
    return 0;
  }  
  

  char tela_relatorios(void){  
    char op;
    system("clear||cls");
    printf("\n"); 
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n"); 
    printf("\n#                    = = = = = Relatórios = = = = =                                    #\n"); 
    printf("\n#    1. Cadastro_de_veículos                                                           #\n"); 
    printf("\n#    2. Entrada_e_Saída_de_veículos                                                    #\n"); 
    printf("\n#                                                                                      #\n"); 
    printf("\n########################################################################################\n");
    printf("\nQual sua opcao?:"); 
    scanf("%c",&op);  
    getchar(); 
    sleep(1); 
    return 0;
  }
