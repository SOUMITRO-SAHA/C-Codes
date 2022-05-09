#include <iostream>
using namespace std;

int main()
{
    /*
    //--------- Nested For Loop --------//
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " (" << i << "," << j << ") ";
        }
        cout << endl;
        // Here, i ----> row; j ----> colum;
    }

    //--------- Nested For Loop [ Patterns ] ---------//
    // ----------[Pattern-1]------------//
    // ----------[Pattern-1]------------//
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    // ----------[Pattern-2]------------//
    // ----------[Pattern-2]------------//
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    // ----------[Pattern-3]------------//
    // ----------[Pattern-3]------------//
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                cout << "   ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    // ----------[Pattern-4]------------//
    // ----------[Pattern-4]------------//
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i + j >= (4 - 1))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    */
    // ---------- Practice Problem-37:[Pattern]-------------- //
    // // Draw Pattern given in description for n x n dimensions
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // ---------- Practice Problem-41:[Pattern]-------------- //
    /*
    * * * * *
    * * * *
    * * *
    * *
    *
    Print this Pattern
    */
    // !My Solution ---------- //
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j <= (n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    // ********* Expert Solution.*************
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}