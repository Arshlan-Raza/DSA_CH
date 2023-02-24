#include<bits/stdc++.h>

using namespace std;

bool binarySearch(int *arr, int s , int e , int k){

    

    // base case (Element not found)
    if(s>e){
        return false;
    }

    int mid = s + (e - s)/2;

    // base case (Element  found)
    if(arr[mid] == k){
        return true;
    }

    //processing
    if(arr[mid]<k){
       return binarySearch(arr,mid+1,e,k);
    }

    else{
       return binarySearch(arr,s,mid-1,k);
    }
}

int main(){

    int arr[6] = {2,4,6,10,16,20};

    int key = 20;

    int ans = binarySearch(arr,0,5,key);

    if(ans){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not Found";
    }
}