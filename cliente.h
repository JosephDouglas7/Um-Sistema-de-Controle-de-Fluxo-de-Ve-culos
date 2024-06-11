typedef struct cliente Cliente;

struct cliente{
  char nome[100]; 
  char celular[12]; 
  char cpf[12];  
  int status;
};   


void cadastrar_cliente(void); 
char* tela_pesquisar_cliente(void); 
char* tela_pesquisar_cliente(void);
Cliente* buscar_cliente(char* placa);
Cliente* preencher_cliente(void);
char tela_cadastrar_cliente(void); 
void pesquisar_cliente(void); 
void alterar_cliente(void);  
char* tela_alterar_cliente(void);
char* tela_alterar_cliente(void);
void excluir_cliente(void);  
char* tela_excluir_cliente(void);
void gravar_cliente(Cliente* vco1); 
void erro_arquivo_cliente(void);  
void exibir_cliente(Cliente* carro); 
void regravar_cliente(Cliente* vco1);
