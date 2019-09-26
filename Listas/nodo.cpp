/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.cpp
 * Author: andre
 *
 * Created on 12 de septiembre de 2019, 04:31 PM
 */

#include <cstdlib>
#include "nodo.h"

nodo::nodo(int dato, nodo* siguiente)
: dato(dato), siguiente(new nodo()) {

}

nodo::~nodo() {

}



