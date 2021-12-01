#include <iostream>
using namespace std;

class complex
{
private:
    float real1, img1, real2, img2;

public:
    void input()
    {
        cout << "Enter real number of complex number 1: ";
        cin >> real1;
        cout << endl;
        cout << "Enter imaginary number of complex number 1: ";
        cin >> img1;
        cout << endl;
        cout << "Enter real number of complex number 2: ";
        cin >> real2;
        cout << endl;
        cout << "Enter imaginary number of complex number 2: ";
        cin >> img2;
        cout << endl;
    }

public:
    void addition()
    {
        int resultr, imgr;
        resultr = real1 + real2;
        imgr = img1 + img2;
        if (imgr >= 0)
            cout << "Addition is " << resultr << "+" << imgr << "i" << endl;
        else
            cout << "Addition is " << resultr << imgr << "i" << endl;
    }
    void subtraction()
    {
        int resultr, imgr;
        resultr = real1 - real2;
        imgr = img1 - img2;
        cout << "Addition is " << resultr << " + " << imgr << "i" << endl;
    }
    void multiplication()
    {
        int resultr, imgr;
        if ((img1 >= 0 && img2 >= 0) || (img1 < 0 && img2 < 0))
            resultr = real1 * real2 - (img1*img2);
        else 
            resultr = real1 * real2 + (img1*img2);
        imgr = real2*img1 + real1 * img2;
        cout << resultr << "+(" << imgr <<")i" << endl;
    }
    void division()
    {
        float resultr, imgr;
        if ((img1 >= 0 && img2 >= 0) || (img1 < 0 && img2 < 0))
            resultr =(real1 * real2 + (img1*img2))/(real2*real2 + img2*img2);
        else 
            resultr = (real1 * real2 - (img1*img2))/(real2*real2 + img2*img2);
        imgr = ((real2*img1) + (real1 * img2))/(real2*real2 + img2*img2);
        cout << resultr << "+(" << imgr <<")i" << endl;
    }
};


int main()
{
    complex obj1;
    obj1.input();
    // obj1.addition();
    // obj1.subtraction();
    // obj1.multiplication();
    // obj1.division();
}