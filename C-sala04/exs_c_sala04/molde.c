#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma(int p_n1, int p_n2){
    return p_n1, p_n2;
}
int main(){
setlocale(LC_ALL, "Portuguese_Brazil.1252");

int  n1, n2, res;

printf("manda o numero 1: ");
scanf(" %d", n1);

printf("manda o numero 2: ");
scanf("%d", n2);

res = soma(n1, n2);
printf("o resultado da soma entra %d + %d = %d\n", n1, n2, res);

    
    system("pause");
    return 0;

}