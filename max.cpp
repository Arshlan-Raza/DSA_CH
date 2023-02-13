#include <bits/stdc++.h> 

using namespace std;

void printArray(vector<int> arr){

    for (int i = 0;i<arr.size();i++){

        cout<<arr[i]<<" ";

    }
}

int findMaxX(int n, vector<vector<int>> &arr, int B)
{
    vector <int> arr1;

    for(int i = 0;i<n;i++){

        int sum = 0;
        for(int j =0;j<arr.size();j++){
            sum+=arr[i][j];
            
            
            
        }
        arr1.push_back(sum);
        cout<<"The "<<i<<"pushed is "<<sum<<endl;
    }
    int ans =0;
    cout<<"The answer arrar Elements are : ";
    printArray(arr1);
      for(int i = 0;i<arr1.size();i++){
        if(B>ans){
            ans+=arr1[i];  
        }
        else{
            break;
        }
        cout<<"The first answer is :"<<ans<<endl;
    }
    return ans;
    
}

int main(){
    vector < vector<int> > arr ={{3 ,1, 2, 3},
                                {3 ,4 ,2, 3},
                                {3 ,1, 10, 2}};
    findMaxX(3,arr,20);
}