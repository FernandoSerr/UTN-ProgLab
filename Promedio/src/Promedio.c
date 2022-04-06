/*
 ============================================================================
 Name        : Promedio.c
 Author      : FSerrano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	int numero;
	int resultado;
	int acumulador;
	int contador;

	acumulador = 0;

	for(contador=0; contador < 5; contador++){
	printf("Ingrese un número");
	scanf("%d",&numero);
	acumulador = acumulador + numero;
	}

	resultado = acumulador / 5;

	printf("El promedio de los números es %d",resultado);

	return EXIT_SUCCESS;
}
