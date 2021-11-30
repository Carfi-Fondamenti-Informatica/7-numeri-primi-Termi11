//
// Created by Giulio on 30/11/2021.
//

#include "lib.h"

bool numeroprimo(int n, int a){
    if (n<0){
        return false;
    }else if (n==1) {
        return true;
    }else if (a==1){
        return true;
    }else if (n%a==0){
        return false;
    }
    numeroprimo(n,--a);
        }
