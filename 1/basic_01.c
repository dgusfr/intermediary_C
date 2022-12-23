#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float num = 0;

    while( num <= 0){
          printf("Digite um numero positivo inteiro:\n");
          scanf("%f", &num);
    if( num == 0){
        printf("O numero Digitado eh zero, tente novamente!\n");}
    if(num < 0){
        printf("O numero Digitado eh negativo, tente novamente!\n");}
    if (num == (int)num){
          for ( i=1; i<=num; i++ )
             printf( "%d\t", i );
             printf( "\n" );
    } else{
        printf("O numero digitado nao eh inteiro \n");}
}
return 0;
}



