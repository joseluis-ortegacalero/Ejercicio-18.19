#include "Lista.h"

void Error(void){
    printf("\nError al crear el objeto, memoria insuficiente.");
}

Lista* CrearListaVacia(void){
    
    Lista* nueva = (Lista*)malloc(sizeof(Lista));
    
    if(!nueva){
        Error();
        return NULL;
    }else{
        nueva->cabeza = NULL;
        nueva->numelem = 0;
        return nueva;
    }
}

Nodo* CrearNodo(char letra){
    
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    
    if(!nuevo){
        Error();
        return NULL;
    }else{
        nuevo->anterior = nuevo->siguiente = NULL;
        nuevo->letra = letra;
        return nuevo;
    }
}

int EsListaVacia(Lista* lista){
    
    if(lista->cabeza == NULL){
        return 1;
    }else{
        return 0;
    }
}
