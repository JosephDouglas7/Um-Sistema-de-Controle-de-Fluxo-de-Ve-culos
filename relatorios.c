#include<stdio.h>   
#include<stdlib.h> 
#include "relatorios.h"  
#include "cliente.h" 
#include "validar.h"
#include "veiculo.h"
#include "entrada_saida_V.h"


void modulo_relatorio(void){ 
     char opcao;
     do {
         opcao = menu_relatorio();
         switch(opcao) {
             case '1': lista_cliente();
                       break;
             case '2': lista_veiculo();
                       break;
             case '3': lista_fluxo_veiculos();
                       break;
         } 		
     } while (opcao != '4');
} 


char menu_relatorio(void){  
  char op;
  system("clear||cls");
  printf("\n######################################\n"); 
  printf("\n#   - - - menu de relatorios - - -   #\n"); 
  printf("\n# 1. relatorios de clientes          #\n"); 
  printf("\n# 2. relatorios de veiculos          #\n");    
  printf("\n# 3.relatorios de fluxo de veiculos  #\n"); 
  printf("\n# 4.Retornar ao menu principal       #\n");
  printf("\n######################################\n"); 
  printf("\nQual sua opcao?:");
  scanf("%c", &op);
  getchar();
  return op;
}


void lista_cliente(void) { 
    system("clear||cls");
    FILE* fp;
    Cliente* cliente;
    cliente = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("cliente.dat", "rb");
    while (fread(cliente, sizeof(Cliente), 1, fp)) { 
        exibir_cliente(cliente);  
    } 
    fclose(fp); 
    free(cliente); 
} 


void lista_veiculo(void){  
    system("clear||cls");
    FILE* fp;
    Veiculo* veiculo;
    veiculo = (Veiculo*) malloc(sizeof(Veiculo));
    fp = fopen("veiculos.dat", "rb");
    while (fread(veiculo, sizeof(Veiculo), 1, fp)) { 
        exibir_veiculo(veiculo);
    } 
    fclose(fp); 
    free(veiculo); 
} 


void lista_fluxo_veiculos(void){  
    system("clear||cls");
    FILE* fp;
    Fluxo_Veiculo* fluxo_veiculo;
    fluxo_veiculo = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
    fp = fopen("fluxo_veiculo.dat", "rb");
    while (fread(fluxo_veiculo, sizeof(Fluxo_Veiculo), 1, fp)) { 
        exibir_entrada_saida(fluxo_veiculo);
    } 
    fclose(fp);
    free(fluxo_veiculo); 
} 



