/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.h
 * Author: andre
 *
 * Created on 12 de septiembre de 2019, 04:27 PM
 */

#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

class lista{

private:
    nodo* primero;
    
public:
    lista();
    virtual ~lista();
    virtual void agregar(int);
    
};

#endif /* LISTA_H */

