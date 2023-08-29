#include <stdio.h>
main(){
int produto = 5, resultado = 5, x = 5;
produto *= x++;
resultado = ++x + x;
printf("Os valores das variaveis sao %d e %d \n", produto, resultado);
return 0;
}
