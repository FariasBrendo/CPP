/*2.19 Escreva um programa em C que receba três números inteiros diferentes digitados no teclado
e imprima a soma, a média, o produto, o menor e o maior desses números. Use a instrução if
somente na forma ensinada neste capítulo. A tela de diálogo deve aparecer como se segue:*/
#include <stdio.h>
main (){
int a, b, c;
printf("Digite 3 numeros: \n");
scanf("%d %d %d",&a,&b,&c);
printf("Os numeros digitados sao: \n");
printf("A soma dos 3 numeros eh: %d\n",a+b+c);
printf("A media dos 3 numeros eh: %d\n",(a+b+c)/3);
printf("A multiplicacao dos 3 numeros eh: %d\n", a*b*c);
if (a < b || a < c)
    printf("O numero %d eh o menor numero\n",a);

}
