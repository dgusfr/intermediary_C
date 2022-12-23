#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[250], ch;
    int count = 0;

    printf("Informe os caracteres: ");
    fgets(str, sizeof(str), stdin);

    printf("Informe o caractere que deseja buscar: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Quantidade de %c = %d", ch, count);
    return 0;
}



