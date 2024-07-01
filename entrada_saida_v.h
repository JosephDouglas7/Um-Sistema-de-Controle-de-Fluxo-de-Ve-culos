typedef struct fluxo_veiculo Fluxo_Veiculo;

struct fluxo_veiculo{
  char nome[100]; 
  char celular[13]; 
  char cpf[12];  
  char placa_V[12]; 
  float entrada_V; 
  float saida_V; 
  float aluguel_V;
  int status;
};   



char modulo_entrada_saida(void);
char tela_entrada_saida(void); 
void entrada_saida(void);  
Fluxo_Veiculo* preencher_entrada_saida(void); 
void pesquisar_entrada_saida(void);  
void exibir_entrada_saida(Fluxo_Veiculo*); 
Fluxo_Veiculo* buscar_entrada_saida(char*);
char* tela_pesquisar_entrada_saida(void);
void alterar_entrada_saida(void);  
char* tela_alterar_entrada_saida(void);
void excluir_entrada_saida(void);  
char* tela_excluir_entrada_saida(void); 
void gravar_entrada_saida(Fluxo_Veiculo*); 
void erro_arquivo_entrada_saida(void);
void regravar_entrada_saida(Fluxo_Veiculo*); 
void ler_nome1(char*); 
void ler_celular1(char*); 
void ler_cpf1(char*);
void ler_placa1(char*); 
void ler_entrada(float*);
void ler_saida(float*); 
void ler_aluguel_V(float*); 
