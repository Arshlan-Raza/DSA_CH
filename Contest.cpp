#include <bits/stdc++.h> 

using namespace std;

bool isPossible(int n, vector<vector<int>> &arr, int B,int mid){
    int tCount = 0 , fcount=1;

    for(int i = 1;i<n;i++){
        
        for(int j = 0;j<arr.size();j++){

            if((tCount + arr[i][j])<=mid){
                tCount+=arr[i][j];
            }
            else{
                
                fcount++;
                if(fcount>n || arr[i][j]>mid ){
                    return false;
                }
                
            }
             tCount = arr[i][j];
        }
       
    }
    // cout<<"The value of mid is :"<<mid<<endl;
    // cout<<"The value of tCount is :"<<tCount<<endl;
    return true;
}

int findMaxX(int n, vector<vector<int>> &arr, int B)
{
    int s =0, sum=0;

    for(int i =0;i<n;i++){
        for(int j = 0;j<arr.size();j++){
            sum+=arr[i][j];
        }
    }

    int e = sum;

    int mid = s + (e-s)/2;

    int ans = 0;

    while(s<=e){

        if(isPossible(n,arr,B,mid)){
            ans = mid;
            // cout<<"The value of ans is :"<<ans<<endl;
            e = mid - 1;
            // cout<<"The value of e is "<<e<<endl;
            
            
        }
        else{
            s = mid + 1;
             
            //  cout<<"The value of s is "<<s<<endl;
            
        }
        mid = s + (e-s)/2;
        // cout<<"The value of mid is:"<<mid<<endl;
    }
    
    cout<<"The value of answer is : "<<ans;
    return ans;
    
}
int main(){
    vector < vector<int> > arr ={{3 ,1, 2, 3},
                                {3 ,4 ,2, 3},
                                {3 ,1, 10, 2}};
    findMaxX(3,arr,20);
}