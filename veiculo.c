//Feito com base em: https://github.com/flgorgonio/linguasolta_2020.2.git

#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <unistd.h>
#include "veiculo.h"
#include "menus.h" 
#include "validar.h"

typedef struct veiculo Veiculo;  


//void regravar_veiculo(Veiculo* vco1);

void cadastrar_veiculo(void){ 
    Veiculo* vco1; 

  
    vco1 = preencher_veiculo();
    gravar_veiculo(vco1); 
    free(vco1);

} 


void pesquisar_veiculo(void){ 
   Veiculo* carro;
   char* placa;

   placa = tela_pesquisar_veiculo();
   carro = buscar_veiculo(placa);
   exibir_veiculo(carro);
   free(carro); 
   free(placa);

} 


void alterar_veiculo(void){  
  void regravar_veiculo(Veiculo* vco1);
   Veiculo* vco1;
   char* vco;

   vco = tela_alterar_veiculo();
   vco1 = buscar_veiculo(vco);
   if (vco1 == NULL) {
       printf("\n\nAluno não encontrado!\n\n");
     } else {
       vco1 = preencher_veiculo();
       strcpy(vco1->cpf, vco);
       regravar_veiculo(vco1);
       free(vco1); 
  }
  free(vco);
} 


 void excluir_veiculo(void){  
    void regravar_veiculo(Veiculo* vco1);
    Veiculo* vco1;
    char * vco;

      vco = tela_excluir_veiculo();
    vco1 = (Veiculo*) malloc(sizeof(Veiculo));
    vco1 = buscar_veiculo(vco);
    if (vco1 == NULL) {
        printf("\n\nAluno não encontrado!\n\n");
      } else {
        //aln->cpf;
        regravar_veiculo(vco1);
        free(vco1);
  
 } 
  free(vco);
}


char tela_cadastrar_veiculo(void){ 
     char op; 
     system("clear||cls");
     printf("\n");   
     printf("\n####################################################################################\n"); 
     printf("\n#                  = = = = tela cadastrar veiculo/cadast.C = = = =                 #\n");
     printf("\n# 1.cadastrar veiculo                                                              #\n"); 
     printf("\n# 2.Pesquisar veiculo                                                              #\n"); 
     printf("\n# 3.alterar cadastro                                                               #\n"); 
     printf("\n# 4.excluir cadastro                                                               #\n"); 
     printf("\n# 5.Retornar ao menu principal                                                     #\n"); 
     printf("\n####################################################################################\n"); 
     printf("\nQual sua opcao?:"); 
     scanf("%c",&op);  
     getchar();  
     return op;
}  


void modulo_cadastrar_veiculo(void){  
  char op;   
  
  do{
     op = tela_cadastrar_veiculo();
    switch(op){ 
      case  '1' : cadastrar_veiculo(); 
                  break;  
      case  '2' : pesquisar_veiculo();
                  break;
      case  '3' : alterar_veiculo(); 
                  break;  
      case  '4' : excluir_veiculo(); 
                  break;  
    }
  } while (op != '5'); 

}  


 Veiculo* preencher_veiculo(void){  
   Veiculo *vco1;
   vco1 = (Veiculo*) malloc(sizeof(Veiculo));
 
  
   system("clear||cls");
   printf("\n");
  printf("\n#############################################################################\n"); 
  printf("\n#                                                                           #\n");
  printf("\nNome do motorista:");  
  scanf(" %99[^\n]",vco1->nome); 
  validar_nome(vco1->nome); 
  printf("\nContato do motorista:");  
  scanf(" %14[^\n]",vco1->celular); 
  validar_nome(vco1->celular);
  printf("\nMarca do veículo:");  
  scanf(" %19[^\n]",vco1->marca_V); 
  validar_nome(vco1->marca_V);
  printf("\nPlaca do veículo:");  
  scanf(" %8[^\n]",vco1->placa_V); 
  validar_nome(vco1->placa_V);
  printf("\nCPF:"); 
  scanf(" %11[^\n]",vco1->cpf); 
  validar_nome(vco1->cpf);
  getchar(); 
  sleep(1);
  return vco1;
}  


