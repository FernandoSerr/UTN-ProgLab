/*
 ============================================================================
 Name        : Suma.c
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

	int primerNumero;
	int segundoNumero;
	int resultado;

	printf("Ingrese un número");
	scanf("%d",&primerNumero);

	printf("Ingrese un número");
	scanf("%d",&segundoNumero);

	resultado = primerNumero + segundoNumero;

	printf("La suma de los números es %d",resultado);

	return EXIT_SUCCESS;
}
