#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, i, j, somaPrim = 2, quantDiv = 0;
    printf("Digite um numero natural maior que 2:\n");
    scanf("%d", &n);

    for (i = 3; i <= n; i += 2) {
        quantDiv = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                quantDiv++;
            }
            if (quantDiv > 2) {
                break;}
}
            if (quantDiv == 2) {
            somaPrim += i;
        }
    }

    printf("A soma dos numeros primos de 2 a %d = %d\n\n", n, somaPrim);

    system("pause");
    return 0;
}
