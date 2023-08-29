/*2.23 Escreva um programa que leia cinco números inteiros e então determine e imprima o maior e
o menor inteiro do grupo. Use somente as técnicas de programação ensinadas neste capítulo.*/
#include <stdio.h>
main(){
int a,b,c,d,e;
int maior, menor;
printf("Escreva 5 numeros: \n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
menor = a;
if(b < menor)
    menor = b;
if(c < menor)
    menor = c;
if(d < menor)
    menor = d;
if (e < menor)
    menor = e;
printf("O menor numero eh %d \n", menor);
maior = a;
if (b > maior)
    maior = b;
if (c > maior)
    maior = c;
if (d > maior)
    maior = d;
if (e > maior)
    maior = e;
printf("O maior numero eh %d \n", maior);
}
