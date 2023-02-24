
#include<bits/stdc++.h>

using namespace std;

// array is sorted or not using recursion
bool isFound(int *arr, int n,int key){

    // base case 

    if(n == 0 ){
        return false;
    }

    //processing 
    if(arr[0]== key){
        return true;
    }
    else{
         // recursive relation
        return isFound((arr+1), (n -1),(key));
    }
    
    
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

    int key;
    cout<<"Enter the element to search : ";
    cin>>key;

    if(isFound(arr,n,key)){
        cout<<"Found ";
    }
    else{
        cout<<"Not Found ";
    }

}