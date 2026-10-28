#include "array.h"

bool arrayMinMax(const int a[],int n,int& minOut,int& maxOut)
{
    if (n <= 0)
    {
        return false;
    }

    minOut = a[0];
    maxOut = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < minOut)
        {
            minOut = a[i];
        }
        if (a[i] > maxOut)
        {
            maxOut = a[i];
        }
    }
    return true;
}

int arrayFind(const int a[],int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int arrayCount(const int a[],int n,int x)
{
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    return count;
}