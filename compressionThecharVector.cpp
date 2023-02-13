#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        int ansIndex = 0;

        int i = 0;

        while(i<n){

            int j = i+1;

            while(j<n && chars[i] == chars[j]){
                j++;
            }
            chars[ansIndex++] = chars[i]; 

            int count = j - i;

            if(count>1){
                string cnt = to_string(count);
                for(auto ch: cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};

int main(){

    int n ;
    cout<<"Enter the lenght : ";
    cin>>n;

    vector<char> chars(n);

    cout<<"Enter the elements of vector : ";

     for(int i = 0; i<n; i++){
             cin>>chars[i];
        }
       
    Solution s;

    cout<<"The size of compressed array is : "<<s.compress(chars);


}