/*Escreva um programa que leia um número inteiro e então determine e imprima se ele é par
ou ímpar. (Dica: Use o operador resto. Um número par é múltiplo de dois. Qualquer múltiplo
de dois deixa resto zero ao ser dividido por 2.)*/
#include <stdio.h>
main(){
int num1, restodiv;
printf("Digite um numero inteiro: \n");
scanf("%d", &num1);
restodiv = num1%2;
if (restodiv == 0)
    printf("O numero digitado eh par");

}
