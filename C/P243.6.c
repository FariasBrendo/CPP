#include <stdio.h>
main(){
int x, y, i = 1, potencia = 1;
printf("Digite um numero inteiro: \n");
scanf("%d%d",&x, &y);
potencia *= x;
y++;
if (y <= x){
    printf("O valor de y eh menor ou igual ao valor de x\n");
}
printf("O valor de potencia eh: %d\n", potencia *= x);
return 0;
}
