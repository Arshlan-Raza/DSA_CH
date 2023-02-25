#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int *arr,int n){

        // base case
        if(n == 0 || n == 1)
            return;

        // processing
        for(int i = 0; i < n-1; i++){

            if(arr[i] > arr[i+1])
                swap(arr[i],arr[i+1]);
                
        }

        // recursive functioon
        bubbleSort(arr,n-1);

}

int main(){

    int arr[5] = {2,4,1,2,3};

    bubbleSort(arr,5);

    for(int i = 0; i<5; i++){

        cout<<arr[i]<<" ";
    }
}