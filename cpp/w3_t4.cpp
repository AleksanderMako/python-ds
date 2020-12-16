#include <iostream>
#include "t4.h"
using namespace std;


int main()
{
    Complex a(1, 1);
    Complex b(2, 2);
    // adition

    auto add = a+b; 
    cout << "Additions is :" << add.real <<" " << add.imaginary <<endl;

    // sub

    auto sub = a-b;
    cout << "Dif is : " << sub.real << " " << sub.imaginary <<endl;

    // prod

    auto prod = a*b;
    cout << "Prod is: "<< prod.real << " im is " << prod.imaginary << endl;

    // increment assign 
    // res should be 3,3 

    a+=b;
    cout << "Incremet  real should be 3 real is "<<a.real <<" im should be 3 im is :" << a.imaginary <<endl;

    // decrement

    a-=b;
    cout << "Decrement real should be 1 real is " << a.real << " m should be 1 m is " << a.imaginary <<endl;

    // scale 
    Complex d(5,5);
    Complex e (2,2);
    d*=e;
    cout << "Scale real  is " << d.real << "im  is " << a.imaginary << endl;


    // equal 
    auto eq = d ==a;
    cout << "d equal a should be false and is " << eq << endl;

    // not equal 
    auto noteq = a !=e;
    cout << "a not equal e should be true and is " << noteq<<endl;
}