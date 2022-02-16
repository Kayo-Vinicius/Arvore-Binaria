#include <stdio.h>
#include <stdlib.h>

struct chave
{
	int cod;
};

typedef struct chave Chave;

struct no
      {
	   Chave chave;
	   struct no *esq;
	   struct no *dir;
	  };

typedef struct no NO;

 NO *inicio()
 {
	return NULL;
 }

 Chave criarChave(int cod)
 {
	 Chave chave;
	 chave.cod = cod;
	 return chave;
 }

 NO *adiciona(NO*raiz, Chave ch)
 {
	 if(raiz == NULL)
	 {
		NO *novoNo = (NO*)malloc(sizeof(NO));
		novoNo->chave = ch;
		novoNo->esq = NULL;
		novoNo->dir = NULL;
		return novoNo;
	 }
	 return raiz;
 }

 void imprimir(NO *raiz)
 {
	 if(raiz != NULL)
	 {
		 printf("%d", raiz->chave.cod);
		 imprimir(raiz->esq);
		 imprimir(raiz->dir);
	 }
 }


int main() {
	
	NO *raiz = inicio();
	raiz = adiciona(raiz, criarChave(10));
	imprimir(raiz);
	
  return 0;
}