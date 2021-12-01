#include <iostream>
using namespace std;

class naturalNumber
{
    int res = 0;
    public:
        void forLoop()
        {
            for (int i=1; i<=100; i++)
            {
                res = res + i;
            }
            cout << res;
        }
        void whileLoop()
        {
            int i = 1;
            while (i<=100)
            {
                res = res + i;
                i++;
            }        
            cout << res;
        }
        void doLoop(){
            int i = 1;
            do
            {
                res = res + i;
                i++;
            } while (i <= 100);
            cout << res;
        }
};
int main()
{
    naturalNumber obj;
    obj.whileLoop();

    return 0;
}