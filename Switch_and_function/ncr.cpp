#include<iostream>

using namespace std;


int fact(int a){
   
    int fact =1;
    
    for(int i =1;i<=a;++i){
      
        fact*=i;

    }

    return fact;

}

int nCr(int n , int r){
  
    int num = fact(n);

    int denom = fact(r) * fact(n-r);

    return num/denom;
}

int main(){
    int n , r;

    cin>>n>>r;

    cout<<"The answer is : "<<nCr(n,r)<<endl;

}