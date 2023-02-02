#include<iostream>

using namespace std;

int getpivot(int arr[], int n){

    int s =0,e = n - 1;

    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid]>=arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;

}

int main(){

    int arr[5] = {2,7,9,10,1};

    cout<<"The pivot Index is at : "<<getpivot(arr,5);

}