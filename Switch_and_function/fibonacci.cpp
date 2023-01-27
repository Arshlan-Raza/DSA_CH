#include<iostream>

using namespace std;

void fib(int n ){

    int first = 0 , second = 1;
    
    int sum = 0 ;

    int ar[n+1]{0};
    ar[0] = first;
    ar[1] = second;

    // cout<<first<<" ";

    // cout<<second<<" ";
    
    for(int i = 0;i<n; i++ ){
        sum = first + second ;

        ar[i+2] = sum;

        first = second;

        second = sum;
    }

    cout<<"The number is : "<<ar[n-1];


}

int main(){

    int number ; 

    cout<<"Enter the number : ";

    cin >> number;

    fib(number);

}