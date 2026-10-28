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

long long arraySum(const int a[], int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

bool arrayAverage(const int a[], int n, double& out)
{
    if (n == 0)
    {
        return false;
    }
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    out = (double) sum/n;
    return true;
}

void arrayReverse(int a[], int n)
{
    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }
}

void arraySort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minPos = i;

        for(int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minPos])
            {
                minPos = j;
            }
        }
        int temp = a[i];
        a[i] = a[minPos];
        a[minPos] = temp;
    }
}

bool arrayInsert(int a[], int &n, int capacity, int pos, int x)
{
    if(pos < 0 || pos > n || n > capacity)
    {
        return false;
    }

    for (int i = n; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = x;
    n++;
    return true;
}

bool arrayErase(int a[], int &n, int pos, int k)
{
    if(pos < 0 || pos > n)
    {
        return false;
    }
    if(k < 0 || k > n - pos)
    {
        return false;
    }

    for(int i = pos + k; i < n; i++)
    {
        a[i - k] = a[i];
    }
    n = n - k;
    return true;
}

int arrayMergeSorted(const int a[], int na, const int b[], int nb, int out[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < na && j < nb)
    {
        if(a[i] <= b[j])
        {
            out[k++] = a[i++];
        }
        else
        {
            out[k++] = b[j++];
        }
    }

    while (i < na)
    {
        out[k++] = a[i++];
    }

    while (j < nb)
    {
        out[k++] = b[j++];
    }
    
    return k;
}