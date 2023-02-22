
#include<bits/stdc++.h>

using namespace std;

int arrSum(int *arr, int n ){

    // base case 
    if(n == 0)
        return n;

     //processing
    int sum = arr[0] + arrSum((arr+1),(n-1));// relative relation

    return sum;
    
}

// sum of array using the recursion 
int main (){

    int arr[6] = {3,2,5,1,6};

    int ans = arrSum(arr,6);

    cout<<"The sum is : "<<ans<<endl;
}