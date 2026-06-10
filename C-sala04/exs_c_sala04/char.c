#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_Brazil.1252");

char cidade[50];
char estado[50];
int ano;
int resp;

printf("digite sua cidade: ");
fgets(cidade, 50, stdin);

printf("digite o ano de nascimento: ");
scanf(" %d ", &ano);

resp = 2026 - ano;

printf("a cidade de %s, estado do(a) %s tem %d anos \n", cidade, estado, resp);

    system("pause");
    return 0;

}