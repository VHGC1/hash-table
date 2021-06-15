#include <stdio.h>
#include <stdlib.h>
#include "hash.c"

main(){
  Hash tab1;
  Hash tab2;
  Hash tab3;

  int op, num_tab = 0;

  

  while(op != 5){
    
    printf("No de tabelas %d\n", num_tab);
    
    printf("[ 1 ] Criar tabela\n");
    printf("[ 2 ] Mostrar tabela\n");
    printf("[ 3 ] Unir\n");
    printf("[ 4 ] Verificar existencia\n");
    printf("[ 5 ] Inserir elementos\n");
    printf("[ 6 ] Excluir elementos\n");
    printf("[ 7 ] Sair\n");
    
    printf("Digitar op:");
    scanf("%d", &op);

    switch (op){
      case 1:
        printf("Entre com o numero desejado de tabelas (max 3):");
        scanf("%d", &num_tab);

        if(num_tab == 1){
          inicializaHash(tab1);
        }

        if (num_tab ==2){
          inicializaHash(tab1);
          inicializaHash(tab2);     
        }

        if(num_tab == 3){
          inicializaHash(tab1);
          inicializaHash(tab2);
          inicializaHash(tab3);
        }
        

        //criar()
        break;
      case 2:
        printf("[ 1 ] abrir csv");
        printf("[ 2 ] imprimir");
        imprimeHash(tab1);
        break;
      case 3:
        for(int i = 0; i < tam; i++){
            int a = rand() % 100;
            inserir_elementos(tab1, a);
          }
        //unir();
        break;
      case 4:
        //existe();
        break;
      case 5:
        //inserir_elementos();
        break;
      case 6:
        //excluir_elemento();
        break;
      case 7:
        exit(1);  
    }
  }
}
 

