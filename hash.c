#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>>
#include "hash.h"


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

void criarArquivo(FILE* arquivo){
 
 arquivo = fopen("hash.txt", "r");
 
 if(arquivo == NULL){
  arquivo = fopen("hash.txt", "w");
  fclose(arquivo);
 }else{
  return;
 }
}


void reescreveArquivo(FILE* arquivo){
 arquivo = fopen("hash.txt", "w");
 fclose(arquivo);
}

void escreverArquivo(FILE* arquivo, int elemento){
 arquivo = fopen("hash.txt", "a");
 fprintf(arquivo,"%3d\n",elemento);
 fclose(arquivo);
}

int carregaArquivo(Hash tab){
 int elemento;
 FILE* arquivo;
 arquivo = fopen("hash.txt","r");
 fseek(arquivo,0,SEEK_END);
 if(ftell(arquivo) == 0){
  return 0;
 }
 fseek(arquivo,0,SEEK_SET);
 if(arquivo == NULL){
  return 0;
 }else{
  while(!feof(arquivo)){
   fscanf(arquivo,"%d",&elemento);
   inserir_elementos(tab,elemento);
  }
  system("cls");
 }
 fclose(arquivo);
 return 1;
}

void numero_aleatorio(){
  int num;
  FILE* arquivo;
  srand(time(NULL));
  
  for(int i = 0; i < tam; i++){
    double maior = pow(2,16), menor = pow(2,2);
    double range = maior-(-menor);
    double div = RAND_MAX / range;
    num = menor + (rand() / div);
    escreverArquivo(arquivo, num);
  }
}

void imprimeColisao(Hash tab, int pos){
 node* aux = tab[pos];
 if(aux == NULL)
 {
  printf("Esta posicao esta vazia!");
  return;
 }else
 {
  if(aux != NULL)
  {
   printf("%3d",aux->chave);
   while(aux->prox != NULL)
   {
    printf(" -> %d",aux->prox->chave);
    aux = aux->prox;
   }
  }
 }
}

void removeHash(Hash tab, int num){
 int pos = hash(num);
 int ex ;
 if(pos > tam){
  printf("\nEsta posicao nao existe na tabela!");
 }else{
  if(tab[pos] == NULL){
   printf("Esta chave esta vazia!");
  }else{
   printf("\n\n\n");
   imprimeColisao(tab,pos);
   printf("\n\nQual registro deseja apagar =  ");
   scanf("%d",&ex);
   if(tab[pos]->chave == ex){
    if(tab[pos]->prox == NULL){
     tab[pos] = NULL;
     return;
    }
    if(tab[pos]->prox != NULL){
     tab[pos]->chave = tab[pos]->prox->chave;
     tab[pos]->prox = tab[pos]->prox->prox;
     return;
    }
   }else{
   if(tab[pos]->chave != ex){
    if(tab[pos]->prox == NULL){
     printf("\nRegistro nao encontrado!");
     getch();
     return;
    }else{
    node* ant = NULL;
    node* aux = tab[pos]->prox;
    while(aux->prox != NULL  && aux->chave != ex){
     ant = aux;
     aux = aux->prox;
    }
    if(aux->chave != ex){
     printf("\nRegistro nao encontrado!\n");
     return;
    }else{
      if(ant == NULL){
        tab[pos]->prox = aux->prox;
      }else{
        ant->prox = aux->prox;
      }
      aux = NULL;
      free(aux);
            }
          }
        }
      }
    }
  }
}

