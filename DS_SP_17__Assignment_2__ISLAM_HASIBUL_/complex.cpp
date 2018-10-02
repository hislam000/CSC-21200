//Name: Hasibul Islam
//Date: 03.15.2017
//Assignment 2

#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

void complex::read() {
cout<<"\nEnter Real Part:"; //input varible
cin>>real;
cout<<"Enter Imaginary Part:"; //input varible
cin>>imag;
}
void complex::display(){
cout<<"\n= "<<real<<"+"<<imag<<"i";  //Printing i of the output with number(+)
}
/*
void complex::display(){
cout<<"\n= "<<real<<"-"<<imag<<"i";  //Printing i of the output with number(-)
}
*/
complex complex::operator+(complex x2) // Adding Oprator
{
complex x1;
x1.real=real+x2.real; //Adding
x1.imag=imag+x2.imag; 
return x1;
}
complex complex::operator-(complex x2) //Subtraction Oprator
{
complex x1;
x1.real=real-x2.real; //Subtraction
x1.imag=imag-x2.imag;
return x1;
}
int complex::operator==(complex x2) //overload operation
{
if(real==x2.real && imag==x2.imag)
return 1;
return 0;
}

