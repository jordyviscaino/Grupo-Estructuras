/**********************************************************/
/*       UNIVERSIDAD DE LAS FUEZAS ARMADAS-ESPE           */
/* PROYECTO PARCIAL 1: INGRESO DE NOTAS DE UN ESTUDIANTE  */
/*  AUTORES: STEFANY DIAZ, REISHEL TIPAN, JORDY VISCAINO  */
/*            FECHA DE CREACIÓN: 07/06/2024               */
/*            FECHA DE MODIFICACIÓN: 16/06/2024           */
/**********************************************************/
#pragma once

#include <iostream>

using namespace std;

class Estudiante{
	public:
		Estudiante();
		~Estudiante();
		Estudiante(string _primerNombre, string _segundoNombre, string _apellido);

		void setPrimerNombre(string _primerNombre);
		string getPrimerNombre();

		void setSegundoNombre(string _segundoNombre);
		string getSegundoNombre();

		void setApellido(string _apellido);
		string getApellido();

		void setCorreo(string _correo);
		string getCorreo();
	
	protected:

	private:
		string primerNombre;
		string segundoNombre;
		string apellido;
		string correo;
};


