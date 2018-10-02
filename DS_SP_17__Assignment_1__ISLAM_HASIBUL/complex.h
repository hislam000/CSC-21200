
//Name: Hasibul Islam
//Date: 03.03.2017
//Assignment 1
#pragma once
#include <iostream>



class Complex{
private:
    // varibles for complex number 
    int real; // Real Part
    int imag; //Imaginary Part
public:
    // constructor
    Complex(int r, int i);
    // print function
    void print();
    // getters
    int getReal() const;
    int getImag() const;
};
