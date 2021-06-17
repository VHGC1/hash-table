#include <stdio.h>
#include <stdlib.h>
#include "hash.c"

main(){
  Hash tab1;
  Hash tab2;
  Hash tab3;

  int op;
  int num_tab = 0;
  int num_del, num_ins;

  FILE* arquivo;

 

  while(op != 8){
    
    printf("No de tabelas %d\n", num_tab);
    
    printf("[ 1 ] Criar tabela\n");
    printf("[ 2 ] Criar csv\n");
    printf("[ 3 ] Imprimir tabela\n");
    printf("[ 4 ] Unir\n");
    printf("[ 5 ] Verificar existencia\n");
    printf("[ 6 ] Inserir elementos\n");
    printf("[ 7 ] Excluir elementos\n");
    printf("[ 8 ] Sair\n");
    
    printf("\nDigitar op:");
    scanf("%d", &op);

    switch (op){
      case 1:
        printf("Entre com o numero desejado de tabelas (max 3):");
        scanf("%d", &num_tab);

        if(num_tab == 1){
          inicializaHash(tab1);
          numero_aleatorio(tab1);
        }

        if (num_tab == 2){
          inicializaHash(tab1);
          numero_aleatorio(tab1);

          inicializaHash(tab2);
          numero_aleatorio(tab2);
        }

        if(num_tab == 3){
          inicializaHash(tab1);
          numero_aleatorio(tab1);

          inicializaHash(tab2);
          numero_aleatorio(tab2);

          inicializaHash(tab3);
          numero_aleatorio(tab3);
        }
        
        break;
      case 2:
        printf("Mostrar tabela\n");
        printf("[ 1 ] tabela 1\n");
        printf("[ 2 ] tabela 2\n");
        printf("[ 3 ] tabela 3\n");
        
        printf("Opcao:");
        scanf("%d", &op);

        if(op == 1){
          criar_csv(tab1, "tab1.csv");
          system("tab1.csv");
        }
        if (op ==2){
          criar_csv(tab2, "tab2.csv");
          system("tab2.csv");
        }
        if(op == 3){
          criar_csv(tab3, "tab3.csv");
          system("tab3.csv"); 
        }
        break;

      case 3:
        printf("Imprimir tabela\n");
        printf("[ 1 ] tabela 1\n");
        printf("[ 2 ] tabela 2\n");
        printf("[ 3 ] tabela 3\n");
        
        printf("Opcao:");
        scanf("%d", &op);

        if(op == 1){
          imprimeHash(tab1);
        }
        if (op ==2){
          imprimeHash(tab2);
        }
        if(op == 3){
          imprimeHash(tab3);
        }
        break;  
      case 4:
        //Hash tab_merge;
        //unir();
        break;
      case 5:
        //existe();
        break;
      case 6:
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
      case 7:
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
      case 8:
        exit(1);  
    }
    system("cls");
  }
}
 

