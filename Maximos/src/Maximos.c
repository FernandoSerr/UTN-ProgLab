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
		printf("\nIngrese un n�mero");
		fflush(stdin);
		scanf("%d",&numero);


		if(bandera == TRUE){
			// En lugar de usar bandera podemos usar el contador == 0 como condici�n de 1er ingreso
			maximo = numero;
			minimo = numero;
			printf("\nEl m�ximo es %d",numero);
			printf("\nEl m�nimo es %d",numero);
			bandera = FALSE;
		}
		else if(numero > maximo){
			maximo = numero;
			printf("\nEl nuevo m�ximo es %d",numero);
		}
		else if(numero < minimo){
			minimo = numero;
			printf("\nEl nuevo m�nimo es %d",numero);
		}

	}

	return EXIT_SUCCESS;
}
