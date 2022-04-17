/*
 * calculosTP1.c
 *
 *  Created on: 16/04/2022
 *      Author: Alumno
 */

#include <stdio.h>
#include <stdlib.h>



float calculoPorcentual(float numero, float porcentaje)
{
	return numero * (1 + porcentaje/100);
}



float calculoRelacion(float numerador, float denominador)
{
	if(denominador)
	{
		return numerador / denominador;
	}

	return 0;
}
