typedef struct fluxo_veiculo Fluxo_Veiculo; 
 
struct fluxo_veiculo{
  char cpf[12];  
  char placa_V[9]; 
  char entrada_V[7]; 
  char saida_V[7]; 
  int aluguel_V;
  int status; 
  //struct fluxo_veiculo* prox;
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
void ler_cpf(char*);
void ler_placa(char*); 
void ler_entrada(char*);
void ler_saida(char*); 
void ler_aluguel_V(int*); 
