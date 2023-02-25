#include<iostream>

using namespace std;

int binarySearch(int arr[], int n , int k,int s,int e){

    // int s = 0 , e = n - 1;
     
    int  mid = s + (e - s)/2;

    while(s<=e){
        if(arr[mid] == k){
            return mid;
        }
        else if(k > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}

int getpivot(int arr[], int n,int k){

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

    if(k<=arr[n-1] && k>=arr[s]){
        binarySearch(arr,n,k,s,n-1);
    }
    else{
        binarySearch(arr,n,k,0,s-1);
    }

}

int main(){

    int arr[5] = {7,9,10,1,2};

    cout<<"The pivot Index is at : "<<getpivot(arr,5,1);

}