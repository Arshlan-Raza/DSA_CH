// array is sorted or not using recursion 

#include<bits/stdc++.h>

using namespace std;

bool isSorted(int *arr, int n){

    // base case 

    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        isSorted((arr+1), (n -1));
    }
    return true ;
}

void getElements(int arr[], int n){

        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
}
int main(){

    int arr[20] = {0};
    int n;

    cout<<"Enter the elements :";

    cin>>n;

    cout<<"Enter the array elements : "<<endl;

    getElements(arr,n);

    if(isSorted(arr,n)){
        cout<<"Sorted ";
    }
    else{
        cout<<"Not Sorted ";
    }

}