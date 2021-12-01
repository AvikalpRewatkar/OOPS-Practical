#include <iostream>
#include "abc.cpp"
#include "xyz.cpp"
using namespace std;
/*class xyz;
class abc
{
    int a;
    public:
    void input()
    {
        cout << "Enter a: ";
        cin >> a;

    }
    
    friend void compare(abc, xyz);
};
class xyz
{
    int x;
    public:
    void input()
    {
        cout << "Enter x: ";
        cin >> x;

    }
    friend void compare(abc, xyz);
};*/
friend void input()
{
    cout << "Enter a: ";
    cin >> a;
}
static void input()
{
    cout << "Enter x: ";
    cin >> x;
}
void compare(abc aobj, xyz xobj)
{
    if (aobj.a > xobj.x)
    {
        cout << "a(" << aobj.a << ") is greater";
    }
    else
    {
        cout << "x(" << xobj.x << ") is greater";
    }
}
int main()
{
    abc aobj1;
    xyz xobj2;
    aobj1.input();
    xobj2.input();
    compare(aobj1, xobj2);
}