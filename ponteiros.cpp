#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <string>

int main (){

int a;

scanf("%d", &a);
printf("O valor de a e = %d \n", a);

int *ponteiro;

ponteiro = &a;

printf("Valor de a: %d \n", a);

*ponteiro = 40;

printf("Novo Valor de a: %d", a);



}
