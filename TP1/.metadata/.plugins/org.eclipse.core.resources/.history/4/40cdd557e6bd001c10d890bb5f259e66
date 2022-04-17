/*
 * validacionesTP1.c
 *
 *  Created on: 16/04/2022
 *      Author: Alumno
 */

#include <stdio.h>
#include <stdlib.h>


float validacionFloat()
{
	int ingresoValido;
	float numeroFloat;

	fflush(stdin);
	ingresoValido = scanf("%.2f", &numeroFloat);

	while(!ingresoValido || numeroFloat <= 0)
	{
		printf("Ingreso invalido, vuelva a ingresar el número(debe ser mayor a 0).");
		fflush(stdin);
		ingresoValido = scanf("%f", &numeroFloat);
	}

	return numeroFloat;
}

int validacionInt()
{
	int ingresoValido;
	int numeroInt;

	fflush(stdin);
	ingresoValido = scanf("%d", &numeroInt);

	while(!ingresoValido || numeroInt <= 0)
	{
		printf("Ingreso invalido, vuelva a ingresar el número(debe ser mayor a 0).");
		fflush(stdin);
		ingresoValido = scanf("%d", &numeroInt);
	}

	return numeroInt;
}
