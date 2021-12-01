#include <iostream>
using namespace std;

class matrixA
{
public:
    int m1[10][10];
    int r1, c1;
    void input()
    {
        cout << "Enter the no. of rows in matrix 1" << endl;
        cin >> r1;
        cout << "Enter the no. of column in matrix 1" << endl;
        cin >> c1;
    }
    friend void process();
};
class matrixB
{
public:
    int m2[10][10];
    int r2, c2;
    void input()
    {
        cout << "Enter the no. of rows in matrix 2" << endl;
        cin >> r2;
        cout << "Enter the no. of column in matrix 2" << endl;
        cin >> c2;
    }
    friend void process();
};

friend void process()
{
    if (c1 != r2)
    {
        cout << "Matrix cant be multiplied" << endl;
    }
    else
    {
        cout << "Enter the element of first matrix:" << endl;

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                cin >> m1[i][j];
            }
        }

        cout << "Enter the element of second matrix: " << endl;
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cin >> m2[i][j];
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                m3[i][j] = 0;

                for (k = 0; k < c1; k++)
                {
                    m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
                }
            }
        }
}
void printMatrix()
{
    cout << "The elements of the resultant matrix are: " << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    
}

int main()
{
    // int m1[10][10], m2[10][10], m3[10][10];
    // int r1, r2, c1, c2, i, j, k;
    // cout << "Enter the no. of rows in matrix 1" << endl;
    // cin >> r1;
    // cout << "Enter the no. of column in matrix 1" << endl;
    // cin >> c1;
    // cout << "Enter the no. of rows in matrix 2" << endl;
    // cin >> r2;
    // cout << "Enter the no. of column in matrix 2" << endl;
    // cin >> c2;

    // if (c1 != r2)
    // {
    //     cout << "Matrix cant be multiplied" << endl;
    // }
    // else
    // {
    //     cout << "Enter the element of first matrix:" << endl;

    //     for (i = 0; i < r1; i++)
    //     {
    //         for (j = 0; j < c1; j++)
    //         {
    //             cin >> m1[i][j];
    //         }
    //     }

    //     cout << "Enter the element of second matrix: " << endl;
    //     for (i = 0; i < r2; i++)
    //     {
    //         for (j = 0; j < c2; j++)
    //         {
    //             cin >> m2[i][j];
    //         }
    //     }
    //     for (i = 0; i < r1; i++)
    //     {
    //         for (j = 0; j < c2; j++)
    //         {
    //             m3[i][j] = 0;

    //             for (k = 0; k < c1; k++)
    //             {
    //                 m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
    //             }
    //         }
    //     }

        cout << "The elements of the resultant matrix are: " << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}