char* tela_pesquisar_veiculo(void){      
  char* vco;

  vco = (char*) malloc(9*sizeof(char));
  system("clear||cls");
  printf("\n");   
  printf("\nPlaca do veículo:");  
  scanf(" %8[^\n]",vco);
  printf("\n");  
  return vco;
} 


char* tela_alterar_veiculo(void) {
    char* vco;

      vco = (char*) malloc(12*sizeof(char));  
     system("clear||cls");
     printf("\n");   
printf("\n######################################################\n");  
printf("\n#                                                    #\n");  
printf("\nCPF do motorista para alterar:"); 
scanf("%11[^\n]",vco); 
printf("\n");  
getchar();  
return vco;
}


char* tela_excluir_veiculo(void) {
    char *vco;
    vco = (char*) malloc(12*sizeof(char)); 
  system("clear||cls");
  printf("\n");   
     
  printf("\n#############################################################\n"); 
  printf("\n#                                                           #\n"); 
  printf("\nCPF do motorista para excluir:"); 
  scanf("%11[^\n]",vco);
  getchar();  
  return vco;
} 


void erro_arquivo_veiculo(void){ 
   printf("Ops! Ocorreu um erro no arquivo!\n");

}


void gravar_veiculo(Veiculo* vco1){  
   
    FILE* fp;

    fp = fopen("veiculos.dat", "ab");
    if (fp == NULL) {
      erro_arquivo_veiculo();
    }
    fwrite(vco1, sizeof(Veiculo), 1, fp);
    fclose(fp);

}


Veiculo* buscar_veiculo(char* placa) { 
  
  FILE* fp;
  Veiculo* vco1;

  vco1 = (Veiculo*) malloc(sizeof(Veiculo));
  fp = fopen("alunos.dat", "rb");
  if (fp == NULL) {
    erro_arquivo_veiculo();
  }
  while(fread(vco1, sizeof(Veiculo), 1, fp)) {
    if ((strcmp(vco1->placa_V,placa) == 0) && (vco1->status == 1)) {
      fclose(fp);
      return vco1;
    }
  }
  fclose(fp);
  return NULL;
}


void exibir_veiculo(Veiculo* carro) {  
  Veiculo *vco1;
  vco1 = (Veiculo*) malloc(sizeof(Veiculo));
  if (vco1 == NULL) {
    printf("\n= = = Veiculo Inexistente = = =\n");
  } else {
    printf("\n= = = Veiculo Cadastrado = = =\n");
    printf("Nome: %s\n", vco1->nome);
    printf("Marca: %s\n", vco1->marca_V);
    printf("Placa: %s\n", vco1->placa_V);
    printf("Celular: %s\n", vco1->celular);
    printf("Status: %d\n", vco1->status);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
} 


void  regravar_veiculo(Veiculo* vco1) {  
  
  int achou;
  FILE* fp;
  Veiculo* vco1_Lido;

  vco1_Lido = (Veiculo*) malloc(sizeof(Veiculo));
  fp = fopen("alunos.dat", "r+b");
  if (fp == NULL) {
    erro_arquivo_veiculo();
  }
  
  achou = 0;
  while(fread(vco1_Lido, sizeof(Veiculo), 1, fp) && !achou) {
    //fread(alnLido, sizeof(Aluno), 1, fp);
    if (strcmp(vco1_Lido->placa_V, vco1->placa_V) == 0) {
      achou = 1;
      fseek(fp, -1*sizeof(Veiculo), SEEK_CUR);
          fwrite(vco1, sizeof(Veiculo), 1, fp);
      //break;
    }
  }
  fclose(fp);
  free(vco1_Lido);
  } 

