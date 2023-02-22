#include<bits/stdc++.h>

using namespace std;

void counting(int n){

    // Base Case                      //this is a example of tail recursion
    if(n == 0)                          
        return ;     

     //processing
    cout<<n<<" ";                
                                    
    // recursive relation   
    counting(n-1);

   

}

int main(){

    int n ; 
    cin>>n;

    cout<<"Printing Number : \n";
    counting(n);
}