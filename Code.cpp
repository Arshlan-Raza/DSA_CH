#include <bits/stdc++.h> 

using namespace std;

long long threeWaySplit(int n, vector<int> arr){
    
    sort(arr.begin(),arr.end());
    long long ans = 0;
    for(int i = 0; i<n-1;i++){
        
        for(int j = i+1; j<n-1 ; j++){

            if(arr[i]+arr[j]==arr[n] || arr[i]==arr[n]){
                    ans = arr[n];
            }
                
        }
    }
     return ans;
}

int main(){
    vector <int> arr={2 ,3, 1, 5 };
    cout<< threeWaySplit(4,arr);


}