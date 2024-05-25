typedef struct veiculo Veiculo;

struct veiculo{
  char marca_V[20]; 
  char placa_V[9]; 
  char mes_V[3];  
  char ano_V[5];
  int status;
};   

void modulo_cadastrar_veiculo(void);
void cadastrar_veiculo(void);  
char tela_cadastrar_veiculo(void);
Veiculo* preencher_veiculo(void);
void pesquisar_veiculo(void); 
char* tela_pesquisar_veiculo(void);
void alterar_veiculo(void);  
char* tela_alterar_veiculo(void);
void excluir_veiculo(void);   
char* tela_excluir_veiculo(void);
void gravar_veiculo(Veiculo*);

Veiculo* buscar_veiculo(char*);
void exibir_veiculo(Veiculo*);
