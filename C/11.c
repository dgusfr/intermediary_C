#include <stdio.h>
#include <stdlib.h>

void swap( float *x, float *y ) {
   float tem = 0;
    tem = *x;
   *x = *y;
   *y = tem;
}
int main(){
    float a, b;
    printf("Digite o primeiro numero:\n");
    scanf("%f", &a);
    printf("Digite o segundo numero:\n");
    scanf("%f", &b);
    printf("Os numeros digitados sao: %.1f %.1f\n\n", a, b);
    swap(&a, &b);
    printf("As variaveis com numeros trocados ficam: %.1f %.1f\n", a, b);
    return 0;
}



