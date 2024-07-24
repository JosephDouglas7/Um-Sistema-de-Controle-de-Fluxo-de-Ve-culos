typedef struct veiculo Veiculo;

struct veiculo {
  char marca_V[20];
  char placa_V[9];
  char ano_V[5];
  int status; 
  //Veiculo* prox;
};


void modulo_cadastrar_veiculo(void);
void cadastrar_veiculo(void); 
char tela_cadastrar_veiculo(void); 
void ler_ano(char*);
Veiculo *preencher_veiculo(void); 
void ler_placa1(char*);
void pesquisar_veiculo(void);
char *tela_pesquisar_veiculo(void);
void alterar_veiculo(void);
char *tela_alterar_veiculo(void);
void excluir_veiculo(void);
char *tela_excluir_veiculo(void);
void gravar_veiculo(Veiculo *);
Veiculo *buscar_veiculo(char *);
void exibir_veiculo(Veiculo *); 
void regravar_veiculo(Veiculo *);
