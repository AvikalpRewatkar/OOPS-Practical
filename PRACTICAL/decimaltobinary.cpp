#include <iostream>
using namespace std;

int main()
{
    int decimal, binary[32];
    cin >> decimal;
    int temp = decimal;
    int i = 0;
    while (temp > 0)
    {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }

    return 0;
}