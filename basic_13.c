#include <stdio.h>
#include <stdlib.h>

float classificacao_imc(float r){
   if(r < 17){
    printf("Magreza extrema");
   }else if(17 < r < 18.5){
    printf("Magreza saudavel");
   }else if(18.5 <= r < 25.0){
    printf("Saudavel");
   }else if(25.0 <= r <= 30){
    printf("Acima do peso");
   }else{
    printf("Obesidade");}
}

float imc( float m, float a ) {
    float r = 0;
    r = ((m)/(a * a));
    return r;
}
int main(){
    float m = 0, a = 0, r = 0, d = 0;
    printf("Digite a massa (em kg):\n " );
    printf("Digite com PONTO no lugar da Virgula\n");
    scanf( "%f", &m);
    printf( "Digite a altura (em metros):\n " );
    scanf( "%f", &a);

    r = imc(m, a);
    printf("O seu imc eh: %.2f\n", r);
    classificacao_imc(r);
    classificacao_imc;
    return 0;
}
