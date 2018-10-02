
//Name: Hasibul Islam
//Date: 03.03.2017
//Assignment 1

#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(int r, int i){ 
    real = r; // Real
    imag = i; //Imaginary
}
void Complex::print(){
    char op = '+';
    if(imag < 0)
        cout<<real<<imag<<"i"<<endl;
    else
        cout<<real<<"+"<<imag<<"i"<<endl;
}
int Complex::getReal() const{
    return real;
}
int Complex::getImag() const{
    return imag;
}
