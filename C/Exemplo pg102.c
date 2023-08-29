#include <stdio.h>
main(){
int resultado, contador, aprovados, reprovados;
contador = 1;
aprovados = 0;
reprovados = 0;

while (contador <= 10){
    printf("Entre com o resultado: 1 ou 2 \n");
    scanf("%d",&resultado);
    if (resultado == 1){
        aprovados++;
    }else{
        reprovados++;
    }
    contador++;
}
if (aprovados >= 8){
    printf("A taxa sera cobrada\n");
}
printf("O numero de alunos aprovados foi de: %d , ja o numero de alunos reprovados foi de: %d\n", aprovados, reprovados);

return 0;
}
