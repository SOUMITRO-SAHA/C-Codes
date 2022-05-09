/*
Write a Program to Calculate Average of All elements in an Array.
*/
#include <iostream>
using namespace std;
int main()
{
    // * My Solution But Not working.
    // int n;
    // cout << "Enter the value of N -- ";
    // cin >> n;
    // int A[n];
    // int sum = 0;
    // float avg;
    // cout << "Enter the Numbers -- ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[n];
    // }
    // for (int x : A)
    // {
    //     sum += x;
    // }
    // avg = sum / (n * 1.0);
    // cout << avg << endl;
    // ! ___________ Expert Solution _________ //
    // ! ___________ (Udemy --> Abdul Bari ) _________ //
    int n, i;
    float num[n], sum = 0.0, average;
    cout << "Enter the numbers of Element: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Average = " << average;
    return 0;
}