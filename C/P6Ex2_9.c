/* 2.9 Escreva uma �nica instru��o ou linha em C que realize cada um dos pedidos seguintes:
a) Imprima a mensagem "Entre com dois n�meros".
b) Atribua o produto das vari�veis beca vari�vel a.
c) Informe que o programa realiza um exemplo de c�lculo de folha de pagamento (i.e., use
um texto que ajude a documentar um programa).
d) Forne�a ao programa tr�s valores inteiros digitados no teclado e coloque esses valores nas
vari�veis inteiras a, b e c.*/

#include <stdio.h>
main(){
int a, b, c, x;
printf("Entre com dois numeros inteiros: \n");
scanf("%d%d", &a,&b);
printf("O produto de %d e %d eh: %d\n", a, b, a*b);
x = (3 * 9 * (3 + (9*3/ (3) ) ) );
printf("%d",x);
}
