#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans=0;
    int i = 0;
    while(n!=0){
        int digit = n%10;
        ans = ans*10+digit;
        n/=10;
        i++;
    } 
    if(n<=pow(2,31)-1&&n>=pow(2,-31)){
        cout<<"Reverse number is : "<<ans;
    }
    else{
        cout<<"Garbage";
    }
}