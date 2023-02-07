#include<iostream>

using namespace std;

void iSort(int arr[], int k){

    for(int i = 0; i<k-1; i++){

        
        for(int j =0;j<k-i;j++){

            if(arr[j]>arr[j+1])
                swap(arr[j+1],arr[j]);
        }

        
    }
}

int print(int arr[], int k){

    for(int i =0; i<k ;i++){

        cout<<arr[i]<<" ";

    }

    cout<<endl;
}

int main(){


    int n ;

    int arr[100];

    cout<<"Enter the length of the arr : ";
    cin>>n;

    cout<<"Enter the array elements : ";
    for(int i = 0 ; i<n ; i++){

        cin>>arr[i];
    }

    cout<<"Elements before sorting :"<<endl;
    print(arr,n);

    iSort(arr,n);

    cout<<"Elements after sorting :"<<endl;
    print(arr,n);

}