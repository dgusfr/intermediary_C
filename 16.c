#include <stdio.h>
#include <stdlib.h>
int conta_quatro=0, conta_cinco=0, conta_g=0;

int funcao_g(int n){
conta_g = conta_g + 1;
if(n==4){
    conta_quatro = conta_quatro + 1;
}
if(n==5){
    conta_cinco = conta_cinco + 1;
}
    if(n == 0)
        return 1;
    if(n==1)
        return 3;
    if(n==2)
        return (2 * (funcao_g(n-1)));
    if(n==3)
        return(2 * (funcao_g(n-1)));
    else
        return (funcao_g(n-1) + funcao_g (n-2));
}

int main () {

    int n;

    printf("Digite um numero inteiro positivo:\n\n");
    scanf("%d", &n);

    printf("O valor de g(%d)= %d\n", n, funcao_g(n));
    printf("para o valor de g(%d) a funcao g e chamada %d vezes\n", n, conta_g);
    printf("para o valor de g(%d) a funcao g(4) e chamada %d vezes\n", n, conta_quatro);
    printf("para o valor de g(%d) a funcao g(5) e chamada %d vezes\n", n, conta_cinco);


    return 0;
}
