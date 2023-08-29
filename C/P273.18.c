#include <stdio.h>
main(){
    int sentinela;
    float numeroConta, saldoInicial, cobrancas, creditos, limiteCredito, novoSaldo;
while (sentinela != 2){
    printf("Entre com o numero da conta: \n");
    scanf("%f",&numeroConta);
    printf("Entre com o saldo inicial: \n");
    scanf("%f",&saldoInicial);
    printf("Entre com o total de cobrancas: \n");
    scanf("%f",&cobrancas);
    printf("Entre com o total de creditos: \n");
    scanf("%f", &creditos);
    printf("Entre com o limite de credito: \n");
    scanf("%f", &limiteCredito);
    printf("Conta: %.2f \n",numeroConta);
    printf("Limite de credito: %.2f \n", limiteCredito);
    printf("Saldo: %.2f", saldoInicial);
    printf("Seu novo saldo eh: %.2f \n", novoSaldo = saldoInicial  + cobrancas - creditos);
    if(novoSaldo >= limiteCredito){
        printf("Limite de credito excedido!!! \n");
    }
     printf("Deseja continuar: 1 para sim ou 2 para nao \n");
     scanf("%d", &sentinela);
}
return 0;
}
