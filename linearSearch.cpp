#include<iostream>

using namespace std;

bool found(int arr[] , int n ,int key ){



    for(int i =0 ; i<n; i++){

        if(key == arr[i])
            return 1;
    }

    return 0 ;


}

int main(){

     int size = 100;
      
    int arr[100] = {2,5,4,-1,2,5,10};

    int k ;

    cout<<"Enter the element to search : ";

    cin>>k;

    bool f = found(arr, size , k);

    if(f == 1){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }

}