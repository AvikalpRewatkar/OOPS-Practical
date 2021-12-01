#include <iostream>
using namespace std;

class date
{
    int dd, mm, yyyy;
    public:
    date(int dd = 07, int mm = 10, int yyyy = 2021)
    {
        this->dd = dd;
        this->mm = mm;
        this->yyyy = yyyy;
    }
    void input()
    {
        cout << "Enter date: ";
        cin >> dd;
        cout << "Enter month: ";
        cin >> mm;
        cout << "Enter year: ";
        cin >> yyyy;
    }
    void output()
    {
        cout << "DD-MM-YYYY :: " << dd << "-" << mm << "-" << yyyy <<endl;
    }
};
int main()
{
    date obj1;
    // obj1.input();
    obj1.output();

}