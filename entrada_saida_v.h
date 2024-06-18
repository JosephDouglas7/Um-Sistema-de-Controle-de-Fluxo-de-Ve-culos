typedef struct fluxo_veiculo Fluxo_Veiculo;

struct fluxo_veiculo{
  char marca_V[21]; 
  char placa_V[9]; 
  char cor_V[12];  
  float entrada_V; 
  float saida_V;
  int status;
};   


char modulo_entrada_saida(void);
char tela_entrada_saida(void); 
void entrada_saida(void);  
Fluxo_Veiculo* preencher_entrada_saida(void);
void pesquisar_entrada_saida(void);  
void exibir_entrada_saida(Fluxo_Veiculo* carro); 
Fluxo_Veiculo* buscar_entrada_saida(char* placa);
char* tela_pesquisar_entrada_saida(void);
void alterar_entrada_saida(void);  
char* tela_alterar_entrada_saida(void);
void excluir_entrada_saida(void);  
char* tela_excluir_entrada_saida(void); 
void gravar_entrada_saida(Fluxo_Veiculo* vco1); 
void erro_arquivo_entrada_saida(void);

