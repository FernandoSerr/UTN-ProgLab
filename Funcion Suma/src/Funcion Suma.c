/*
 ============================================================================
 Name        : Funcion.c
 Author      : FSerrano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// --------------------------------------------CABECERA
float Suma(float numA, float numB);

//---------------------------------------------MAIN
int main(void) {

	setbuf(stdout,NULL);

	float resultado;
	resultado = Suma(-2,8);
	printf("%.2f", resultado);

	return 0;
}

//---------------------------------------------DESARROLLO
float Suma(float numA, float numB){
	float rtn;
	rtn = numA + numB;

	return rtn;
}

