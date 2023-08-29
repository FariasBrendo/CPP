/* o programa irá calcular o produto de três números inteiros */
#include <stdio.h>
main (){
int x, y, z, resultado;
printf("Digite tres numeros: ");
scanf("%d%d%d", &x, &y, &z);
resultado = x*y*z;
printf("O produto eh: %d", resultado);
return 0;
}
