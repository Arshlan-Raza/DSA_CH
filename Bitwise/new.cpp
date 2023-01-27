#include<iostream>

using namespace std;
int main(){
    // int a = 1;
    // b =2;
    // // a =10;
    // if(a-- >0 && ++b>2){
    //     cout<<" THIS"<<endl;
    // }
    // else{
    //     cout<<"THAT";
    // }
    // cout<<a<<" "<<b;
    int a = 1; 
    int b = a++;
    int c = ++a;
    cout << b <<" "<<c;
}