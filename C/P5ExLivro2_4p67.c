/* o programa ir� calcular o produto de tr�s n�meros inteiros */
#include <stdio.h>
main (){
int x, y, z, resultado;
printf("Digite tres numeros: ");
scanf("%d%d%d", &x, &y, &z);
resultado = x*y*z;
printf("O produto eh: %d", resultado);
return 0;
}
