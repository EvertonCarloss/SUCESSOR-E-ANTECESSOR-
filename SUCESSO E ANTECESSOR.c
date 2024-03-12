#include <stdio.h>
#include <locale.h>

// SUCESSOR E ANTECESSOR.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, sucessor , antecessor;

printf("DIGITE QUALQUER NÚMERO:  ");
scanf("%d",&n1);

sucessor = n1 + 1;
antecessor = n1 - 1;

printf("ANALISANDO O NÚMERO %d, O SUCESSOR DELE É %d E O ANTECESSOR É %d", n1,sucessor,antecessor);





}
