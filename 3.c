#include <stdio.h>
#include <malloc.h>


typedef struct node{
   int valor;
   struct node* proximo;
}no;

int count=0;

void insere_elemento(no **inicio, int valor ) {
   no *aux = NULL;
   if ( *inicio == NULL ) {
        *inicio = (no*) malloc( sizeof( no ) );
        aux = *inicio;
   } else {
        aux = *inicio;
        while ( aux->proximo != NULL )
           aux = aux->proximo;
         aux->proximo = (no*) malloc( sizeof( no ) );
         aux = aux->proximo;
}
aux->valor = valor;
aux->proximo = NULL;
}

void imprime_lista( no *list ) {
      while ( list != NULL ) {
        printf( " %d ->", list->valor );
        list = list->proximo;
        count++;
}
   printf( "." );
   printf("\n");
   printf("\n O numero total de nos eh: %d\n", count);
}

int main() {
no *list = NULL;
insere_elemento( &list, 10 );
insere_elemento( &list, 25 );
insere_elemento( &list, 6 );
insere_elemento( &list, 9 );
imprime_lista( list );

return 0;
}
