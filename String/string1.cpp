#include <iostream>
using namespace std;
int main()
{
    string source = "Aman";
    cout << source.capacity() << endl;

    // string :: iterator i = source.begin();
    auto i = source.end();
    cout << *i;

    return 0;
}