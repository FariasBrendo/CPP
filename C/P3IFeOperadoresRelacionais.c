/* Usando a instrunção if
relacionais e operadores de igualdade */
#include <stdio.h>
main(){
int num, num2;
printf("Entre com dois inteiros e lhe direi \n");
printf("o relacionamento que eles satisfazem:");
scanf("%d%d" , &num, &num2);
if (num == num2)
    printf("%d e %d sao iguais\n", num, num2);
if (num != num2)
    printf("%d eh diferente de %d\n", num, num2);
if (num < num2)
    printf("%d eh menor que %d\n", num, num2);
if (num > num2)
    printf("%d eh maior que %d\n", num, num2);
if (num <= num2)
    printf("%d eh menor igual que %d\n", num, num2);
if (num >= num2)
    printf("%d eh maior igual que %d\n", num, num2);
return 0;
}
