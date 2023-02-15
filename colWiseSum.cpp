#include<bits/stdc++.h>

using namespace std;

void colSum(int arr[][4], int n , int m ){

    for(int i = 0 ; i<4; i++){
        
        int sum = 0;

        for(int j = 0; j<3; j++){

            sum+= arr[j][i];
        }
        cout<<"The sum of "<<i+1<<" is "<<sum<<endl;
    }
}

int main(){

    int arr[3][4];

    cout<<"Enter the 2d array elements : ";
 
     for(int row = 0; row<3; row++){
        for(int col = 0;  col<4; col++){

             cin>>arr[row][col];
        }

    }

    cout<<endl;

    cout<<"The array elements are : "<<endl;

      for(int row = 0; row<3; row++){
        for(int col = 0;  col<4; col++){

             cout<<arr[row][col]<<" ";
        }
        cout<<endl;

    }
     cout<<endl;

    cout<<"The col wise sum is : "<<endl;

    cout<<endl;

    colSum(arr,3,4);

}
