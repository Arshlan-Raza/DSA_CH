#include<bits/stdc++.h>

using namespace std;

int main(){

     // Alphabetic Triangle Pattern

    cout << endl;
    cout << "You are going to see alphabetic triangle pattern:- " << endl;

    int height, i, j;
    char ch = 'A'; //* (For printing same alphabets in the rows)
    cout << endl;
    cout << "Enter height of the triangle:-";
    cout << endl;
    cin >> height;
    cout << endl;

    for (i = 1; i <= height; i++)
    {
        //! char ch = 'A'; // (For Printing continuous aplhabetic order)

        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";

            //! ch++; // (For Printing continuous aplhabetic order)

        }
        cout << endl;

        ch++; //* (For printing same alphabets in the rows)
        
    }
   

}