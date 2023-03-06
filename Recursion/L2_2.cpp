#include<bits/stdc++.h>

using namespace std;


int fibonacci(int n){

    if(n == 0)
        return 0;
    if(n == 1)
        return 1 ;

    return ((fibonacci(n-1)+fibonacci(n-2)));

    
}


/*
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
*/

void fib(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    int c = a + b;
    cout << c << " ";
    fib(n-1, b, c);
}


int main(){

    int n;
    cin>>n;

    int a = 0, b =1;

   cout<<a<<" "<<b<<" ";
   fib(n-2,a ,b);

    int ans = fibonacci(n-1);

    cout<<endl;

    cout<<"The "<<n<<" element is : "<<ans<<endl;

    // cout<<"The "<<n<< " fibonacci term is :"<<forloop(n);

 


    return 0;
}