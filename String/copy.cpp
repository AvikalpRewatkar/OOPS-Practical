#include <iostream>
using namespace std;

int main()
{
    string source = "Lokesh Patel";
    string target;
    target.resize(source.length());
    copy(source.begin(), source.end(), target.begin());
    cout << target;

    return 0;
}