/**********************************************************/
/*       UNIVERSIDAD DE LAS FUEZAS ARMADAS-ESPE           */
/* PROYECTO PARCIAL 1: INGRESO DE NOTAS DE UN ESTUDIANTE  */
/*  AUTORES: STEFANY DIAZ, REISHEL TIPAN, JORDY VISCAINO  */
/*            FECHA DE CREACIÓN: 07/06/2024               */
/*            FECHA DE MODIFICACIÓN: 16/06/2024           */
/**********************************************************/
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>

using namespace std;

int ingresarEntero();
float ingresarfloat();
string ingresarLetra();
bool validar(string numero);
bool validarEntero(string numero);
bool validarLetra(string palabra);
bool validarCedula(string cedula);
char* ingresar(char* msj);

int ingresarEntero() {
    string numero;
    bool valido = false;
    while(!valido) {
        try {
            cin >> numero;
            valido = validarEntero(numero);
            if(!valido) {
                throw numero;
            }
        } catch(string e) {
            cout << "El numero " << e << " no es valido" << endl;
        }
    }
    return atoi(numero.c_str());
}

float ingresarfloat() {
    string numero;
    bool valido = false;
    while(!valido) {
        try {
            cin >> numero;
            valido = validar(numero);
            if(!valido) {
                throw numero;
            }
        } catch(string e) {
            cout << "El numero " << e << " no es valido" << endl;
        }
    }
    return atof(numero.c_str());
}

string ingresarLetra() {
    string palabra;
    bool valido = false;
    while(!valido) {
        try {
            cin >> palabra;
            valido = validarLetra(palabra);
            if(!valido) {
                throw palabra;
            }
        } catch(string e) {
            cout << "La palabra " << e << " no es valida" << endl;
        }
    }
    return palabra;
}

bool validar(string numero) {
    int inicio = 0;
    if(numero.length() == 0) {
        return 0;
    }
    if(numero[0] == '+' || numero[0] == '-') {
        inicio = 1;
        if(numero.length() == 1) {
            return 0;
        }
    }
    for(int i=inicio; i<numero.length(); i++) {
        if(!isdigit(numero[i]) && numero[i] != '.') {
            return 0;
        }
    }
    return 1;
}

bool validarEntero(string numero) {
    int inicio = 0;
    if(numero.length() == 0) {
        return 0;
    }
    if(numero[0] == '+' || numero[0] == '-') {
        inicio = 1;
        if(numero.length() == 1) {
            return 0;
        }
    }
    for(int i=inicio; i<numero.length(); i++) {
        if(!isdigit(numero[i])) {
            return 0;
        }
    }
    return 1;
}

bool validarLetra(string palabra) {
    char c;
    for(int i=0; i<palabra.size(); i++) {
        c = palabra[i];
        if(isalpha(c) == 0) {
            if(isspace(c) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

bool validarCedula(string cedula) {
    if (cedula.length() != 10) {
        return false;
    }
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int digit = cedula[i] - '0';
        if (i % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }
    int verifier = cedula[9] - '0';
    return (sum % 10 == 0) ? (verifier == 0) : ((10 - (sum % 10)) == verifier);
}

char* ingresar(char* msj) {
    static char dato[25];
    char c;
    int i = 0;
    printf("%s : ", msj);
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            dato[i++] = c;
            printf("%c", c);
        }
    }
    dato[i] = '\0';
    return dato;
}
