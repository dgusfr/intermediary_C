#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {

    int a = 0, b = 0, c= 0;
    int raiza = 0, raizb = 0, raizc = 0;
    int peri = 0;
    char triangulo;
    float semiperimetro = 0;
    float area = 0;
//se os valores numéricos permitem a existência de um triângulo;se o triângulo é equilátero, isósceles ou escaleno;
    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c){
            triangulo = 'Equilatero';
            printf("Equilatero\n");
        }else if(a == b || a == c || b == c){
            triangulo = 'Isosceles';
            printf("Isosceles\n");
        }else if(a != b || a != c || b != c){
                triangulo = 'Escaleno';
                printf("Escaleno\n");
        }else{
        printf("Os 3 lados NAO formam um trinagulo!\n");}
    }

// perimetro, semi perimetro  e area do triangulo
peri = a + b + c;

semiperimetro = ((peri) / 2);

area = sqrt(semiperimetro*(semiperimetro-a)*(semiperimetro-b)*(semiperimetro-c));

printf("O perimetro do triangulo eh: %d\n", peri);
printf("A area do triangulo eh: %d\n", area);
// angulos do triangulo
  if(((b*b) + (c*c) - (a*a)) > 0){
    printf("Os angulos formam um  triangulo Acutangulo");}
  else if((b*b) + (c*c) - (a*a) == 0){
    printf("Os angulos formam um  triangulo Retangulo");}
  else{
    printf("Os angulos formam um  triangulo Obtusangulo");}
}













