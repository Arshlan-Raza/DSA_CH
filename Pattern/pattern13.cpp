#include<bits/stdc++.h>

using namespace std;

int main(){

      // Reverse Right Angle Character Triangle Pattern
    cout << endl;
    cout << "You are going to see reverse right angle triangle character pattern:- " << endl;

    int height, i, j;
    char ch;
    cout << endl;
    cout << "Enter height of the triangle:- ";
    cout << endl;
    cin >> height;
    cout << endl;
    cout << "Enter the symbol of which you want to create the triangle:- ";
    cout << endl;
    cin >> ch;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        /* for (j = 1; j <= (height - i + 1); j++)
        {
            cout << ch << " ";
        } */
        for (j = height; j >= i; j--)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

}