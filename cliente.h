typedef struct cliente Cliente;

struct cliente{
  char nome[100]; 
  char celular[10]; 
  char cpf[12];  
  int status;
};   


void cadastrar_cliente(void);
char tela_cadastrar_cliente(void); 
void pesquisar_cliente(void); 
void alterar_cliente(void); 
void excluir_cliente(void);
