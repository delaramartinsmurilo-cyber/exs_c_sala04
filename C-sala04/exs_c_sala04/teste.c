#include <stdio.h>

int main() {
    char nome[50];
    int numero;

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nNome: %s\n", nome);

    if (numero < 45) {
        printf("\nGato:\n");
        printf(" /\\_/\\\\\n");
        printf("( o.o )\n");
        printf(" > ^ <\n");
    } else {
        printf("\nCachorro:\n");
        printf(" / \\__\n");
        printf("(    @\\___\n");
        printf(" /         O\n");
        printf("/   (_____/\n");
        printf("/_____/   U\n");
    }

    return 0;
}