#include<iostream>

using namespace std;

int main(){
    int sum {0};
    int first =0;
    int second =1;
    int n;
    
    cout<<"Enter the number :";
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(int i =1;i<=n;++i){
        sum = first + second;
        first = second;
        second = sum; 
        
        
        cout<< sum<<" ";
    }

}