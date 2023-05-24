#include <stdio.h>
#include <stdlib.h>


int ehPerfeito(int n){// 500 250 500
    int i, soma = 0;

    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        return 1;// é perfeito
    else
        return 0;// não é perfeito
}

void imprimeDivisores(int n){
    int i;

    printf("%d = ", n);
    for(i = 1; i < n; i++){
        if(n % i == 0)
            printf("%d, ", i);
    }
    printf("\n");
}

int main() {
    int n, quantidade = 0, perfeito, i = 1;

    while(quantidade < 3){
        perfeito = ehPerfeito(i);
        if(perfeito){
            quantidade++;
            imprimeDivisores(i);
        }
        i++;
        if(i % 50000 == 0)
            printf("%d\n", i);
    }
    system("PAUSE");
    return 0;
}
