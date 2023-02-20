#include<bits/stdc++.h>

using namespace std;

int main(){

    char ch[6] = "abcde";

    char *c = &ch[0];

    cout<<c<<endl; // it will print entire character 

    cout<<*c<<endl; // it will print the first character 

    cout<< ch <<endl; // it will also print entire character 
}