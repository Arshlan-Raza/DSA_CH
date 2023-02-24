#include<bits/stdc++.h>

using namespace std;

int main(){

     // Right Angled Inverted Counting Triangle Pattern
     
    cout << endl;
    cout << "You are going to see right angled inverted triangle pattern:- " << endl;

    int height, i, j, val, k;
    char ch;
    cout << endl;
    cout << "Enter height of the triangle:";
    cout << endl;
    cin >> height;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
    

}