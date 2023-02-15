#include<bits/stdc++.h>

using namespace std;

void rowSum(int arr[][4], int n , int m ){

    for(int i = 0 ; i<3; i++){
        
        int sum = 0;

        for(int j = 0; j<4; j++){

            sum+= arr[i][j];
        }
        cout<<"The sum of "<<i+1<<" is "<<sum<<endl;
    }
}

int lowestRowSum(int arr[][4], int n , int m ){

    int mini = INT_MAX;
    int rowIndex = -1;

    for(int i = 0 ; i<3; i++){
        
        int sum = 0;

        for(int j = 0; j<4; j++){

            sum+= arr[i][j];
        }
        if(sum < mini){
            mini = sum;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main(){

    int arr[3][4];

    cout<<"Enter the 2d array elements : ";
 
     for(int row = 0; row<3; row++){
        for(int col = 0;  col<4; col++){

             cin>>arr[row][col];
        }

    }

    cout<<"The array elements are : "<<endl;

      for(int row = 0; row<3; row++){
        for(int col = 0;  col<4; col++){

             cout<<arr[row][col]<<" ";
        }
        cout<<endl;

    }
     cout<<endl;

    cout<<"The row wise sum is : "<<endl;

    cout<<endl;

    rowSum(arr,3,4);

    cout<<"The index of lowest sum of row is "<<lowestRowSum(arr,3,4);
}
