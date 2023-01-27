#include<iostream>

using namespace std;

void printCount(int a ){
    
    for(int i =1;i<=a;i++){

        cout<<i<<" ";

    }

}

int main(){

    int n ;

    cout<<"Enter the until when you want the counting : ";

    cin>>n;

    printCount(n);

}