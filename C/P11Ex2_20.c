/*2.20 Escreva um programa que leia o raio de um c�rculo e imprima seu di�metro, o valor de sua
circunfer�ncia e sua �rea. Use o valor constante de 3,14159 para "pi". Fa�a cada um destes
c�lculos dentro da instru��o (ou instru��es) printf e use o especificador de convers�o %f
(Nota: Neste cap�tulo, analisamos apenas vari�veis e constantes inteiras. No Cap�tulo 3
analisaremos n�meros de ponto flutuante, i.e., valores que podem possuir pontos decimais.)*/
#include <stdio.h>
main(){
int raio, area, diametro;
float circuferencia,pi = 3.1459;
printf("Digite o raio de um circulo: \n");
scanf("%d",&raio);
diametro = 2*raio;
printf("O diametro eh %d \n",diametro);
circuferencia = 2*pi*raio;
printf("O valor da circuferencia eh: %f \n",circuferencia);
}
