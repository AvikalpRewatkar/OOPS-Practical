#include <iostream>
using namespace std;
class pintu
{
public:
    static int count;
    void function()
    {
        count++;
    }
};
int pintu::count;
int main()
{
    pintu obj;
    obj.function();
    obj.function();
    obj.function();
    pintu obj1;
    obj1.function();
    cout << pintu::count << endl;
}