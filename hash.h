#include <stdio.h>

#define tam 50

typedef struct tabela {
  int chave;
  struct tabela *prox;
} node;

typedef node* Hash[tam];

void inicializaHash(Hash tab);
void inserir_elementos(Hash tab, int num);
int hash(int chave);
void excluir_alemento(node* node);
void imprimeHash(Hash tab);
void numero_aleatorio(Hash tab);
void removeHash(Hash tab, int num);
void imprimeColisao(Hash tab, int pos);
void criar_csv(Hash tab, char name[10]);
