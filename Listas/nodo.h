/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.h
 * Author: andre
 *
 * Created on 12 de septiembre de 2019, 04:26 PM
 */

#ifndef NODO_H
#define NODO_H

class nodo{
private:
    int dato;
    nodo* siguiente; //permite acceder a un siguiente dato
public:
    nodo(int, nodo*);
    virtual ~nodo();

};

#endif /* NODO_H */

