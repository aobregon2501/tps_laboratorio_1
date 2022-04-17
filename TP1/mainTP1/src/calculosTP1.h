/*
 * calculosTP1.h
 *
 *  Created on: 16/04/2022
 *      Author: Alumno
 */

#ifndef CALCULOSTP1_H_
#define CALCULOSTP1_H_

/// @brief
/// 	Calculo de porcentaje de una variable
///
/// @param numero
/// 	Es la variable base de la cual se calculara el porcentaje
/// @param porcentaje
/// 	Es el porcentaje a modificar a la variable
/// @return
/// 	Devuelve el valor modificado segun el porcentaje
float calculoPorcentual(float numero, float porcentaje);


/// @brief
/// 	Calculo de la relacion entre dos variables
/// @param numerador
/// 	Es la variable a dividir
/// @param denominador
/// 	Es la variable sobre la que se calcula la relacion
/// 	debe ser distito de 0
/// @return
/// 	Devuelve el valor de la relacion en float
float calculoRelacion(float numerador, float denominador);

#endif /* CALCULOSTP1_H_ */
