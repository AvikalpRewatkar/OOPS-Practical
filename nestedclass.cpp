#include <iostream>
using namespace std;

class outer
{
    int a;
    public:
    class inner
    {
        public:
        void display()
        {
            cout << "AIML + BDA" << endl;
        }
    };
};
int main()
{
    outer :: inner obj;
    obj.display();
}