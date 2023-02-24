#include<bits/stdc++.h>

using namespace std;

int main(){

     // Inverted Alphabetic Triangle Pattern
     
    cout << endl;
    cout << "You are going to see inverted alphabetic triangle pattern:- " << endl;

    int height, i, j;
    char value, ch = 'A';
    cout << endl;
    cout << "Enter height of the triangle:-";
    cout << endl;
    cin >> height;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        value = ch + height - i;
        for (j = 1; j <= i; j++)
        {
            cout << value << "  ";
            value++;
        }
        cout << endl;
    }
    cout << endl;

}