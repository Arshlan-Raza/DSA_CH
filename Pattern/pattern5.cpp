#include<bits/stdc++.h>

using namespace std;

int main(){

     // Counting Square Pattern
    cout << endl;
    cout << "You are going to see counting square pattern:- " << endl;

    int side, i, j, counter = 1;
    cout << endl;
    cout << "Enter side of the square:";
    cout << endl;
    cin >> side;
    cout << endl;

    for (i = 1; i <= side; i++)
    {
        for (j = 1; j <= side; j++)
        {
            cout << counter << "  ";
            counter++;
        }
        cout << endl;
    }
 

}