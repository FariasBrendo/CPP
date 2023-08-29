#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta {
    string cor;
    string nome;
};

int main(){

 fruta *primeiraFruta = new fruta;
 primeiraFruta-> cor = "Amarela";
 primeiraFruta-> nome = "banana";

 cout << "Fruta: " << primeiraFruta-> nome << "\nCor:" << primeiraFruta-> cor ;

 fruta *ponteiroListaDeFrutas = new fruta [2];

 ponteiroListaDeFrutas [0].cor = "Vermelho";
 ponteiroListaDeFrutas [0].nome = "Morango";
 ponteiroListaDeFrutas [1].cor = "Verde";
 ponteiroListaDeFrutas [1].nome = "Kiwi";

 int cont;
 for(cont=0; cont < 2; cont++){
    cout << "\nFruta: " << ponteiroListaDeFrutas[cont].nome << "\ncor" << ponteiroListaDeFrutas[cont].cor;
 }
}
