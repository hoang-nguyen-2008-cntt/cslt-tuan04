#include <iostream>
#include <climits>
#include "math/math.h"
#include "array/array.h"

using namespace std;
void printArray(const int a[], int n);

int main()
{
    // bai tap tren lop //
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
    {
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
    }
    cout << endl;

    cout << "=====Test arrayCount=====" << endl;
    {
    int a[] = {2, 1, 2, 3, 2};

    cout << arrayCount(a, 5, 2) << endl;
    cout << arrayCount(a, 5, 1) << endl;
    cout << arrayCount(a, 5, 100) << endl;
    }

    cout << endl;

    // bai tap ve nha //
    cout << "=====Test my_fabs=====" << endl;
    cout << "my_fabs(-2.75) = " << my_fabs(-2.75) << endl;
    cout << "my_fabs(1.5) = " << my_fabs(1.5) << endl;

    cout << endl;

    cout << "=====Test my_fmin=====" << endl;
    cout << "my_fmin(2.5, 3) = " << my_fmin(2.5, 3) << endl;
    cout << "my_fmin(-4.5, 3.5) = " << my_fmin(-4.5, 3.5) << endl;

    cout << endl;

    cout << "=====Test my_fmax=====" << endl;
    cout << "my_fmax(2.5, -3) = " << my_fmax(2.5, -3) << endl;
    cout << "my_fmax(4, 15) = " << my_fmax(4, 15) << endl;

    cout << endl;

    cout << "=====Test my_ceil=====" << endl;
    cout << "my_ceil(2.7) = " << my_ceil(2.7) << endl;
    cout << "my_ceil(2.1) = " << my_ceil(2.1) << endl;
    cout << "my_ceil(2.0) = " << my_ceil(2.0) << endl;
    cout << "my_ceil(-3.7) = " << my_ceil(-3.7) << endl;
    cout << "my_ceil(-3.1) = " << my_ceil(-3.1) << endl;
    cout << "my_ceil(-3.0) = " << my_ceil(-3.0) << endl;
    cout << "my_ceil(0.0) = " << my_ceil(0.0) << endl;

    cout << endl;

    cout << "=====Test my_round=====" << endl;
    cout << "my_round(2.3) = " << my_round(2.3) << endl;
    cout << "my_round(2.5) = " << my_round(2.5) << endl;
    cout << "my_round(2.7) = " << my_round(2.7) << endl;
    cout << "my_round(-3.3) = " << my_round(-3.3) << endl;
    cout << "my_round(-3.5) = " << my_round(-3.5) << endl;
    cout << "my_round(-3.7) = " << my_round(-3.7) << endl;

    cout << endl;

    cout << "=====Test arraySum=====" << endl;
    {
        int a[] = {2, -3, 5};
        cout << arraySum(a, 3) << endl;
    }
    {
        int a[] = {0, 0, 0, 0};
        cout << arraySum(a, 4) << endl;
    }
    {
        int a[] = {-1, -2, -3};
        cout << arraySum(a, 3) << endl;
    }

    cout << endl;
    
    cout << "=====Test arrayAverage=====" << endl;
    {
        int a[] = {2, 4, 6};
        double avg;

        if (arrayAverage(a, 3, avg))
        {
            cout << avg << endl;
        }
    }
    {
        int a[] = {-2, 2};
        double avg;

        if (arrayAverage(a, 2, avg))
        {
            cout << avg << endl;
        }
    }

    cout << endl;

    cout << "=====Test arrayReverse=====" << endl;
    {
        int a[] = {3, 5, 12};
        arrayReverse(a, 3);
        printArray(a, 3);
    }
    {
        int a[] = {1, 2, 3, 4};
        arrayReverse(a, 4);
        printArray(a, 4);
    }

    cout << endl;

    cout << "=====Test arraySort=====" << endl;
    {
        int a[] = {3, 1, 2, 1};
        arraySort(a, 4);
        printArray(a, 4);
    }
    {
        int a[] = {5, 4, 3, 2, 1};
        arraySort(a, 5);
        printArray(a, 5);
    }
    {
        int a[] = {-3, 5, -1, 0};
        arraySort(a, 4);
        printArray(a, 4);
    }

    cout << endl;

    cout << "=====Test arrayInsert=====" << endl;
    {
        int a[10] = {1, 3};
        int n = 2;
        arrayInsert(a, n, 10, 1, 2);
        printArray(a, n);
    }
    {
        int a[10] = {2, 3};
        int n = 2;
        arrayInsert(a, n, 10, 0, 1);
        printArray(a, n);
    }
    {
        int a[10] = {1, 2};
        int n = 2;
        arrayInsert(a, n, 10, 2, 3);
        printArray(a, n);
    }
    
    cout << endl;

    cout << "=====Test arrayErase=====" << endl;
    {
        int a[] = {12, 67, 45, 87, 678, 0, 2};
        int n = 7;
        arrayErase(a, n, 3, 2);
        printArray(a, n);
    }
    {
        int a[] = {1, 2, 3, 4};
        int n = 4;
        arrayErase(a, n, 0, 1);
        printArray(a, n);
    }
    {
         int a[] = {1, 2, 3, 4};
        int n = 4;
        arrayErase(a, n, 3, 1);
        printArray(a, n);
    }
    
    cout << endl;

    cout << "=====Test arrayMergeSort=====" << endl;
    {
        int a[] = {1, 3, 3};
        int b[] = {2, 3};

        int out[10];

        int nOut =
            arrayMergeSorted(
                a, 3,
                b, 2,
                out
            );

        printArray(out, nOut);
    }
    {
        int a[] = {-3, 0, 5};
        int b[] = {-2, 1, 7};

        int out[10];

        int nOut =
            arrayMergeSorted(
                a, 3,
                b, 3,
                out
            );

        printArray(out, nOut);
    }

    return 0;
}

void printArray(const int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}