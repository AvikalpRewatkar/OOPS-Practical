#include <iostream>
using namespace std;

class prime
{
    int a, flag = 1;
    public:
        void input()
        {
            cout << "Enter number: "; 
            cin >> a;
        }
        void checkPrime()
        {
            for (int i=2; i<a; i++)
            {
                if (a%i==0) 
                {
                    flag = 0;
                    break;
                }
            }
        }
        void output()
        {
            if (flag == 1)
            {
                cout << a << " is prime :-)";
            }
            else 
            {
                cout << a << " is not prime :-(";
            }
        }
};
int main()
{
    prime num1;
    num1.input();
    num1.checkPrime();
    num1.output();

    return 0;
}