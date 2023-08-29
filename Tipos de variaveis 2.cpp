#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//C++
#include <iostream>
#include <string>

using namespace std;

int main (){
    int vetor [3], cont,i,j;

    vetor [0] = 10;
    vetor [1] = 20;
    vetor [2] = 30;

    for (cont= 0; cont < 3; cont++){
        //printf("%d \n", vetor[cont]);
        cout << vetor[cont] << "\n";
    }

    cont=0;

    while(cont < 3){
        printf("%d \n", vetor[cont]);
        cont++;
    }

    int matriz [3][3] = {1,2,3,4,5,6,7,8,9};
    //p percorrer linhas e colunas usa 2 for
    for (i= 0; i < 3; i++){
            for (j= 0; j < 3; j++){
        //printf("%d \n", vetor[cont]);
        cout << matriz[i] [j] ;
            }
            cout << "\n";
    }}
