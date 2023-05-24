#include <stdio.h>
#include <stdlib.h>

char* inverter(char vet[]){
    int i, aux, fim, tam = strlen(vet);
    char *novo = malloc((tam + 1) * sizeof(char));

    fim = tam - 1;
    for(i = 0; i < tam; i++){
        novo[fim] = vet[i];
        fim--;
    }
    novo[i] = '\0';
    return novo;
}

int main(){
    int i=0;
    char palavra[25] = {};
    char *p;

    printf("Digite a palavra a ser invertida:\n");
    for ( i=0; i<25; i++ ) {
      scanf( "%c", &palavra[ i ] );}
    //inverter(palavra);
    printf("%s\n", palavra);

    p = inverter(palavra);
    printf("%s\n", p);

    return 0;
}
