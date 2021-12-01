#include <iostream>
using namespace std;

class largestnumber
{
    int a, b, c, d;

public:
    void large2()
    {
        cout << "Enter numbers : ";
        cin >> a >> b;
        // if (a > b)
        // {
        //     cout << a << " is large";
        // }
        // else
        // {
        //     cout << b << " is large";
        // }
        switch (a > b)
        {
        case 1:
            cout << a << " is large";
            break;
        case 0:
            cout << b << " is large";
        default:
            break;
        }
    }
    void large3()
    {
        cout << "Enter numbers: ";
        cin >> a >> b >> c;
        //     if (a > b && a > c)
        //     {
        //         cout << a << " is large";
        //     }
        //     else if (b > a && b > c)
        //     {
        //         cout << b << " is large";
        //     }
        //     else
        //     {
        //         cout << c << " is large";
        //     }
        switch (a > b)
        {
        case 1:
            switch (a > c)
            {
            case 1:
                cout << a << " is large";
                break;
            case 0:
                cout << c << " is large";
                break;
            }
            break;
        case 0:
            switch (b > c)
            {
            case 1:
                cout << b << " is large";
                break;
            case 0:
                cout << c << " is large";
            }
        }
    }
    void large4()
    {
        cout << "Enter numbers: ";
        cin >> a >> b >> c >> d;
        // if (a > b && a > c && a > d)
        // {
        //     cout << a << " is large";
        // }
        // else if (b > a && b > c && b > d)
        // {
        //     cout << b << " is large";
        // }
        // else if (c > a && c > b && c > d)
        // {
        //     cout << c << " is large";
        // }
        // else
        // {
        //     cout << d << " is large";
        // }
        switch (a > b && a > c && a > d)
        {
        case 1:
            cout << a << " is large";
            break;
        case 0:
            switch (b > a && b > c && b > d)
            {
            case 1:
                cout << b << " is large";
                break;
            case 0:
                switch (c > a && c > b && c > d)
                {
                case 1:
                    cout << c << " is large";
                    break;
                case 0:
                    cout << d << " is large";
                    break;
                }
            }
        }
    }
};

int main()
{
    largestnumber lobj1;
    lobj1.large4();

    return 0;
}