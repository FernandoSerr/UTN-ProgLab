/*
 ============================================================================
 Name        : Funciones.c
 Author      : FSerrano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LibreriaOperaciones.h"

/**
 * RETORNO - NOMBRE - (ARGUMENTOS/PARAMETROS)
 * int float double - char - void - void*
 *
 */

//--------------------------------------------------------------- MAIN
int main(void) {
	setbuf(stdout, NULL);
	float n1;
	float n2;

	float r1;
	float r2;
	float r3;
	float r5;

	printf("Dame n1: ");
	scanf("%f", &n1);
	printf("Dame n2: ");
	scanf("%f", &n2);

	r1 = sumar(n1, n2);
	r2 = restar(n1, n2);
	r3 = multiplicar(n1, n2);

	printf("Suma: %.2f\n", r1);
	printf("Resta: %.2f\n", r2);
	printf("Multiplicacion: %.2f\n", r3);
	if(n2 != 0){
		r5 = dividirFloat(n1, n2);
		printf("Division FLOAT: %f\n", r5);
	}else{
		printf("No se puede dividir por cero");
	}

	return 0;
}
//--------------------------------------------------------------- DESARROLLO




