#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_Brazil.1252");

int  i, numero;

printf("informe um numero da tabuada: \n");
scanf("%d", &numero);
printf("\n === T A B U A D A - A B E N Ç O A D A, benza ===");
printf("\n==================");

for(i = 0 ; i<= 10; i++){
printf("\n %d X %d = %d", numero, i, (numero * i));

}
printf("\n===================\n\n\n");

    
    system("pause");
    return 0;
}