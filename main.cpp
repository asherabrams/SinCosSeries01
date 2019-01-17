//
//  main.cpp
//  SinCosSeries01
//
//  Created by Asher Abrams on 2019/01/07.
//  Copyright © 2019 | 5779 Asher Abrams. All rights reserved.
//
//  Evaluates an approximation of exp(n) and sin(n) using a series.
//
// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
long int x=1;
long int y;
double func01(double);
double z, n, s, c, ssum, csum, sum = 1;

// DEFINITIONS
double func01(double x)
{
    for(y = 1; y < 20; y++)
    {
        x = x*y;
        z = double(pow(n,y)/x);
        sum = sum + z;
        s = (y%2)*pow(-1,((y/2)%2)) * z;
        c = ((y+1)%2)*pow(-1,(((y/2)+1)%2)) * z;
        ssum = ssum + s;
        csum = csum + c;
        cout << y << '\n';
        cout << x << '\n';
        cout << z << '\n';
        cout << "Exp = " << sum << '\n';
        cout << "Sin = " << ssum << '\n';
        cout << "Cos = " << (1 - csum) << '\n';
        cout << '\n';
    }
    return x;
}

// MAIN
int main() {
    cout << "Evaluates exp(n), sin(n), and cos(n). N?\n";
    cin >> n;
    if (double(n))
    {
        func01(x);
    }
    else cout << "Error.\n";
    cout << '\n';
    return 0;
}
