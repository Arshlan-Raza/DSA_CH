#include<bits/stdc++.h>

using namespace std;

int main(){

     // Inverted Right Angle Character Triangle Pattern
    cout << endl;
    cout << "You are going to see inverted right angle triangle character pattern:- " << endl;

    int height, i, j, k;
    char ch;
    cout << endl;
    cout << "Enter height of the triangle:";
    cout << endl;
    cin >> height;
    cout << endl;
    cout << "Enter the symbol of which you want to create the triangle:- ";
    cout << endl;
    cin >> ch;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        for (k = 1; k <= (height - i); k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

}