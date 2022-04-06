/*
 * LibreriaOperaciones.c
 *
 *  Created on: 31 mar. 2022
 *      Author: fserrano
 *      Aca van solo los desarrollos de nuestras funciones que están como prototipo en el .h
 *      y el include a la biblioteca (.h)
 */


#include "LibreriaOperaciones.h"

float sumar(float n1, float n2) {
	float rtn;
	rtn = n1 + n2;

	return rtn;
}

float restar(float n1, float n2) {
	float rtn;

	rtn = n1 - n2;

	return rtn;
}

float multiplicar(float n1, float n2) {
	float rtn;
	rtn = n1 * n2;

	return rtn;
}

float dividirFloat(float n1, float n2) {
	float rtn = 0;

	if(n2 != 0){
		rtn = n1 / n2;
	}

	return rtn;
}
