/* 2.16 Escreva um programa que pe�a ao usu�rio para digitar dois n�meros, obtenha-os do usu�rio e
imprima a soma, o produto, a diferen�a, o quociente e o resto da divis�o dos dois n�meros.   */

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
