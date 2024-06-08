/**********************************************************/
/*       UNIVERSIDAD DE LAS FUEZAS ARMADAS-ESPE           */
/* PROYECTO PARCIAL 1: INGRESO DE NOTAS DE UN ESTUDIANTE  */
/*  AUTORES: STEFANY DIAZ, REISHEL TIPAN, JORDY VISCAINO  */
/*            FECHA DE CREACIÓN: 07/06/2024               */
/*            FECHA DE MODIFICACIÓN: 16/06/2024           */
/**********************************************************/
#include "Nodo.h"

Nodo::Nodo(Estudiante _estudiante){
	estudiante =  _estudiante;
}

Nodo::~Nodo(){}

Nodo *Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente){
	siguiente = _siguiente;
}

void Nodo::setEstudiante(Estudiante _estudiante){
	estudiante = _estudiante;
}

Estudiante Nodo::getEstudiante(){
	return estudiante;
}

