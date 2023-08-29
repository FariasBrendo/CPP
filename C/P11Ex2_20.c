/*2.20 Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua
circunferência e sua área. Use o valor constante de 3,14159 para "pi". Faça cada um destes
cálculos dentro da instrução (ou instruções) printf e use o especificador de conversão %f
(Nota: Neste capítulo, analisamos apenas variáveis e constantes inteiras. No Capítulo 3
analisaremos números de ponto flutuante, i.e., valores que podem possuir pontos decimais.)*/
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
