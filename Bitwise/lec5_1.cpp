#include<iostream> 

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c ,d,e,f;
    c = a & b;
    d = a | b;
    e = ~a;
    f = a ^ b;
    //  = a & b;
    cout<<"The bitwise and operator is:"<<c<<endl;
    cout<<"The bitwise or operator is:"<<d<<endl;
    cout<<"The bitwise not operator is:"<<e<<endl;
    cout<<"The bitwise xor operator is:"<<f<<endl;
    // cout<<"The bitwise and operator is:"<<c;
}