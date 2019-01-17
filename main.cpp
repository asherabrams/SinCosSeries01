//
//  main.cpp
//  SinCosSeries01
//
//  Created by Asher Abrams on 2019/01/07.
//  Copyright © 2019 | 5779 Asher Abrams. All rights reserved.
//
//  Evaluates an approximation of exp(x), sin(x), and cos(x) 
//  using the Taylor series.
//
// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
long int term01 = 1;
long int iterations01;
double func01(double);
double invFactorial01, userin01, sterm, cterm, ssum, csum, sum = 1;

// DEFINITIONS
double func01(double factorial01)
{
    for(iterations01 = 1; iterations01 < 50; iterations01++)
    {
        factorial01 = factorial01*iterations01;
        invFactorial01 = double(pow(userin01,iterations01)/factorial01);
        sum = sum + invFactorial01;
        sterm = (iterations01%2)*pow(-1,((iterations01/2)%2)) * invFactorial01;
        cterm = ((iterations01+1)%2)*pow(-1,(((iterations01/2)+1)%2)) * invFactorial01;
        ssum = ssum + sterm;
        csum = csum + cterm;
        cout << "Iteration " << iterations01 << '\n';
        cout << "Factorial = " << factorial01 << '\n';
        cout << "1/Factorial = " << invFactorial01 << '\n';
        cout << "Exp(x) = " << sum << '\n';
        cout << "Sin(x) = " << ssum << '\n';
        cout << "Cos(x) = " << (1 - csum) << '\n';
        cout << '\n';
    }
    return factorial01;
}

// MAIN
int main() {
    cout << "Evaluates exp(x), sin(x), and cos(x). X?\n";
    cin >> userin01;
    if (double(userin01))
    {
        func01(term01);
    }
    else cout << "Error.\n";
    cout << '\n';
    return 0;
}




