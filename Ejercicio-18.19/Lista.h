#ifndef Lista_h
#define Lista_h

#include <stdio.h>
#include <stdlib.h>

//Defino estructuras NODO y LISTA

typedef struct Nodo{
    
    char letra;
    struct Nodo* siguiente;
    struct Nodo* anterior;
       
}Nodo;

typedef struct Lista{

    Nodo* cabeza;
    int numelem;
    
}Lista;

//Funciones accesibles desde el main.c INTERFAZ
Lista* CrearListaVacia(void);


#endif /* Lista_h */
