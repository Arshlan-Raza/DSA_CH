#include<bits/stdc++.h>

using namespace std;


vector<int> Vec(vector< vector <int> > vec ){

    vector<int> ans;

    int row = vec.size();
    int col = vec[0].size();

    int total = row * col;
    int count = 0;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count<total){

        // for the starting row 
        for(int index = startingCol; count<total && index <= endingCol; index++ ){
            ans.push_back(vec[startingRow][index]);
            count++;
        }
        startingRow++;

        // for the ending col
        for(int index = startingRow; count<total && index <= endingRow; index++){
            ans.push_back(vec[index][endingCol]);
            count++;
        }
        endingCol--;

        //for the ending row
        for(int index = endingCol; count<total &&  index >= startingCol; index -- ){
            ans.push_back(vec[endingRow][index]);
            count++;
        }
        endingRow--;

        // for the starting col
        for(int index = endingRow; count<total && index >= startingRow; index--){

            ans.push_back(vec[index][startingCol]);
            count++;
        }
        startingCol++;
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


    vector <int> ans  =Vec(vec);

    cout<<"Spiral Print is : "<<endl;
    for(int i= 0 ;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}