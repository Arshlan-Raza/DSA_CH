#include<iostream>

using  namespace std;

int main(){
    int size ;

    cout<<"Enter the size of array : "<<endl;

    cin>>size;

    int num[100];
    int sum = 0 ; 

    for(int i = 0;i<size;i++){

        cin>>num[i];
    }

    for(int i = 0 ; i<size ; ++i){

        sum+= num[i];
    }

    cout<< " The sum of array is : "<<sum<<endl;
}