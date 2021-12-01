class abc;
class xyz
{
    int x;

public:
    static void input();
    // {
    //     cout << "Enter x: ";
    //     cin >> x;

    // }
    friend void compare(abc, xyz);
};