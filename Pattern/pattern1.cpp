#include<bits/stdc++.h>

using namespace std;

int main(){

     // Square Pattern
     
    cout << endl;
    cout << "You are going to see a square pattern:- " << endl;

    int side, i, j;
    cout << endl;
    cout << "Enter side of the square:";
    cout << endl;
    cin >> side;
    cout << endl;

    for (i = 1; i <= side; i++)
    {
        for (j = 1; j <= side; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}