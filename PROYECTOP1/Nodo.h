/**********************************************************/
/*       UNIVERSIDAD DE LAS FUEZAS ARMADAS-ESPE           */
/* PROYECTO PARCIAL 1: INGRESO DE NOTAS DE UN ESTUDIANTE  */
/*  AUTORES: STEFANY DIAZ, REISHEL TIPAN, JORDY VISCAINO  */
/*            FECHA DE CREACIÓN: 07/06/2024               */
/*            FECHA DE MODIFICACIÓN: 16/06/2024           */
/**********************************************************/
#pragma once
#include "Estudiante.h"

class Nodo{
	public:
		Nodo(Estudiante _estudiante);
		~Nodo();
		Nodo *getSiguiente();
		void setSiguiente(Nodo *_siguiente);
		void setEstudiante(Estudiante _estudiante);
		Estudiante getEstudiante();

	protected:

	private:
		Estudiante estudiante;
		Nodo *siguiente = NULL;

};
