/*
 * menusTP1.c
 *
 *  Created on: 16/04/2022
 *      Author: Alumno
 */

#include <stdio.h>
#include <stdlib.h>


int menu(int kilometros, float precioAerolineas, float precioLATAM, int cargaForzada)
{
	int opcionMenu;
	int opcionValida;

	if(cargaForzada == 3 || cargaForzada == 4)
	{
		return cargaForzada;
	}

	printf("1. Ingresar Kilómetros(km = %dkm) \n", kilometros);
	printf("2. Ingresar Precio de Vuelos(Aerolíneas = $%.2f, Latam = $%.2f) \n", precioAerolineas, precioLATAM);
	printf("3. Calcular todos los costos\n");
	printf("4. Informar resultados\n");
	printf("5. Carga forzada de datos\n");
	printf("6. Salir\n");

	printf("Ingrese opción: ");
	opcionValida = scanf("%d", &opcionMenu);

	if(opcionValida == 0)
	{
		opcionMenu = 0;
	}

	fflush(stdin);
	return opcionMenu;
}


int subMenu(float precioAerolineas, float precioLATAM)
{
	int opcionSubMenu;
	int opcionValidaSubMenu;

	printf("1. Precio vuelo Aerolíneas $(%.2f)\n", precioAerolineas);
	printf("2. Precio vuelo Latam $(%.2f)\n", precioLATAM);
	printf("3. Volver al menu principal\n");

	printf("Ingrese opción: ");
	opcionValidaSubMenu = scanf("%d", &opcionSubMenu);

	if(opcionValidaSubMenu == 0)
	{
		opcionSubMenu = 0;
	}

	fflush(stdin);
	return opcionSubMenu;
}
