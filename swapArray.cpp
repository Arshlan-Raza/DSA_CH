#include<iostream>

using namespace std;

void swap(int arr[],int n){

    int start = 0;

    int end = n-1;

    while(start<=end){

       swap(arr[start], arr[end]);

       start++;

       end--;


    }


}

void print(int arr[] , int n ){

    for (int i = 0 ; i<n ; i++){

        cout<<arr[i]<<" ";
    }
}

int main(){

    int size ; 

    cout<<"Enter the size of array : ";

    cin>>size;

    int num[100];

    for(int i = 0 ; i<size ; i++){

        cin>>num[i];
    }
    cout<<"Array before swapping : "<<endl;
    print(num , size );

    swap(num,size);

     cout<<"\nArray after swapping : "<<endl;
    print(num , size );

}