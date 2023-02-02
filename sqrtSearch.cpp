#include<iostream>

using namespace std;

long long int searchElement(int n){

     int s = 0 , e = n ;

    long long int mid = s + (e - s)/2;
    
    while(s<=e){

        if((mid*mid) == n){
            return mid;

        }
        else if((mid * mid) > n ){

            e = mid - 1;
        }
        else {

            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }

    return -1;

}

int main(){

    int n;

    cout<<"Enter the number : ";

    cin>>n;

    cout<<searchElement(n);

}