#include<bits/stdc++.h>

using namespace std;

void counting(int n){

    // Base Case                      //this is a example of head recursion
    if(n == 0)                          
        return ;                     
                                    
    // recursive relation   
    counting(n-1);

    //processing
    cout<<n<<" ";

}

int main(){

    int n ; 
    cin>>n;

    cout<<"Printing Number : \n";
    counting(n);
}