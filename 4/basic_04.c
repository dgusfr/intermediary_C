#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node{
    int valor;
    struct node *proximo;
}no;

void insere_elemento(no **inicio, int valor){
     no *aux = NULL;
     if(*inicio == NULL){
        *inicio = (no*) malloc(sizeof(no));
        aux = *inicio;
     }else{
        aux = *inicio;
        while(aux->proximo != NULL)
            aux= aux->proximo;
        aux->proximo = (no*) malloc(sizeof(no));
        aux = aux->proximo;
     }
     aux->valor = valor;
     aux->proximo = NULL;
}


void removeElementoX(no **lista, int valor)
{
    no *aux = *lista, *aux2 = NULL;


    while (aux != NULL && aux->valor == valor)
    {
        *lista = aux->proximo;
        free(aux);
        aux = *lista;
    }

    while (aux != NULL)
    {

        while (aux != NULL && aux->valor != valor)
        {
            aux2 = aux;
            aux = aux->proximo;
        }

        if (aux == NULL)
            return;


        aux2->proximo = aux->proximo;

        free(aux);


        aux = aux2->proximo;
    }
}

void imprime_lista( no *list ) {
   while ( list != NULL ) {
      printf( " %d ->", list->valor );
     list = list->proximo;
}
     printf( "." );
}

int main(){
    int val;

    no *list = NULL;
    insere_elemento( &list, 1 );
    insere_elemento( &list, 2 );
    insere_elemento( &list, 6 );
    insere_elemento( &list, 2 );
    insere_elemento( &list, 2 );
    insere_elemento( &list, 9 );
    insere_elemento( &list, 5 );
    imprime_lista( list );
    printf("\n\n");

    printf("Digite um elemento a ser removido:\n");
    scanf("%d", &val);

    removeElementoX(&list, val);
    printf("A lista sem o elemento %d fica:\n", val);
    imprime_lista( list );


    return 0;
}
