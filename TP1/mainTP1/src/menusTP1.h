/*
 * menusTP1.h
 *
 *  Created on: 16/04/2022
 *      Author: Alumno
 */

#ifndef MENUSTP1_H_
#define MENUSTP1_H_


/// @brief
/// 	Imprime el menu principal y pide al usuario ingresar la opcion
/// @param kilometros
/// @param precioAerolineas
/// @param precioLATAM
/// 	Paso como parametro las variables para mostrar su valor
/// 	actual en el menu
/// @param cargaForzada
/// 	Para ingresar forzosamente a una opcion
/// @return
/// 	Devuelve la opcion ingresada, si no es valida devuelve 0
int menu(int kilometros, float precioAerolineas, float precioLATAM, int cargaForzada);


/// @brief
/// 	Imprime el submenu de carga de precio y pide al usuario una opcion
/// @param precioAerolineas
/// @param precioLATAM
/// 	Pido las variables de precio base para mostrar su valor actual
/// @return
/// 	Retorno la opcion ingresada
int subMenu(float precioAerolineas, float precioLATAM);

#endif /* MENUSTP1_H_ */
