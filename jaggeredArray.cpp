#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter the number of row : ";
    cin>>n;

    int** arr = new int* [n];

    for(int i = 0; i<n; i++){
        arr[i] = new int[n-i];
    }

    cout<<"Enter the array elements : "<<endl;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the jaggered 2D Array : "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0;i<n; i++){
        delete []arr[i];
    }
    delete []arr;
}