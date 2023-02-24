#include<bits/stdc++.h>

using namespace std;

int main(){

     // Number Square Pattern
     
    cout << endl;
    cout << "You are going to see a number square pattern:- " << endl;

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
            cout << i << "  ";
        }
        cout << endl;
    }
    

}