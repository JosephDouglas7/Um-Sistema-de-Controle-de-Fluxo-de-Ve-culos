
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>
#include "entrada_saida_V.h"
#include "validar.h"


typedef struct fluxo_veiculo Fluxo_Veiculo;


void entrada_saida(void){ 
    Fluxo_Veiculo* vco1; 
    vco1 = preencher_entrada_saida();
    gravar_entrada_saida(vco1); 
    free(vco1);
}  


void pesquisar_entrada_saida(void){ 
   Fluxo_Veiculo* carro;
   char* placa;
   placa = tela_pesquisar_entrada_saida();
   carro = buscar_entrada_saida(placa);
   exibir_entrada_saida(carro);
   free(carro); 
   free(placa);
}  


void alterar_entrada_saida(void){  
  Fluxo_Veiculo* vco1;
  char* placa;
  placa = tela_alterar_entrada_saida();
  vco1 = buscar_entrada_saida(placa);
  if (vco1 == NULL) {
    printf("\n\nAluno não encontrado!\n\n");
  } else {
    vco1 = preencher_entrada_saida();
    strcpy(vco1->placa_V, placa);
    regravar_entrada_saida(vco1);
    free(vco1); 
  }
  free(placa);
}  


 void excluir_entrada_saida(void){  
    Fluxo_Veiculo* vco1;
    char * vco;
    vco = tela_excluir_entrada_saida();
    vco1 = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
    vco1 = buscar_entrada_saida(vco);
    if (vco1 == NULL) {
        printf("\n\nAluno não encontrado!\n\n");
      } else {
        vco1->status = 0;
        regravar_entrada_saida(vco1);
        free(vco1);
 } 
  free(vco);
} 


char tela_entrada_saida(void){   
    char op; 
    system("clear||cls");
    printf("\n");        
    printf("\n#################################\n"); 
    printf("\n#   = =  Fluxo de veículos = =  #\n");
    printf("\n#  1.Cadastrar entrada e saída  #\n"); 
    printf("\n#  2.Pesquisar entrada e saída  #\n"); 
    printf("\n#  3.Alterar entrada e saída    #\n"); 
    printf("\n#  4.Excluir entrada e saída    #\n"); 
    printf("\n#  5.Voltar ao menu principal   #\n");     printf("\n#################################\n"); 
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
      case  '2' : pesquisar_entrada_saida(); 
                  break;
      case  '3' : alterar_entrada_saida(); 
                  break;  
      case  '4' : excluir_entrada_saida(); 
                  break;  
    }
  } while (op != '5'); 
  return 0; 
}  


Fluxo_Veiculo* preencher_entrada_saida(void){  
    Fluxo_Veiculo *vco1;
    vco1 = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
    system("clear||cls");
    printf("\n");         
    printf("\n = = =  Entrada/Saída de veículos = = =\n"); 
    ler_cpf1(vco1->cpf);
    ler_placa1(vco1->placa_V); 
    ler_saida(vco1->saida_V);  
    ler_aluguel_V(&vco1->aluguel_V);
    vco1->status = 1;
    getchar();   
    sleep(1);  
    return vco1;
}   


void ler_cpf1(char* cpf){
    printf("\nDigite o CPF do cliente (apenas números):");
    scanf("%s", cpf);
    while (!validar_cpf(cpf)) {
      printf("\nCPF inválido!\n");
      printf("\nDigite o CPF do cliente no formato 11122233344:");
      scanf("%s", cpf); 
    }
}  


void ler_placa1(char* placa) {
    printf("\nDigite a placa do veiculo:");
    scanf("%s", placa);
    while (!validar_placa(placa)) {
      printf("Placa inválida!\n");
      printf("\nDigite a placa do veiculo:");
      scanf("%s", placa); 
    }
}  


void ler_entrada(char* entrada_V){ 
     time_t agora;  
     char datahora[100]; 
     agora = time(NULL); 
     strftime(datahora, sizeof(datahora), "%d/%m/%Y %H:%M:%S"); 
     printf("Data/hora:%s/n",datahora);
     return;
}
 


void ler_saida(char* saida_V){ 
    printf("\nDigite a saida do veiculo:");  
    //fgets(saida_V, sizeof(saida_V), stdin);  
    scanf("%c", saida_V);
  while (!validar_saida_V(saida_V)) {
       printf("Saida do veiculo inválida!\n");
       printf("\nDigite a saida do veiculo:");  
       //fgets(saida_V, sizeof(saida_V), stdin); 
       scanf("%c", saida_V); 
       return;
     }
} 


