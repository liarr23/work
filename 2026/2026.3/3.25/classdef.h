#ifndef CLASSDEF_H_INCLUDED
#define CLASSDEF_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class X;
class Y
{
    public:
    void g(X *x);
};
class Z
{
    public:
    void f(X *x);
};
void h(X *x);
class X
{
    public:
    friend void Y::g(X *x);
    friend class Z;
    friend void h(X *x);
    int geti()
    {
        return i;
    }
    X()
    {
        i=0;
    }
    private:
    int i;
};
void Y::g(X *x)
{
    x->i=x->i+1;
}
void Z::f(X *x)
{
    x->i=x->i+5;
}
void h(X *x)
{
    x->i=x->i+10;
}
#endif // CLASSDEF_H_INCLUDED
