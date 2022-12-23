#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c, primeiromaior = 0, segundomaior = 0;
    printf("Digite o primeiro numero:\n");
    scanf("%f", &a);
    primeiromaior = a;
    printf("Digite o segundo numero:\n");
    scanf("%f", &b);
    if(b>=primeiromaior){
        segundomaior = primeiromaior;
        primeiromaior = b;
    }else{
        segundomaior=b;}
    printf("Digite o terceiro numero:\n");
    scanf("%f", &c);
    if(c>=primeiromaior){
        segundomaior = primeiromaior;
        primeiromaior = c;
    }else{
        if(c>=segundomaior){
        segundomaior = c;
    }
    }
    printf("Os dois maiores valores sao: %.1f %.1f \n", primeiromaior, segundomaior);
    return 0;
}
