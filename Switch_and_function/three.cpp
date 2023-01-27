#include<iostream>
#include<math.h>

using namespace std;

int power(){
    int a ,  b;
    cout<<"Enter the values : "<<endl;
    cin>> a >> b;
    int ans = 1;
    for(int i= 1;i<=b;++i){
        ans*=a;
    }
    return ans;

}

int main(){
    int ans = power();
    cout<<"Answer is : "<<ans<<endl;

}