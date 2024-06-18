
#include<stdio.h>  
#include<stdlib.h> 
#include"entrada_saida_V.h"


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
  void regravar_entrada_saida(Fluxo_Veiculo* vco1);
   Fluxo_Veiculo* vco1;
   char* vco;
   vco = tela_alterar_entrada_saida();
   vco1 = buscar_entrada_saida(vco);
   if (vco1 == NULL) {
       printf("\n\nAluno não encontrado!\n\n");
     } else {
       vco1 = preencher_entrada_saida();
       strcpy(vco1->placa_V, vco);
       regravar_entrada_saida(vco1);
       free(vco1); 
  }
  free(vco);
}  


 void excluir_entrada_saida(void){  
    void regravar_entrada_saida(Fluxo_Veiculo* vco1);
    Fluxo_Veiculo* vco1;
    char * vco;
    vco = tela_excluir_entrada_saida();
    vco1 = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
    vco1 = buscar_entrada_saida(vco);
    if (vco1 == NULL) {
        printf("\n\nAluno não encontrado!\n\n");
      } else {
        vco1->placa_V;
        regravar_entrada_saida(vco1);
        free(vco1);
 } 
  free(vco);
} 


char tela_entrada_saida(void){   
    char op; 
    system("clear||cls");
    printf("\n");    
    printf("\n########################################\n"); 
    printf("\n#                                      #\n");
    printf("\n#  = =  Entrada/Saída de veículos = =  #\n");
    printf("\n#  1.Cadastrar entrada e saída         #\n"); 
    printf("\n#  2.Pesquisar entrada e saída         #\n");  
    printf("\n#  3.Alterar entrada e saída           #\n"); 
    printf("\n#  4.Excluir entrada e saída           #\n"); 
    printf("\n#  5.Voltar ao menu principal          #\n");      
    printf("\n########################################\n"); 
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
      case  '5': tela_menu_principal(); 
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
    printf("\n#############################################\n"); 
    printf("\n      =  Entrada/Saída de veículos =         \n");
    printf("\nMarca do veículo:");  
    scanf(" %20[^\n]", vco1->marca_V);
    printf("\nPlaca do veículo:");  
    scanf(" %8[^\n]", vco1->placa_V); 
    valida_placa(vco1->placa_V);
    printf("\nCor do veículo:");   
    scanf(" %20[^\n]", vco1->cor_V); 
    printf("\nEntrada:"); 
    scanf("%f",&vco1->entrada_V);  
    validar_entrada_V(vco1->entrada_V);
    printf("\nSaida:"); 
    scanf("%f",&vco1->saida_V); 
    validar_saida_V(vco1->saida_V);
    getchar();   
    sleep(1);  
    return vco1;
}  


char* tela_pesquisar_entrada_saida(void){  
    char* vco;
    vco = (char*) malloc(9*sizeof(char));
    system("clear||cls");
    printf("\n");     
    printf("\n############################################\n");
    printf("\n   - - - Pesquisar entrada/saida.v - - -    \n");  
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
    printf("\n###################################\n");   
    printf("\nPlaca do veículo para alterar:");   
    getchar();  
    return vco;
}


  char* tela_excluir_entrada_saida(void){  
    char *vco;
    vco = (char*) malloc(12*sizeof(char)); 
    system("clear||cls");
    printf("\n");       
    printf("\n####################################\n");  
    printf("\nPlaca do veículo para excluir:");   
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
  //Fluxo_Veiculo *vco1;
  vco1 = (Fluxo_Veiculo*) malloc(sizeof(Fluxo_Veiculo));
  if (vco1 == NULL) {
    //printf("\n= = = Veiculo Inexistente = = =\n");
  } else {
    printf("\n= = = Veiculo Cadastrado = = =\n");
    printf("Marca: %s\n", vco1->marca_V);
    printf("Placa do veículo: %s\n", vco1->placa_V);
    printf("Cor do veículo: %s\n", vco1->cor_V);   
    printf("Entrada: %.2f\n", vco1->entrada_V); 
    printf("Saida: %.2f\n", vco1->saida_V); 
    printf("Status: %d\n", vco1->status);
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

