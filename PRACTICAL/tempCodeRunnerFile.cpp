#include<iostream>
using namespace std;
class xyz;
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
};
void compare (abc aobj, xyz xobj)
{
    if(aobj.a > xobj.x)
    {
        cout << aobj.a;
    }
    else{
        cout << xobj.x;
    }
}
int main()
{
    abc obj1;
    xyz obj2;
    
    compare(obj1, obj2);
}