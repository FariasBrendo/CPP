#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

bool retornabool();

int main (){

bool variavelb;

variavelb = retornabool();

printf("%d",variavelb);

system("CLS");

}

bool retornabool(){
 return false;
}
