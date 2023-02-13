#include <bits/stdc++.h> 
using namespace std;

int mexArray(int n , vector<int> arr){
    
    int mex = 0;
    
    sort(arr.begin(),arr.end());
    
    for(int i = 0; i<n; i++){
        
        if(arr[i] == mex){
            mex++;
        }
    }
    return mex;
}

int main() {
	
	int T,N,K;
	cout<<"enter the value of t :";
	cin>>T;
	cout<<"enter the value of n and k :";
	cin>>N>>K;
	vector<int> a;
	cout<<"enter elements of array :";
	for(int i= 0; i<N; i++){
	    
	    cin>>a[i];
	}
	for(int i =1;i<=T;i++){
	    
	    cout<<mexArray(N,a)<<endl;
	}
	return 0;
}
