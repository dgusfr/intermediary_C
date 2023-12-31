#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct {
 char nome[150];
 char matricula[14];
 float coeficiente;
} aluno;

typedef struct no_mapa {
 char chave[150];
 aluno valor;
 struct no_mapa *proximo;
} item_mapa;

item_mapa* busca( item_mapa *mapa, char* chave ){
   while ( mapa != NULL ) {
     if ( strcmp( mapa->chave, chave ) == 0 )
        return mapa;
     mapa = mapa->proximo;
}
return NULL;}

item_mapa* insere( item_mapa **mapa, char* chave, char* nome, char* matricula, float coeficiente){
    item_mapa *aux = NULL;
  if ( busca( *mapa, chave ) != NULL )
     return NULL;
  if ( *mapa == NULL ){
     *mapa = (item_mapa*) malloc( sizeof( item_mapa ) );
      aux = *mapa;
  }else{
      aux = *mapa;
    while ( aux->proximo != NULL )
      aux = aux->proximo;
      aux->proximo = (item_mapa*) malloc( sizeof( item_mapa ) );
      aux = aux->proximo;
}
    sprintf( aux->chave, chave );
    sprintf( aux->valor.nome, nome );
    sprintf( aux->valor.matricula, matricula );

    aux->valor.coeficiente = coeficiente;

    aux->proximo = NULL;

return aux;
}

void imprime_aluno( item_mapa *item ) {
   printf( "[Chave: %s]\n\tNome: %s\n\tMatricula: %s\n\tCoeficiente: %s\n\t",
     item->chave, item->valor.nome,
     item->valor.matricula,
     item->valor.coeficiente);
}

void imprime_mapa( item_mapa *mapa ) {
    while ( mapa != NULL ) {
       imprime_aluno( mapa );
       mapa = mapa->proximo;
}
}

int main() {
   item_mapa *mapa = NULL, *aux = NULL;
   char bmatric[14];

   insere( &mapa, "Ana\0", "Ana Maria da Costa\0", "2016.2.25.635\0", 8.66 );
   insere( &mapa, "Jose\0", "Jose da Silva\0", "2015.1.18.652\00", 7.85 );
   insere( &mapa, "Maria\0", "Maria Augusta Moraes\0", "2014.1.34.782\0", 7.74 );

   imprime_mapa( mapa );

   while ( 1 ) {
     printf( "Digite uma nome ou \"exit\" para sair: " );
     scanf( "%s", &bmatric );
      if ( strcmp( bmatric, "exit" ) == 0 )
         break;
         printf( "\nBusca pela nome %s:\n\n", bmatric );
         aux = busca( mapa, bmatric );
      if ( aux == NULL )
         printf( "Nome %s nao encontrada!!\n\n", bmatric );
      else
         imprime_aluno( aux );
}
    return 0;
}