void ler_aluguel_V(float* aluguel_V){ 
     printf("\nDigite o aluguel do veiculo:"); 
     scanf("%f", aluguel_V);  
   while (!validar_aluguel(aluguel_V)) {
        printf("Aluguel do veiculo inválido!\n");
        printf("\nDigite o aluguel do veiculo:");  
        scanf("%f", aluguel_V); 
        return;
      }
}


char* tela_pesquisar_entrada_saida(void){  
    char* vco;
    vco = (char*) malloc(9*sizeof(char));
    system("clear||cls");
    printf("\n");     
    printf("\n- - Pesquisar fluxo de V. - -\n");  
    printf("\nPlaca do veículo:");  
    scanf(" %8[^\n]",vco); 
    fgets(vco, sizeof(vco), stdin);  
    return vco;  
}


  char* tela_alterar_entrada_saida(void){  
    char* vco;
    vco = (char*) malloc(12*sizeof(char));  
    system("clear||cls");
    printf("\n");      
    printf("\n- - - - Alterar fluxo de V. - - - -\n");   
    printf("\nPlaca do veículo para alterar:");  
    scanf(" %11[^\n]",vco);
    getchar();  
    return vco;
}


char* tela_excluir_entrada_saida(void){  
    char *vco;
    vco = (char*) malloc(12*sizeof(char)); 
    system("clear||cls");
    printf("\n");       
    printf("\n- - Excluir fluxo de V. - -\n"); 
    printf("\nPlaca para excluir:");  
    scanf(" %11[^\n]",vco);
    getchar();  
    return vco;
} 


void erro_arquivo_entrada_saida(void){ 
   printf("Ops! Ocorreu um erro no arquivo!\n");
} 


void gravar_entrada_saida(Fluxo_Veiculo* vco1){  
    FILE* fp;
    fp = fopen("fluxo_veiculo.dat", "ab");
    if (fp == NULL) {
      erro_arquivo_entrada_saida();
    }
    fwrite(vco1, sizeof(Fluxo_Veiculo), 1, fp);
    fclose(fp);
} 


Fluxo_Veiculo* buscar_entrada_saida(char* placa) { 
  FILE* fp;
  Fluxo_Veiculo* vco1;
  vco1 = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
  fp = fopen("fluxo_veiculo.dat", "rb");
  if (fp == NULL) {
    erro_arquivo_entrada_saida();
    return NULL;
  }
  while(fread(vco1, sizeof(Fluxo_Veiculo), 1, fp)) {
    if ((strcmp(vco1->placa_V,placa) == 0) && (vco1->status == 1)) {
      fclose(fp);
      return vco1;
    }
  }
  fclose(fp);
  return NULL;
} 


void exibir_entrada_saida(Fluxo_Veiculo* vco1) {  
  vco1 = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
  if (vco1 == NULL || 0 ) {
    printf("\n= = = Veiculo Inexistente = = =\n");
  } else {
    printf("\n= = = Veiculo Cadastrado = = =\n");  
    printf("\nCPF do cliente:%s\n", vco1->cpf);
    printf("\nPlaca do veículo: %s\n", vco1->placa_V);
    printf("\nEntrada: %.2f\n", vco1->entrada_V); 
    printf("\nSaida: %.2f\n", vco1->saida_V);  
    printf("\nAluguel:%.2f\n", vco1->aluguel_V);
    printf("\nStatus:%d\n", vco1->status);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}  


 void regravar_entrada_saida(Fluxo_Veiculo* vco1) {  
  int achou;
  FILE* fp;
  Fluxo_Veiculo* vco1_Lido;  
  vco1_Lido = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
  fp = fopen("fluxo_veiculo.dat", "r+b");
  if (fp == NULL) {
    erro_arquivo_entrada_saida();
  }
  achou = 0;
  while(fread(vco1_Lido, sizeof(Fluxo_Veiculo), 1, fp) && !achou) {
    fread(vco1_Lido, sizeof(Fluxo_Veiculo), 1, fp);
    if (strcmp(vco1_Lido->placa_V, vco1->placa_V) == 0) {
      achou = 1;
      fseek(fp, -1*sizeof(Fluxo_Veiculo), SEEK_CUR);
          fwrite(vco1, sizeof(Fluxo_Veiculo), 1, fp);
      break;
    }
  }
  fclose(fp);
  free(vco1_Lido);
} 

