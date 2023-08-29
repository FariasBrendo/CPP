#include<stdio.h>

int main() {
    float precoFabrica, lucro, impostos, precoFinal;
    float percentualLucro, percentualImpostos, porcentagemLucro, porcentagemImpostos;

    scanf("%f", &precoFabrica);
    scanf("%f", &percentualLucro);
    scanf("%f", &percentualImpostos);

    //TODO: Calcule o lucro, o imposto e o preço final. Em seguida print os três, em sequência um abaixo do outro, no
    // console
    porcentagemLucro = percentualLucro/100;
    porcentagemImpostos = percentualImpostos/100;
    lucro = precoFabrica * porcentagemLucro;
    impostos = precoFabrica * porcentagemImpostos;
    precoFinal = precoFabrica + lucro + impostos;

    printf("Lucro: R$ %.2f \n", lucro);
    printf("Impostos: R$ %.2f \n", impostos);
    printf("Preco final: R$ %.2f \n", precoFinal);

    return 0;
}
