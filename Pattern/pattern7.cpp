#include<bits/stdc++.h>

using namespace std;

int main(){

      // Right Angled Counting Triangle Pattern

    cout << endl;
    cout << "You are going to see right angled triangle pattern:- " << endl;

    int height, i, j, k, counting = 1;
    char ch;
    cout << endl;
    cout << "Enter height of the triangle:";
    cout << endl;
    cin >> height;
    cout << endl;
    // cout << "Enter the symbol of which you want to create the triangle:- ";
    cout << endl;
    // cin >> ch;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        int value = i;
        for (j = 1; j <= i; j++)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    cout << endl;

}