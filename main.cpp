#include <iostream>
#include <climits>
#include "math/math.h"
#include "array/array.h"

using namespace std;

int main()
{
    cout << "=====Test my_abs=====" << endl;
    cout << "my_abs(-7) = " << my_abs(-7) << endl;
    cout << "my_abs(5) = " << my_abs(5) << endl;
    cout << "my_abs(0) = " << my_abs(0) << endl;
    cout << "my_abs(INT_MIN) = " << my_abs(INT_MIN) << endl;

    cout << endl;

    cout << "=====Test my_floor=====" << endl;
    cout << "my_floor(2.7) = " << my_floor(2.7) << endl;
    cout << "my_floor(2.0) = " << my_floor(2.0) << endl;
    cout << "my_floor(-2.7) = " << my_floor(-2.7) << endl;
    cout << "my_floor(-2.0) = " << my_floor(2.0) << endl;
    cout << "my_floor(0.0) = " << my_floor(0.0) << endl;

    cout << endl;

    cout << "=====Test my_pow=====" << endl;
    cout << "my_pow(2, 3) = " << my_pow(2, 3) << endl;
    cout << "my_pow(2, -3) = " << my_pow(2, -3) << endl;
    cout << "my_pow(5, 0) = " << my_pow(5, 0) << endl;
    cout << "my_pow(-2, 3) = " << my_pow(-2, 3) << endl;
    cout << "my_pow(-2, 4) = " << my_pow(-2, 4) << endl;
    cout << "my_pow(0, 5) = " << my_pow(0, 5) << endl;
    cout << "my_pow(0, 0) = " << my_pow(0, 0) << endl;

    cout << endl;

    cout << "=====Test arrayMinMax=====" << endl;
    int a[] = {2, 6, 3, 8, 5};
    int mn, mx;
    if (arrayMinMax (a, 5, mn, mx))
    {
        cout << "Min = " << mn << endl;
        cout << "Max = " << mx << endl;
    }

    cout << endl;

    cout << "=====Test arrayFind=====" << endl;
    cout << arrayFind(a, 5, 3) << endl;
    cout << arrayFind(a, 5, 100) << endl;

    cout << endl;

    cout << "=====Test arrayCount=====" << endl;

    int b[] = {2, 1, 2, 3, 2};

    cout << arrayCount(b, 5, 2) << endl;
    cout << arrayCount(b, 5, 1) << endl;
    cout << arrayCount(b, 5, 100) << endl;
    
    cout << endl;

    return 0;
}