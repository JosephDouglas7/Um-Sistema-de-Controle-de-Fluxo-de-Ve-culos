#include<stdio.h>   
#include<stdlib.h> 
#include"relatorios.h"  
#include "cliente.h" 
#include"validar.h"
#include"veiculo.h"


char tela_relatorios(void){  
    Cliente *vco1;
    vco1 = (Cliente*) malloc(sizeof(Cliente));
    system("clear||cls");
    printf("\n"); 
    printf("\n#####################################\n"); 
    printf("\n#                                   #\n"); 
    printf("\n#         = = Relatórios = =        #\n");  
    printf("\nNome do motorista:");  
    scanf(" %19[^\n]",vco1->nome); 
    validar_nome(vco1->nome);
    printf("\nContato do motorista:");  
    scanf(" %8[^\n]",vco1->celular); 
    validar_nome(vco1->celular); 
    printf("\nCPF:"); 
    scanf(" %11[^\n]",vco1->cpf);  
    validar_nome(vco1->cpf);  
    printf("\nMarca do veículo:");  
  //scanf(" %19[^\n]",vco1->marca_V); 
  //validar_nome(vco1->marca_V);
  //printf("\nPlaca do veículo:");  
  //scanf(" %8[^\n]",vco1->placa_V); 
  //validar_nome(vco1->placa_V); 
  //printf("\nMês:"); 
  //scanf(" %2[^\n]",vco1->mes_V); 
  //validar_nome(vco1->mes_V); 
  //printf("\nAno:"); 
  //scanf(" %4[^\n]",vco1->ano_V); 
  //validar_nome(vco1->ano_V);
  //getchar(); 
    sleep(1);
    printf("\n#################################################\n");
    getchar(); 
   return 0;
}
