#include <stdio.h>
#include <stdlib.h>
int main() {

    int num;
    int bin[7];
    int aux;

    printf("Digite o numero (na base decimal) a ser convertido: ");
    scanf("%d", &num);

    for (aux = 7; aux >= 0; aux--) {
        if (num % 2 == 0) {
            bin[aux] = 0;
            num = num / 2;
        }
        else {
            bin[aux] = 1;
            num = num / 2;
        }
    }

    for (aux = 0; aux <= 7; aux++) {
        printf("%d", bin[aux]);
    }

    return 0;
}
