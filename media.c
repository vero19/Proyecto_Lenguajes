#include <stdio.h>

void main(){
	int numero1, numero2, resultado;
	printf("Ingrese un numero: ");
	scanf("%d",&numero1);
	printf("Ingrese otro numero: ");
	scanf("%d",&numero2);
	resultado = (numero1 + numero2) / 2;
	printf("La media es %d",resultado);
	printf(" ");
}
