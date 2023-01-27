#include<iostream> 

using namespace std;

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int sum {0};
    int prod{1};
    while(n!=0){
        int rem;
        rem =n%10;
        prod*=rem;
        sum+=rem;
        n/=10;

    }
    
    int total = prod - sum;
    cout<<total;

}