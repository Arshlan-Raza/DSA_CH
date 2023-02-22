#include<bits/stdc++.h>

using namespace std;

/*
int fibonacci(int n){

    if(n == 0)
        return 0;
    if(n == 1)
        return 1 ;

    return ((fibonacci(n-1)+fibonacci(n-2)));

    
}
*/

int forloop(int n){

    vector<int > ans;

    int first = 0, second = 1;
    int sum = 0;
    
    ans.push_back(first);
    ans.push_back(second);


    for(int i = 2;i<=n;i++){

        sum = first + second ;
        first = second ;
        second = sum ;
        ans.push_back(sum);
    }

    int res = ans[n-1];
    
    return res;
}

int main(){

    int n;
    cin>>n;

    // int ans = fibonacci(n);
    cout<<"The "<<n<< " fibonacci term is :"<<forloop(n);

    return 0;
}