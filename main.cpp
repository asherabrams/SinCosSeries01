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
long int term = 1;
long int iterations;
double func01(double);
double factorial, invFactorial, userin, sterm, cterm, ssum, csum, esum = 1;

// DEFINITIONS
double func01(double factorial)
{
    for(iterations = 1; iterations < 50; iterations++)
    {
        factorial = factorial * iterations;
        invFactorial = double(pow(userin,iterations)/factorial);
        esum = esum + invFactorial;
        sterm = (iterations%2) * pow(-1,((iterations/2)%2)) * invFactorial;
        cterm = ((iterations+1)%2) * pow(-1,(((iterations/2)+1)%2)) * invFactorial;
        ssum = ssum + sterm;
        csum = csum + cterm;
        cout << "Iteration " << iterations << '\n';
        cout << "Factorial " << iterations << " = " << factorial << '\n';
        cout << "x^n/Factorial = " << invFactorial << '\n';
        cout << "Exp(x) = " << esum << '\n';
        cout << "Sin(x) = " << ssum << '\n';
        cout << "Cos(x) = " << (1 - csum) << '\n';
        cout << '\n';
    }
    return factorial;
}

// MAIN
int main() {
    cout << "Evaluates exp(x), sin(x), and cos(x). X?\n";
    cin >> userin;
    if (double(userin))
    {
        func01(term);
    }
    else cout << "Error.\n";
    cout << '\n';
    return 0;
}

