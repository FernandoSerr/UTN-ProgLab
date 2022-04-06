/*
 ============================================================================
 Name        : Maximos.c
 Author      : FSerrano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_SOLICITADA 10
#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int maximo;
	int minimo;
	int contador;
	int bandera = TRUE;

	for(contador = 0; contador < CANTIDAD_SOLICITADA; contador++){
		printf("\nIngrese un número");
		fflush(stdin);
		scanf("%d",&numero);


		if(bandera == TRUE){
			// En lugar de usar bandera podemos usar el contador == 0 como condición de 1er ingreso
			maximo = numero;
			minimo = numero;
			printf("\nEl máximo es %d",numero);
			printf("\nEl mínimo es %d",numero);
			bandera = FALSE;
		}
		else if(numero > maximo){
			maximo = numero;
			printf("\nEl nuevo máximo es %d",numero);
		}
		else if(numero < minimo){
			minimo = numero;
			printf("\nEl nuevo mínimo es %d",numero);
		}

	}

	return EXIT_SUCCESS;
}
