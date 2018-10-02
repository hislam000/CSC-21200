//Name: Hasibul Islam
//Date: 03.15.2017
//Assignment 2

#include <iostream>
class complex{
int imag; //Imaginary Part
int real; //Real Part
public:
void read();
void display();  //(out put + and -)
complex operator+(complex a2); //operator (+ and -)
complex operator-(complex a2);
int operator==(complex a2);

};