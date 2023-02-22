#include<bits/stdc++.h>

using namespace std;


int power(int n){

    if(n==0)
        return 1;
    return (2*power(n-1));
}

int main(){

    int n;

    cin>>n;

    cout<<n<<" to the power of 2 is : "<<power(n);
}