#include <stdio.h>
main(){
float km, litros = 0, kmPorLitros, somaKM_litros = 0, media;
int contador = 0,  sentinela;
while(sentinela != 2){
    printf("Digite a quantidade de litros consumidos : \n");
    scanf("%f", &litros);
    printf("Digite os kilometros rodados: \n");
    scanf("%f", &km);
    kmPorLitros = km/litros;
    printf("A taxa de Km/Litros desse tanque foi de: %.2f\n",kmPorLitros);
    somaKM_litros+=kmPorLitros;
    contador++;
    printf("Deseja continuar ? (1 para sim ou 2 para nao):\n");
    scanf("%d", &sentinela);

}
printf("A media geral de Km/litros foi de: %f", media = (somaKM_litros/contador));
return 0;
}
