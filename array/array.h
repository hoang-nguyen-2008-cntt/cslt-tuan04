#ifndef ARRAY_H
#define ARRAY_H

bool arrayMinMax(const int a[], int n, int& minOut, int& maxOut);
int arrayFind(const int a[], int n, int x);
int arrayCount(const int a[], int n, int x);

long long arraySum(const int a[], int n);
bool arrayAverage(const int a[], int n, double& out);
void arrayReverse(int a[], int n);
void arraySort(int a[], int n);
bool arrayInsert(int a[], int &n, int capacity, int pos, int x);
bool arrayErase(int a[], int &n, int pos, int k);
int arrayMergeSorted(const int a[], int na, const int b[], int nb, int out[]);

#endif