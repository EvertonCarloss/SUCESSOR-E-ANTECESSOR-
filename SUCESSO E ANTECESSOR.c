#include <stdio.h>
#include <locale.h>

// SUCESSOR E ANTECESSOR.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, sucessor , antecessor;

printf("DIGITE QUALQUER N�MERO:  ");
scanf("%d",&n1);

sucessor = n1 + 1;
antecessor = n1 - 1;

printf("ANALISANDO O N�MERO %d, O SUCESSOR DELE � %d E O ANTECESSOR � %d", n1,sucessor,antecessor);





}
