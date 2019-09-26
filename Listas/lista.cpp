/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.cpp
 * Author: andre
 *
 * Created on 12 de septiembre de 2019, 04:32 PM
 */

#include <cstdlib>
#include "lista.h"

lista::lista(): primero(NULL) {

}

lista::~lista() {

}

void lista::agregar(int numero) {
    nodo* actual;
    nodo* nuevoNodo;
    if(primero==NULL){ // lista esta vacia 
    primero=new nodo(numero,NULL); // primer dato
} else // cuando ya tiene al menos un elemento
    actual = primero; // actual tiene la misma direccion que primero
    while(actual->obtenerSiguiente() != NULL){
        actual= actual->obtenerSiguiente();
    //actual=new nodo(numero, NULL); // segundo dato
    }
    nuevoNodo=new nodo(numero, NULL);
    actual->fijarSiguiente(nuevoNodo); //se le asigna el segundo dato al primer dato(direccion de memoria)
}





