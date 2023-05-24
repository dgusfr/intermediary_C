#include <stdio.h>
#include <math.h>
#define MAX 20

void mostrar_matriz(int matriz[][MAX], int orden);
int determinante(int matriz[][MAX], int orden);
int cofactor(int matriz[][MAX], int orden, int fila, int columna);

int main()
{
   int matriz[MAX][MAX];
   int orden, i, j;

   printf("Qual aordem da matriz (maximo %d): ", MAX);
   scanf("%d", &orden);
   while (orden < 0 || orden > MAX) {
   	printf("\nEl Ordem da matriz não pode ser maior que %d\n", MAX);
   	printf("Escreva novamente a ordem da matriz:\n");
      scanf("%d", &ordem);
   }

   printf("\nEntre com os argumentos da matriz:\n\n");
   for (i = 0; i < orden; i++) {
      for (j = 0; j < orden; j++) {
         scanf("%d", &matriz[i][j]);
      }
   }

   printf("\nMostrando a matriz:\n");
   mostrar_matriz(matriz, orden);

   printf("\nO determinante e: %d\n", determinante(matriz, orden));

   getchar();
   getchar();
   return 0;
}

void mostrar_matriz(int matriz[][MAX], int orden)
{
	int i, j;

	printf("Orden: %d\n", orden);
   for (i = 0; i < orden; i++) {
      for (j = 0; j < orden; j++) {
      	printf("\t%d", matriz[i][j]);
      }
      printf("\n");
   }
}


int determinante(int matriz[][MAX], int orden)
{
   int det = 0.0, j;

   if (orden == 1) {
      det = matriz[0][0];
   } else {
      for (j = 0; j < orden; j++) {
         det = det + matriz[0][j] * cofactor(matriz, orden, 0, j);
      }
   }

   return det;
}


int cofactor(int matriz[][MAX], int orden, int fila, int columna)
{
   int submatriz[MAX][MAX];
   int n = orden - 1;
   int i, j;

   int x = 0;
   int y = 0;
   for (i = 0; i < orden; i++) {
      for (j = 0; j < orden; j++) {
         if (i != fila && j != columna) {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }

   return pow(-1.0, fila + columna) * determinante(submatriz, n);
}
