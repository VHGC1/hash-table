#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

/*
node** criar(){
  
  node** tabela = (node**)malloc(sizeof(node*)*tam);
  
  if(tabela){
    for(int i = 0; i < tam; i++){
      tabela[i] = NULL;
    }
    return tabela;
  }else{
    return NULL;
  }
}
*/

void inicializaHash(Hash tab){
 int i;

 for(i = 0; i < tam; i++){
  tab[i] = NULL;
 }
}

void inserir_elementos(Hash tab, int num){
 int i = 0;
 int chave = hash(num);
 
 node* aux = tab[chave];
 
 while(aux != NULL){
  if(aux->chave == num){
    break;
  }
  aux = aux->prox;
 }
 if(aux == NULL){
  
  aux = (node*)malloc(sizeof(node));

  aux->chave = num;
  aux->prox = tab[chave];
  tab[chave] = aux;
 }
}


int hash(int chave){
  return chave % tam;
}

void excluir_alemento(node* node){
  if(node != NULL){
    free(node);
  }
}

void imprimeHash(Hash tab){
  int  i = 0;
  //int cont = 0;
  
  for(i = 0; i < tam; i++){
    if(tab[i] != NULL){
      printf("\n %d",tab[i]->chave);
      node* aux =tab[i]->prox;
      
      while(aux!=NULL){
        printf(" -> %3d",aux->chave);
        aux=aux->prox;
   }
  }
 }
}

/*
void menu(){
  int op, num_tab;

  

  while(op != 5){
    
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
        //criar()
        break;
      case 2:
        //mostrar(tabela1);
        break;
      case 3:
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
*/