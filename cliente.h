typedef struct cliente Cliente;

struct cliente{
  char nome[100]; 
  char celular[12]; 
  char cpf[12];  
  int status; 
  struct cliente* prox;
};   


void cadastrar_cliente(void);  
void ler_nome(char*); 
void ler_celular(char*); 
void ler_cpf1(char*);
char* tela_pesquisar_cliente(void); 
char* tela_pesquisar_cliente(void);
Cliente* buscar_cliente(char*);
Cliente* preencher_cliente(void);
char tela_cadastrar_cliente(void); 
void pesquisar_cliente(void); 
void alterar_cliente(void);  
char* tela_alterar_cliente(void);
char* tela_alterar_cliente(void);
void excluir_cliente(void);  
char* tela_excluir_cliente(void);
void gravar_cliente(Cliente*); 
void erro_arquivo_cliente(void);  
void exibir_cliente(Cliente*); 
void regravar_cliente(Cliente*);

