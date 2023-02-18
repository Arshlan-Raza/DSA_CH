#include<bits/stdc++.h>

using namespace std;

int main(){

    int num = 4;

    cout<<"The value of num is : "<<num<<endl;
    cout<<"The address of num is : "<<&num<<endl;

    int *p = &num;

    cout<<"The value is : "<<*p<<endl;
    cout<<"The address is : "<<p<<endl;

    num++;
    cout<<"The value is : "<<*p<<endl;

    (*p)++;
    cout<<"The address pointer is pointing to is : "<<p<<endl;
    cout<<"The value is : "<<*p<<endl;


}