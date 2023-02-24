#include<bits/stdc++.h>

using namespace std;

int main(){

     // Right Angled Triangle Pattern
    cout << endl;
    cout << "You are going to see right angled triangle pattern:- " << endl;

    int height, i, j;
    char ch;
    cout << endl;
    cout << "Enter height of the triangle:";
    cout << endl;
    cin >> height;
    cout << endl;
    cout << "Enter the symbol of which you want to create the triangle also:- ";
    cout << endl;
    cin >> ch;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ch << "  ";
        }
        cout << endl;
    }
    cout << endl;

}