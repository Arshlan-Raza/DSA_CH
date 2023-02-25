#include <iostream>
using namespace std;

int main() {
    
    int n ;
    cin>>n;

    int count = 0;
    // vector<int> p;

    int sumE =0,sumO = 0;

    while(n!=0){

        int digit = n%10;
        count++;
        if(count%2==0){
            sumO+=digit;
        }
        else{
            sumE+=digit;
        }

        n=n/10;

       

    }

    cout<<sumE<<" "<<sumO;

    return 0;
}