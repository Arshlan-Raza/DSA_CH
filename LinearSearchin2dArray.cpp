#include<bits/stdc++.h>

using namespace std;

bool isFound (int arr[][4], int n, int m, int element){

    
     for(int row = 0; row<3; row++){
        for(int col = 0;  col<4; col++){

             if(arr[row][col] == element){
                return 1;
             }
        }

    }
    return 0;

}

int main(){

    int arr[3][4];

    cout<<"Enter the 2d array elements : ";
 
     for(int row = 0; row<3; row++){
        for(int col = 0;  col<4; col++){

             cin>>arr[row][col];
        }

    }

    //printing the array elements 
    // cout<<"The array elements are : "<<endl;

    //   for(int row = 0; row<3; row++){
    //     for(int col = 0; col<4; col++){

    //        cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<"Enter the element to search : ";
    int element ;

    cin>>element;

    if(isFound(arr,3,4,element)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
