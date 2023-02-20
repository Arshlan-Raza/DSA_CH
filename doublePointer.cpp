#include<bits/stdc++.h>

using namespace std;

int main(){

    int val = 5;

    int* p = &val;

    int** p2 = &p;

    cout<<endl;
    cout<<"Printing the addresse of val" <<endl;
    cout<<endl;
    cout<<&val<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<endl;
    cout<<"Printing the addresse of p" <<endl;
    cout<<endl;
    cout<<&p<<endl;
    // cout<<p<<endl;
    cout<<p2<<endl;

    cout<<endl;
    cout<<"Printing the addresse of p2" <<endl;
    cout<<endl;
    cout<<&p2<<endl;
    // cout<<p<<endl;
    // cout<<p2<<endl;

    cout<<endl;
    cout<<"Printing the value of val" <<endl;
    cout<<endl;
    cout<<val<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;




}