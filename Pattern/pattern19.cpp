#include<bits/stdc++.h>

using namespace std;

int main(){

     // Continuous Number Triangle Pattern
     
    cout << endl;
    cout << "You are going to see a inverted & reverse continuous number triangle pattern (H.W-4):- " << endl;

    int height, i, j, k, value;
    char ch;
    cout << endl;
    cout << "Enter height of the triangle:- ";
    cout << endl;
    cin >> height;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        value = 1;
        for (k = 1; k <= i; k++)
        {
            cout << "  ";
        }
        for (j = height; j >= i; j--)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    cout << endl;

}