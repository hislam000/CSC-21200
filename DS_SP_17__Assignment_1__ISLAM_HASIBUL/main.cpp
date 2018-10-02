
//Name: Hasibul Islam
//Date: 03.03.2017
//Assignment 1

#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

//Void Function
void addComplex(const Complex &x1, const Complex &x2){
    int r_real = x1.getReal() + x2.getReal();
    int i_img = x1.getImag() + x2.getImag();
    Complex sum(r_real, i_img);
    cout<<"The result of addition is: ";
    sum.print();
}
void subComplex(const Complex &x1, const Complex &x2){
    int r_real = x1.getReal() - x2.getReal();
    int i_img = x1.getImag() - x2.getImag();
    Complex sub(r_real, i_img);
    cout<<"The result of subtraction is: "; 
    sub.print();
}
int main(){
    int r_real, i_img;
    cout<<"\n"<<"First Complex Number:"<<endl;
    cout<<"Please enter real part: ";
    cin>>r_real;
    cout<<"Please enter imaginary part: ";
    cin>>i_img;

    // Creating Complex Object
    Complex x1(r_real, i_img);
    cout<<"Your first complex number is: ";
    x1.print();
    cout<<"\n"<<"Second Complex Number:"<<endl;
    cout<<"Please enter real part: ";
    cin>>r_real;
    cout<<"Please enter imaginary part: ";
    cin>>i_img;
    
    // Creating Complex Object
    Complex x2(r_real, i_img);
    cout<<"Your second complex number is: ";
    x2.print();
    cout<<endl;
    addComplex(x1, x2);
    subComplex(x1, x2);
    return 0;
}


