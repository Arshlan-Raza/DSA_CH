#include<iostream>
using namespace std;

int getMin(int num[],int n){

    int minn = INT64_MAX;

    for(int i =0 ; i<n; i++){

        minn = min(minn,num[i]);
        
        // if(num[i]<min){

        //     min = num[i];
            
        // }
    }

    return minn;
}

int getMax(int num[],int n){

    int maxx = INT64_MIN;

    for(int i =0 ; i<n; i++){

        maxx = max(maxx,num[i]);
        
        // if(num[i]>max){

        //     max = num[i];

        // }
    }

    return maxx;
}

int main(){

    int size ;

    cout<<"Enter the size of the array : ";

    cin>>size;

    int num[100];

    cout<<"Enter the array : "<<endl;

    for(int i =0 ; i<size; i++){

        cin>>num[i];
    }
    
    cout<<"The maximum number is : "<<getMax(num,size)<<endl;
    cout<<"The minimum number is : "<<getMin(num,size)<<endl;
}