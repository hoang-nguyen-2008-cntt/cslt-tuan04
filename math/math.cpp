#include "math.h"
#include <climits>

int my_abs(int x)
{
    if (x == INT_MIN)
    {
        return INT_MIN;
    }
    else if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

double my_floor(double x)
{
    int t = (int) x;
    if (x >= 0)
    {
        return t;
    }
    else if (x == t)
    {
        return t;
    }
    else
    {
        return t-1;
    }
}

double my_pow(double base, int exp)
{
    if (exp == 0)
    {
        return 1.0;
    }
    double result = 1.0;

    if (exp > 0)
    {
        for (int i = 0; i < exp; i++)
        {
            result = result * base;
        }
    }

    else 
    {
        for (int i = 0; i < -exp; i++)
        {
            result = result * base;
        }
        result = 1.0/result;
        
    }
    return result;
}

double my_fabs(double x)
{
    if (x > 0)
    {
        return x;
    }
    else 
    {
        return -x;
    }
}

double my_fmin(double x, double y)
{
    if (x < y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}

double my_fmax(double x, double y)
{
    if (x > y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}

double my_ceil(double x)
{
    int t = (int) x;
    if (x <= 0)
    {
        return t;
    }
    else if (x == t )
    {
        return t;
    }
    else 
    {
        return t+1;
    }
}

double my_round(double x)
{
    if (x >= 0)
    {
        return (int) (x + 0.5);
    }
    else 
    {
        return (int) (x - 0.5);
    }
}