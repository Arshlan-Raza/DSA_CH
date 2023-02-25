#include<bits/stdc++.h>

using namespace std;

int main(){

       // Inverted Same Number Triangle Pattern
       
    cout << endl;
    cout << "You are going to see a inverted same number triangle pattern (H.W-2):- " << endl;

    int height, i, j, k, value = 1;
    char ch;
    cout << endl;
    cout << "Enter height of the triangle:- ";
    cout << endl;
    cin >> height;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        for (k = 1; k <= (height - i); k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << value << " ";
        }
        cout << endl;
        value++;
    }
    cout << endl;

}