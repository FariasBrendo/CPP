#include <stdio.h>
main(){
int sentinela;
float vendas, salario = 200, porcentagem = 0.09;
while(sentinela != 2){
printf("Digite o valor em vendas: \n");
scanf("%f", &vendas);
printf("Salario: %.2f \n", (porcentagem * vendas) + salario );
printf("Deseja continuar: 1 para sim ou 2 para nao \n");
scanf("%d", &sentinela);
}
return 0;
}
