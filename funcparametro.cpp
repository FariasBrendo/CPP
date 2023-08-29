#include <stdio.h>
#include <stdlib.h>

void mostraSuc(int numero){
printf("\n o sucessor de %d eh %d", numero, numero+1);
}

int retornaAnt (int numero){
    return numero - 1;

}

int main (){

int a;

printf("digite um valor:");

scanf("%d",&a);

mostraSuc(a);

printf("\n o antecessor de %d eh %d",a, retornaAnt(a));



    return 0;
}
