#include<bits/stdc++.h>

using namespace std;

int main(){

     // Number Square Pattern - Part 2
     
    cout << endl;
    cout << "You are going to see another version of number square pattern:- " << endl;

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
            cout << j << "  ";
        }
        cout << endl;
    }
    cout << endl;

}