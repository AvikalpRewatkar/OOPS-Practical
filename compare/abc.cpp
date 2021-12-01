class xyz;
class abc
{
    int a;

public:
    static void input();
    // {
    //     cout << "Enter a: ";
    //     cin >> a;

    // }
    friend void compare(abc, xyz);
};