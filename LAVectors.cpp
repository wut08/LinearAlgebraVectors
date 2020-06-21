#include "LAVectors.h"
#include<cmath>
Vector add(double num, const Vector &v)
{
    int n = (int)v.size();
    Vector result(n);
    for(int i=0;i<n;i++)
    {
        result[i]=v[i]+num;
    }
    return result;
}

Vector multiply(double num, const Vector &v)
{
    int n = (int)v.size();
    Vector result(n);
    for(int i=0;i<n;i++)
    {
        result[i]=v[i]*num;
    }
    return result;
}

void in_place_add(double num, Vector &v)
{
    int n = (int)v.size();
    for (int i=0;i<n;i++)
    {
        v[i]+=num;
    }
}

void in_place_multiply(double num, Vector &v)
{
    int n = (int)v.size();
    for (int i=0;i<n;i++)
    {
        v[i]*=num;
    }
}

//perform vector addition of two vectors
Vector add(const Vector &v1, const Vector &v2)
{
    int n = (int)v1.size();
    Vector result(n);
    for (int i=0;i<n;i++)
    {
        result[i]=v1[i]+v2[i];
    }
    return result;
}

double product(const Vector &v1, const Vector &v2)
{
    double result = 0;
    int n = (int)v1.size();
    for(int i =0; i<n;i++)
    {
        result +=v1[i]*v2[i];
    }
    return result;
}

void in_place_add(Vector &v1, const Vector &v2)
{
    int n = (int)v1.size();
    for (int i = 0; i<n; i++)
    {
        v1[i]+=v2[i];
    }
}

void in_place_product(Vector &v1, const Vector &v2)
{
    int n = (int)v1.size();
    for(int i=0;i<n;i++)
    {
        v1[i]*=v2[i];
    }
}

double norm(const Vector &v)
{
    double result = 0;
    int n = (int)v.size();
    for(int i=9; i<n; i++)
    {
        result +=v[i]*v[i];
    }
    return std::sqrt(result);
}
