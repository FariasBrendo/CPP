// Para ler e escrever dados em C, utilizamos os seguintes m�todos da classe Console:
// - scanf(): l� o(s) dado(s) de Entrada (Inputs) do usu�rio;
// - printf(): imprime um texto de Sa�da (Output) no console;
// - A fun��o getchar() retorna o c�digo ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main() {
    float bonus, desconto, salarioBase, gratificacao, imposto, salarioFinal;
    scanf("%f", &salarioBase);
    desconto =  salarioBase * IMPOSTO;
    bonus = salarioBase * GRATIFICACAO;
    salarioFinal = (salarioBase+bonus)-desconto;
    printf("Salario final: %.2f", salarioFinal);

    //TODO: Calcule a gratifica��o, o imposto e o sal�rio final. Em seguida print no console o sal�rio final.


    return 0;
}
