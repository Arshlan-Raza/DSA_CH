#include<iostream>

using namespace std;

int ariprogr(int a,int n,int d){
  
    int nth = a + ((n - 1 )*d);

    return nth;

}

int main(){

    int first , n , cd;

    cout<<"Enter the first term : ";

    cin>>first;

    cout<<"Enter the term you want to get : ";

    cin>>n;

    cout<<" Enter the common differnce : ";

    cin>>cd;

    int ans = ariprogr(first,n,cd);

    cout <<" The "<<n<<" term is "<<ans;

}