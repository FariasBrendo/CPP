/*2.18 Escreva um programa em C que pe�a ao usu�rio para fornecer dois n�meros inteiros,
obtenha-os do usu�rio e imprima o maior deles seguido das palavras "e maior". Se os
n�meros forem iguais, imprima a mensagem "Estes n�meros sao iguais". Use a instru��o if
somente na forma de sele��o simples que voc� aprendeu neste cap�tulo.
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
