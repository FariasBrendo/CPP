/*Escreva um programa que leia um n�mero inteiro e ent�o determine e imprima se ele � par
ou �mpar. (Dica: Use o operador resto. Um n�mero par � m�ltiplo de dois. Qualquer m�ltiplo
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
