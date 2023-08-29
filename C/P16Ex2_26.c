/*Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é
múltiplo do segundo. (Dica: Use o operador resto.)*/
#include <stdio.h>
main(){
int num1,num2,restodiv;
printf("Digite dois numeros: \n");
scanf("%d %d", &num1, &num2);
restodiv = num1%num2;
if (restodiv == 0)
    printf("%d eh mutiplo de %d", num1, num2);

}
