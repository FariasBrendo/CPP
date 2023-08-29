/*2.18 Escreva um programa em C que peça ao usuário para fornecer dois números inteiros,
obtenha-os do usuário e imprima o maior deles seguido das palavras "e maior". Se os
números forem iguais, imprima a mensagem "Estes números sao iguais". Use a instrução if
somente na forma de seleção simples que você aprendeu neste capítulo.
*/
#include <stdio.h>
main(){
int a, b;
printf("Digite dois numeros inteiros: \n");
scanf("%d %d",&a,&b);
printf("os numeros sao: %d, %d\n",a,b);
if (a > b)
    printf("%d eh maior que %d\n",a,b);
if (b > a)
    printf("%d eh maior que %d\n",b,a);
if (a == b)
    printf("%d eh igual a %d\n",a,b);
}
