#include <iostream>
#include <vector>
using namespace std;

struct Complex
{
    double real;
    double imaginary;

    Complex(double re, double im)
    {
        real = re;
        imaginary = im;
    }
    friend Complex operator+(Complex a, Complex b)
    {
        Complex c(a.real + b.real, a.imaginary + b.imaginary);
        return c;
    }
    friend Complex operator-(Complex a, Complex b)
    {
        Complex c(a.real - b.real, a.imaginary - b.imaginary);
        return c;
    }
    friend Complex operator*(Complex a, Complex b)
    {
        Complex c(a.real * b.real + (a.imaginary * b.imaginary * -1), a.real * b.imaginary + b.real * a.imaginary);
        return c;
    }
    friend Complex operator/(Complex a, Complex b)
    {
        // to complicated for now need the conjugate
        Complex c(1, 1);
        return c;
    }
    friend void operator+=(Complex &a, Complex b)
    {

        Complex c(a.real + b.real, a.imaginary + b.imaginary);
        a.real = c.real;
        a.imaginary = c.imaginary;
    }

    friend void operator-=(Complex &a, Complex b)
    {

        Complex c(a.real - b.real, a.imaginary - b.imaginary);
        a.real = c.real;
        a.imaginary = c.imaginary;
    }

    friend void operator*=(Complex &a, Complex b)
    {

        Complex c(a.real * b.real + (a.imaginary * b.imaginary * -1), a.real * b.imaginary + b.real * a.imaginary);
        a.real = c.real;
        a.imaginary = c.imaginary;
    }
    friend bool operator==(Complex a, Complex b)
    {
        return a.real == b.real && a.imaginary == b.imaginary;
    }
    friend bool operator!=(Complex a, Complex b)
    {
        return a.real != b.real && a.imaginary != b.imaginary;
    }
};
//g++ w3_t4.cpp t4.h -o t4

// you can't put a template into a header file because templates are exactly templates. 
// a template class is not really a class is just a recepie for a class 
// the template class is not compiled but the actual instantiations are.
// so the compiled code looks as if all instantiations of a template have been writen 
// as if they were legitimate classes. 
// So a tempalte class is not compiled but its implementation are 