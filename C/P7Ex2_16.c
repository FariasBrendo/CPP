/* 2.16 Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e
imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.   */

#include <stdio.h>
main(){
int x, y, soma, mutiplicacao, subtracao, divisao, resto;
printf("Digite dois numeros inteiros: \n");
scanf("%d%d", &x, &y);
printf("A soma dos numeros eh: %d\n", x+y);
printf("A mutiplicacao dos numeros eh: %d\n", x*y);
printf("A subtracao dos numeros eh: %d\n", x-y);
printf("A divisao dos numeros eh: %d\n", x/y);
printf("O resto da divisao dos numeros eh: %d\n", x%y);

}
