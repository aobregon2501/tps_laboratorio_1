#include <stdio.h>
#include <stdlib.h>
#include "menusTP1.h"
#include "validacionesTP1.h"
#include "calculosTP1.h"

// valores para calculos
#define DESCUENTO_DEBITO -10
#define INTERES_CREDITO 25
#define BTC 40000000

// valores para carga forzada
#define KILOMETROS_FORZADOS 7090
#define PRECIO_AEROLINEAS_FORZADOS 162965
#define PRECIO_LATAM_FORZADOS 159339

int main(void) {

	setbuf(stdout, NULL);

	char salir = 'n';

	// variables a ingresar
	int kilometros = 0;

	float precioAerolineas = 0,
			   precioLATAM = 0;

	// banderas utilizadas
	int banderaAerolineas = 0,
	         banderaLATAM = 0,
	    banderaKilometros = 0,
	      banderaCalculos = 0,
	        salidaSubMenu = 0;

	int cargaForzada = 0;

	// variables de calculos
	int todoIngresado = 0;

	float diferenciaDePrecio,
	     precioAerolineasBTC,
	 precioAerolineasCredito,
	  precioAerolineasDebito,
	          precioLATAMBTC,
	      precioLATAMCredito,
	       precioLATAMDebito,
	precioUnitarioAerolineas,
	     precioUnitarioLATAM;

	do
	{
		system("cls");
		switch(menu(kilometros, precioAerolineas, precioLATAM, cargaForzada))
		{
			case 1:
				printf("1_ Ingrese los kilometros: \n");
				kilometros = validacionInt();
				banderaKilometros = 1;

				break;

			case 2:
				do
				{
					switch(subMenu(precioAerolineas, precioLATAM))
					{
						case 1:
							printf("1_ Ingrese precio vuelo Aerol?neas: \n");
							precioAerolineas = validacionFloat();
							banderaAerolineas = 1;

							break;

						case 2:
							printf("1_ Ingrese precio vuelo LATAM: \n");
							precioLATAM = validacionFloat();
							banderaLATAM = 1;

							break;

						case 3:
							salidaSubMenu = 1;
							break;

						default:
							printf("Opci?n invalida.");
							system("pause");
					}
				}while(!salidaSubMenu);

				system("pause");
				break;

			case 3:
				if(banderaKilometros && banderaAerolineas && banderaLATAM)
				{
					todoIngresado = 1;
				}
				else
				{
					todoIngresado = 0;

					if(!banderaKilometros)
					{
						printf("No se ingresaron los kilometros.\n");
					}

					if(!banderaAerolineas)
					{
						printf("No se ingres? el precio de Aerolineas Argentinas.\n");
					}

					if(!banderaLATAM)
					{
						printf("No se ingres? el precio de LATAM.\n");
					}
				}

				if(todoIngresado)
				{
					precioAerolineasDebito = calculoPorcentual(precioAerolineas, DESCUENTO_DEBITO);
					precioAerolineasCredito = calculoPorcentual(precioAerolineas, INTERES_CREDITO);
					precioAerolineasBTC = calculoRelacion(precioAerolineas, BTC);
					precioUnitarioAerolineas = calculoRelacion(precioAerolineas, kilometros);

					precioLATAMDebito = calculoPorcentual(precioLATAM, DESCUENTO_DEBITO);
					precioLATAMCredito = calculoPorcentual(precioLATAM, INTERES_CREDITO);
					precioLATAMBTC = calculoRelacion(precioLATAM, BTC);
					precioUnitarioLATAM = calculoRelacion(precioLATAM, kilometros);

					if(precioUnitarioAerolineas > precioUnitarioLATAM)
					{
						diferenciaDePrecio = precioUnitarioAerolineas - precioUnitarioLATAM;
					}
					else
					{
						diferenciaDePrecio = precioUnitarioLATAM - precioUnitarioAerolineas;
					}

					banderaCalculos = 1;

					if(cargaForzada == 3)
					{
						cargaForzada = 4;
					}

					printf("C?lculos realizados.\n");
				}

				system("pause");
				break;

			case 4:
				system("cls");
				cargaForzada = 0;

				if(banderaCalculos)
				{
					printf("KMs Ingresados: %d km \n\n",kilometros);


					printf("Precio Aerolineas: $%.2f\n",precioAerolineas);
					printf("Precio con tarjeta de debito: $%.2f\n", precioAerolineasDebito);
					printf("Precio con tarjeta de credito: $%.2f\n",precioAerolineasCredito);
					printf("Precio pagando con bitcoin: %f BTC\n",precioAerolineasBTC);
					printf("Mostrar precio unitario: $%.2f\n\n",precioUnitarioAerolineas);


					printf("Precio Latam: $%.2f\n",precioLATAM);
					printf("Precio con tarjeta de debito: $%.2f\n", precioLATAMDebito);
					printf("Precio con tarjeta de credito: $%.2f\n",precioLATAMCredito);
					printf("Precio pagando con bitcoin: %f BTC\n",precioLATAMBTC);
					printf("Mostrar precio unitario: $%.2f\n\n",precioUnitarioLATAM);


					printf("La diferencia de precio es: $%.2f\n",diferenciaDePrecio);


				}
				else
				{
					printf("Falta calcular las cotizaciones (opcion 3).\n");
				}

				system("pause");
				system("cls");
				break;

			case 5:
				kilometros = KILOMETROS_FORZADOS;
				precioAerolineas = PRECIO_AEROLINEAS_FORZADOS;
				precioLATAM = PRECIO_LATAM_FORZADOS;

				banderaKilometros = 1;
				banderaAerolineas = 1;
				banderaLATAM = 1;

				cargaForzada = 3;

				break;

			case 6:
				salir = 's';
				break;

			default:
				printf("Opcion no valida.");
				system("pause");
		}
	}while(salir != 's');

	printf("fin del programa");
	return EXIT_SUCCESS;
}
