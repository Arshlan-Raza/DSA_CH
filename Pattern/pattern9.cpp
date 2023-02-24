#include<bits/stdc++.h>

using namespace std;

int main(){

     // Alphabetic Square Pattern
     
    cout << endl;
    cout << "You are going to see alphabetic square pattern:- " << endl;

    int side, i, j;
    char ch = 'A'; //* (For printing same alphabets in the rows)
    cout << endl;
    cout << "Enter side of the square:-";
    cout << endl;
    cin >> side;
    cout << endl;

    for (i = 1; i <= side; i++)
    {
        //! char ch = 'A';   (For Printing continuous aplhabetic order)
        for (j = 1; j <= side; j++)
        {
            cout << ch << " ";
            //! ch++;
        }
        cout << endl;
        ch++;
    }
    cout << endl;

}