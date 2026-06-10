#include <stdio.h>

int main() {
    char cpf[12];
    int nums[11];
    int soma = 0, resto;
    int dig1, dig2;

    printf("Digite o CPF (apenas numeros): ");
    scanf("%11s", cpf);

    for (int i = 0; i < 11; i++) {
        nums[i] = cpf[i] - '0';
    }

    for (int i = 0; i < 9; i++) {
        soma += nums[i] * (10 - i);
    }

    resto = (soma * 10) % 11;
    if (resto == 10) resto = 0;
    dig1 = resto;

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += nums[i] * (11 - i);
    }

    resto = (soma * 10) % 11;
    if (resto == 10) resto = 0;
    dig2 = resto;

    if (dig1 == nums[9] && dig2 == nums[10]) {
        printf("CPF valido!\n");
    } else {
        printf("CPF invalido!\n");
    }

    return 0;
}