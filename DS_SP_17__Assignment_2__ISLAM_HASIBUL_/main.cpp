//Name: Hasibul Islam
//Date: 03.15.2017
//Assignment 2

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "complex.h"
using namespace std;

int main()
{
int var; //varible for any name

complex r_real,i_img,getReal; do { //Printing from main.cpp
cout<<"\n1.Addition 2.Substraction\n";
cin>>var;
switch(var){
case 1:
cout<<"\nFirst Complex Number!";
r_real.read();
r_real.display();
cout<<"\nSecond Complex Number:";
i_img.read();
i_img.display();
getReal=r_real+i_img;
cout<<"\nResult of Addition:";
getReal.display();
break;

case 2:
cout<<"\nFirst Complex Number!";
r_real.read();
r_real.display();
cout<<"\nSecond Complex Number:";
i_img.read();
i_img.display();
getReal=i_img-r_real;
cout<<"\nResult of Subtraction:";
getReal.display();
break;
}
}
while(var!=6);
return 0;
}

