#include<bits/stdc++.h>

using namespace std;

inline int getMax(int& a,int& b){

    return (a>b)?a:b;
}


int main(){

    int a,b;

    cin>>a>>b;

    cout<<getMax(a,b);
}