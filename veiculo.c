// Feito com base em: https://github.com/flgorgonio/linguasolta_2020.2.git

#include "veiculo.h"
#include "menus.h"
#include "validar.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


typedef struct veiculo Veiculo;


void cadastrar_veiculo(void) {
  Veiculo *vco1;
  vco1 = preencher_veiculo();
  gravar_veiculo(vco1);
  free(vco1);
}


void pesquisar_veiculo(void) {
  Veiculo *carro;
  char *placa;
  placa = tela_pesquisar_veiculo();
  carro = buscar_veiculo(placa);
  exibir_veiculo(carro);
  free(carro);
  free(placa);
}


void alterar_veiculo(void) {
  void regravar_veiculo(Veiculo * vco1);
  Veiculo *vco1;
  char *vco;
  vco = tela_alterar_veiculo();
  vco1 = buscar_veiculo(vco);
  if (vco1 == NULL) {
    printf("\n\nAluno não encontrado!\n\n");
  } else {
    vco1 = preencher_veiculo();
    strcpy(vco1->placa_V, vco);
    regravar_veiculo(vco1);
    free(vco1);
  }
  free(vco);
}


void excluir_veiculo(void) {
  void regravar_veiculo(Veiculo * vco1);
  Veiculo *vco1;
  char *placa;
  placa = tela_excluir_veiculo();
  vco1 = (Veiculo *)malloc(sizeof(Veiculo));
  vco1 = buscar_veiculo(placa);
  if (vco1 == NULL) {
    printf("\n\nAluno não encontrado!\n\n");
  } else {
    // vco1->placa_V; ???
    vco1->status = 0;
    regravar_veiculo(vco1);
    free(vco1);
  }
  free(placa);
}


char tela_cadastrar_veiculo(void) {
  char op;
  system("clear||cls");
  printf("\n");
  printf("\n############################################\n");
  printf("\n#     = =  tela cadastrar veiculo = =      #\n");
  printf("\n# 1.cadastrar veiculo                      #\n");
  printf("\n# 2.Pesquisar veiculo                      #\n");
  printf("\n# 3.alterar cadastro                       #\n");
  printf("\n# 4.excluir cadastro                       #\n");
  printf("\n# 5.Retornar ao menu principal             #\n");
  printf("\n############################################\n");
  printf("\nQual sua opcao?:");
  scanf("%c", &op);
  getchar();
  return op;
}


void modulo_cadastrar_veiculo(void) {
  char op;

  do {
    op = tela_cadastrar_veiculo();
    switch (op) {
    case '1':
      cadastrar_veiculo();
      break;
    case '2':
      pesquisar_veiculo();
      break;
    case '3':
      alterar_veiculo();
      break;
    case '4':
      excluir_veiculo();
      break;
    }
  } while (op != '5');
}


Veiculo *preencher_veiculo(void) {
  Veiculo *vco1;
  vco1 = (Veiculo *)malloc(sizeof(Veiculo));
  system("clear||cls");
  printf("\n");
  printf("\n##############################################\n");
  printf("\nMarca do veiculo: "); 
  scanf("%s", vco1->marca_V);
  ler_placa(vco1->placa_V); 
  ler_ano(vco1-> ano_V);
  vco1->status = 1;
  getchar();
  sleep(1);
  return vco1;
}


void ler_placa(char* placa_V) {
    printf("\nDigite a placa do veículo: ");
    scanf("%s", placa_V);
    while (!validar_placa(placa_V)) {
      printf("Marca inválida!\n");
      printf("Digite a marca do veículo: ");
      scanf("%s", placa_V); 
      break;
    }
}    


void ler_ano(char* ano_V) {
    printf("Digite o ano do veículo: ");
    scanf("%s", ano_V);
    while (!validar_ano(ano_V)) {
      printf("Ano inválida!\n");
      printf("Digite o ano do veículo: ");
      scanf("%s", ano_V); 
      break;
    }
} 


char *tela_pesquisar_veiculo(void) {
  char *vco;
  vco = (char *)malloc(9 * sizeof(char));
  system("clear||cls");
  printf("\n");
  printf("\nPlaca do veículo:");
  scanf(" %8[^\n]", vco);
  fgets(vco, sizeof(vco), stdin);
  return vco;
}


char *tela_alterar_veiculo(void) {
  char *vco;
  vco = (char *)malloc(12 * sizeof(char));
  system("clear||cls");
  printf("\n");
  printf("\n######################################################\n");
  printf("\n#                                                    #\n");
  printf("\nPlaca do veiculo para alterar:");
  scanf("%11[^\n]", vco);
  printf("\n");
  getchar();
  return vco;
}


char *tela_excluir_veiculo(void) {
  char *vco;
  vco = (char *)malloc(12 * sizeof(char));
  system("clear||cls");
  printf("\n");
  printf("\n########################################\n");
  printf("\nPlaca do veículo para excluir:");
  scanf(" %8[^\n]", vco);
  getchar();
  return vco;
}


void erro_arquivo_veiculo(void) {
  printf("Ops! Ocorreu um erro no arquivo!\n");
}


void gravar_veiculo(Veiculo *vco1) {

  FILE *fp;
  fp = fopen("veiculos.dat", "ab");
  if (fp == NULL) {
    erro_arquivo_veiculo();
  }
  fwrite(vco1, sizeof(Veiculo), 1, fp);
  fclose(fp);
}


Veiculo *buscar_veiculo(char *placa) {

  FILE *fp;
  Veiculo *vco1;
  vco1 = (Veiculo *)malloc(sizeof(Veiculo));
  fp = fopen("veiculos.dat", "rb");
  if (fp == NULL) {
    erro_arquivo_veiculo();
  }
  while (fread(vco1, sizeof(Veiculo), 1, fp)) {
    if ((strcmp(vco1->placa_V, placa) == 0) && (vco1->status == 1)) {
      fclose(fp);
      return vco1;
    }
  }
  fclose(fp);
  return NULL;
}


void exibir_veiculo(Veiculo *vco1) {
  vco1 = (Veiculo *)malloc(sizeof(Veiculo));
  if (vco1 == NULL) {
    printf("\n= = = Veiculo Inexistente = = =\n");
  } else {
    printf("\n= = = Veiculo Cadastrado = = =\n");
    printf("Marca: %s\n", vco1->marca_V);
    printf("Placa: %s\n", vco1->placa_V);
    printf("Ano: %s\n", vco1->ano_V);
    printf("Status: %d\n", vco1->status);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}


void regravar_veiculo(Veiculo *vco1) {

  int achou;
  FILE *fp;
  Veiculo *vco1_Lido;
  vco1_Lido = (Veiculo *)malloc(sizeof(Veiculo));
  fp = fopen("veiculos.dat", "r+b");
  if (fp == NULL) {
    erro_arquivo_veiculo();
  }
  achou = 0;
  while (fread(vco1_Lido, sizeof(Veiculo), 1, fp) && !achou) {
    fread(vco1_Lido, sizeof(Veiculo), 1, fp);
    if (strcmp(vco1_Lido->placa_V, vco1->placa_V) == 0) {
      achou = 1;
      fseek(fp, -1 * sizeof(Veiculo), SEEK_CUR);
      fwrite(vco1, sizeof(Veiculo), 1, fp);
      break;
    }
  }
  fclose(fp);
  free(vco1_Lido);
}
