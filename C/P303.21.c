#include <stdio.h>
main(){
int sentinela;
float horasTrabalhadas, valorHora, salario;
while(sentinela != 2){
    printf("Entre com o numero de horas trabalhadas: \n");
    scanf("%f", &horasTrabalhadas);
    printf("Entre com o valor da hora normal do trabalhador: \n");
    scanf("%f" ,&valorHora);
    printf("Salario: %.2f ", horasTrabalhadas * valorHora);
    printf("Deseja continuar: 1 para sim ou 2 para nao \n");
    scanf("%d", sentinela);
}
return 0;
}
