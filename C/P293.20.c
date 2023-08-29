#include <stdio.h>
main(){
int sentinela;
float capital, taxa, dias;
while(sentinela != 2){
    printf("Entre com o valor do emprestimo: \n");
    scanf("%f",&capital);
    printf("Entre com a taxa de juros: \n");
    scanf("%f", &taxa);
    printf("Entre com o periodo do emprestimo em dias: \n");
    scanf("%f", &dias);
    printf("O valor do juros eh: R$ %.2f \n",(capital*taxa*dias)/365);
    printf("Deseja continuar? 1 para sim ou 2 para nao \n");
    scanf("%d", &sentinela);

}

return 0;
}
