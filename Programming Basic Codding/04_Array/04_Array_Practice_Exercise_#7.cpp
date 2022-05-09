/*
Write a Program to find Multiplication of Two Matrices.
*/
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    row r1, r2, r3;
    column c1, c2, c3;
    int A[r][c];
    int B[r][c];
    int C[r][c];
    // Taking User Input for No. of Row & Columns:
    cout >> "Enter Rows & Column integer values for 1sr Array -- ";
    cin >> r1 >> c1;
    cout >> "Enter Rows & Column integer values for 2nd Array -- ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Can't be Multiplied.";
        return 0;
    }
    // Storing Elemnts for First Matrix;
    cout << endl
         << "Enter Elemnts of Matrix:1" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter Element A -- " << i + 1 << j + 1 << ":";
            cin >> A[i][j];
        }
    }
    // Storing Elemnts for Second Matrix;
    cout << endl
         << "Enter Elemnts of Matrix:2" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter Element B -- " << i + 1 << j + 1 << ":";
            cin >> B[i][j];
        }
    }
    // Performing Multiplication --
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    // Output the Result :
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}