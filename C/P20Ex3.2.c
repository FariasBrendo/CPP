#include <stdio.h>

main(){
int x,y,z, soma, contagem = 1;
float total;
    printf("digite 3 numeros inteiros:\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("Os valores sao x = %d, y = %d e z = %d \n",x,y,z);
    printf("A soma dos valores eh: %d\n", soma = x+y+z);
    x++;
    soma *= 2;
    printf("O novo valor de soma eh: %d \n", soma);
    contagem++;
    total=3.14159;
    printf("O valor de total eh : %.3f", total);
    x--;

return 0;
}


