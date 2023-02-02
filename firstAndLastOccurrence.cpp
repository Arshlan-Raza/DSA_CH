#include<iostream>

using namespace std;

int firstOcc(int arr[], int n, int k){

    int s = 0 ; int e = n-1;

    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){

        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }

        else if(k >arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = mid = s + (e-s)/2;
        
    }
    return ans;
}

int lasttOcc(int arr[], int n, int k){

    int s = 0 ; int e = n-1;

    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){

        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }

        else if(k >arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
        
    }
    return ans;
}

int main(){

    int arr[11] = {1,2,4,5,5,5,5,5,7,9};

    cout<<"First occurrence is at Index "<<firstOcc(arr, 11, 11)<<endl;
    cout<<"Last occurrence is at Index "<<lasttOcc(arr, 11, 11)<<endl;

}