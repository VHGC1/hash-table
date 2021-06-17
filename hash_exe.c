#include <stdio.h>
#include <stdlib.h>
#include "hash.c"

main(){
  Hash tab1;
  Hash tab2;
  Hash tab3;

  int op, num_tab = 0, num_del, num_ins;

  //FILE* arquivo;
  //criarArquivo(arquivo);
  
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
        
        break;
      case 2:

      printf("Mostrar tabela\n");
      printf("[ 1 ] tabela 1\n");
      printf("[ 2 ] tabela 2\n");
      printf("[ 3 ] tabela 3\n");
      
      scanf("%d", &op);

      if(op == 1){
        printf("[ 1 ] imprimir\n");
        printf("[ 2 ] abrir csv\n");

        printf("Entre com a opcao desejada:\n");
        scanf("%d", &op);

        if(op == 1){
          imprimeHash(tab1);
        }

        if(op == 2){

        }
      }
      
      if (op ==2){
        printf("[ 1 ] imprimir\n");
        printf("[ 2 ] abrir csv\n");

        printf("Entre com a opcao desejada:\n");
        scanf("%d", &op);

        if(op == 1){
          imprimeHash(tab2);
        }

        if(op == 2){

        }
      }

      if(op == 3){
        printf("[ 1 ] imprimir\n");
        printf("[ 2 ] abrir csv\n");

        printf("Entre com a opcao desejada:\n");
        scanf("%d", &op); 

        if(op == 1){
          imprimeHash(tab3);
        }

        if(op == 2){

        }
      }
        
        break;
      case 3:
        //Hash tab_merge;
        //unir();
        break;
      case 4:
        //existe();
        break;
      case 5:

      printf("Remover valor\n");
        printf("[ 1 ] tabela 1\n");
        printf("[ 2 ] tabela 2\n");
        printf("[ 3 ] tabela 3\n");
      
        scanf("%d", &op);

        if(op == 1){
          imprimeHash(tab1);

          printf("Numero a ser inserido:\n");
          scanf("%d", &num_ins);

          inserir_elementos(tab1, num_ins);
        }

        if(op == 2){
          imprimeHash(tab2);

          printf("Numero a ser inserido:\n");
          scanf("%d", &num_ins);

          inserir_elementos(tab2, num_ins);
        }

        if(op == 3){
          imprimeHash(tab3);

          printf("Numero a ser inserido:\n");
          scanf("%d", &num_ins);

          inserir_elementos(tab3, num_ins);         
        }

        break;
      case 6:
        printf("Remover valor\n");
        printf("[ 1 ] tabela 1\n");
        printf("[ 2 ] tabela 2\n");
        printf("[ 3 ] tabela 3\n");
      
        scanf("%d", &op);

        if(op == 1){
          imprimeHash(tab1);

          printf("Numero a ser removido:\n");
          scanf("%d", &num_del);

          removeHash(tab1, num_del);
        }

        if(op == 2){
          imprimeHash(tab2);

          printf("Numero a ser removido:\n");
          scanf("%d", &num_del);

          removeHash(tab2, num_del);
        }

        if(op == 3){
          imprimeHash(tab3);

          printf("Numero a ser removido:\n");
          scanf("%d", &num_del);
          
          removeHash(tab3, num_del);          
        }
        
        break;
      case 7:
        exit(1);  
    }
  }
}
 

