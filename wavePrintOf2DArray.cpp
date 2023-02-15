#include<bits/stdc++.h>

using namespace std;


vector<int> Vec(vector< vector <int> > vec , int mCols, int nRow){

    vector<int> ans;

    for(int col = 0; col<mCols ; col++){

        if(col & 1){

            // odd Index -> bottom to top 

            for(int row = nRow -1 ;row>=0; row-- ){

                ans.push_back(vec[row][col]);
            }
        }
        else{

            // 0 and even Index -> top to bottom

             for(int row = 0 ;row<nRow; row++ ){

                ans.push_back(vec[row][col]);
            }
        }
    }
    return ans;
}

int main(){

    vector<vector<int>> vec(20, vector<int>(20));

    int n, m;

    cout<<"Enter number of rows and colums : ";
    cin>>n>>m;

    for(int i = 0; i<n; i++){

        for(int j = 0; j<m ; j++){

            cin>>vec[i][j];
        }
    }


    vector <int> ans  =Vec(vec,m,n);

    cout<<"Wave Print is : "<<endl;
    for(int i= 0 ;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}