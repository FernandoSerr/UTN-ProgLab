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
	char mensajeContinuar;

	acumulador = 0;
	contador = 0;

	do{
		printf("Ingrese un n�mero");
		scanf("%d",&numero); /* El & sirve para buscar la ubicaci�n de la variable.*/
		acumulador = acumulador + numero;
		contador++;

		printf("�Quiere ingresar otro n�mero? Responda: s / n");
		scanf("%s",&mensajeContinuar);
	}
	while(mensajeContinuar == 's');

	resultado = acumulador / contador;

	printf("El promedio de los n�meros es %d",resultado);

	return EXIT_SUCCESS;
}
