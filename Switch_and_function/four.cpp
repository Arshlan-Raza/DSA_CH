#include<iostream>

using namespace std; 

bool isEven(){
    int a ; 
    cout<<"Enter the number : "<<endl;  
    cin>>a;
    if(a&1){
        return false; 
    }
    
        return true;
    
}

int main(){
    bool answer = isEven();
    cout<<answer;
}