#include<bits/stdc++.h>

using namespace std;

void value(int a){

    a = 8;
}

int main(){

    int a ;
    cout<<"Enter the value : ";
    cin>>a;

    cout<<"The value before call is : "<<a<<endl;

    value(a);

    cout<<"The value after the call is :"<<a<<endl;

}