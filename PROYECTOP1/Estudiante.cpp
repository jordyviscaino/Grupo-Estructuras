/**********************************************************/
/*       UNIVERSIDAD DE LAS FUEZAS ARMADAS-ESPE           */
/* PROYECTO PARCIAL 1: INGRESO DE NOTAS DE UN ESTUDIANTE  */
/*  AUTORES: STEFANY DIAZ, REISHEL TIPAN, JORDY VISCAINO  */
/*            FECHA DE CREACIÓN: 07/06/2024               */
/*            FECHA DE MODIFICACIÓN: 16/06/2024           */
/**********************************************************/
#include "Estudiante.h"

Estudiante::Estudiante(){
	this->primerNombre = "";
	this->segundoNombre = "";
	this->apellido = "";
	this->correo = "";
}

Estudiante::~Estudiante(){}

Estudiante::Estudiante(string _primerNombre, string _segundoNombre, string _apellido){
	this->primerNombre = _primerNombre;
	this->segundoNombre = _segundoNombre;
	this->apellido = _apellido;
	this->correo = "";
}
void Estudiante::setPrimerNombre(string _primerNombre){
	this->primerNombre = _primerNombre;
}
string Estudiante::getPrimerNombre(){
	return this->primerNombre;
}
void Estudiante::setSegundoNombre(string _segundoNombre){
	this->segundoNombre = _segundoNombre;
}
string Estudiante::getSegundoNombre(){
	return this->segundoNombre;
}
void Estudiante::setApellido(string _apellido){
	this->apellido = _apellido;
}
string Estudiante::getApellido(){
	return this->apellido;
}
void Estudiante::setCorreo(string _correo){
	this->correo = _correo;
}
string Estudiante::getCorreo(){
	return this->correo;
}

