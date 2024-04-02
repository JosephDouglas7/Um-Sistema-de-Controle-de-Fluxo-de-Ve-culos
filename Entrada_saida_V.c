char modulo_entrada_saida(void);
char tela_entrada_saida(void); 
char entrada_saida(void);
void alterar_e_s(void); 
void excluir_e_s(void);


char tela_entrada_saida(void){   
    char op; 
    system("clear||cls");
    printf("\n");    
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\n#                    = = = = =  Entrada/Saída de veículos = = = = =                    #\n");
    printf("\n#  1.Cadastrar e.s                                                                     #\n"); 
    printf("\n#  2.Alterar e.s                                                                       #\n"); 
    printf("\n#  3.Excluir e.s                                                                       #\n");  
    printf("\n#                                                                                      #\n"); 
    printf("\n########################################################################################\n");  
    printf("\nQual sua opcao?:"); 
    scanf("%c",&op); 
    getchar();  
    return op;
}    


char modulo_entrada_saida(void){  
  char op;  
  do{
     op = tela_entrada_saida();
    switch(op){ 
      case  '1' : entrada_saida(); 
                break;
      case  '2' : alterar_e_s(); 
                break;  
      case  '3' : excluir_e_s(); 
                break; 
    }
  } while (op != '3'); 
  return 0; 
}  


char entrada_saida(void){   
    system("clear||cls");
    printf("\n");    
    printf("\n########################################################################################\n"); 
    printf("\n#                                                                                      #\n");
    printf("\n#                    = = = = =  Entrada/Saída de veículos = = = = =                    #\n");
    printf("\n#  Marca do veículo:                                                                   #\n"); 
    printf("\n#  Placa do veículo:                                                                   #\n"); 
    printf("\n#  Cor do veículo:                                                                     #\n");  
    printf("\n#                                                                                      #\n"); 
    printf("\n########################################################################################\n");  
    getchar();  
    return 0;
}  


  void alterar_e_s(void){  
     system("clear||cls");
     printf("\n");  
     printf("\n########################################################################################\n");  
     printf("\n#                                                                                      #\n");  
     printf("\n# Placa do veículo para alterar:                                                       #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n");  
     printf("\n");  
     getchar();  
     return;
}


  void excluir_e_s(void){  
     system("clear||cls");
     printf("\n");  
     printf("\n########################################################################################\n");  
     printf("\n#                                                                                      #\n"); 
     printf("\n# Placa do veículo para excluir:                                                       #\n"); 
     printf("\n#                                                                                      #\n"); 
     printf("\n########################################################################################\n");  
     printf("\n");   
     getchar();  
     return;
}

