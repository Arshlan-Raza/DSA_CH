#include<bits/stdc++.h>

using namespace std;


class Solution {

private:
    bool checkEqual(int count1[26],int count2[26]){

        for(int i = 0; i<26; i++){

            if(count1[i]!=count2[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        int count1[26] = {0};

        for(int i=0; i<s1.length(); i++){
            
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i = 0;

        int count2[26]={0};

        while(i < s1.length() && i < s2.length()){
                int index = s2[i] - 'a';
                count2[index]++;
                i++;
        }
          
        if(checkEqual(count1,count2)){
            return 1;
        }

        while(i<s2.length()){

            int newChar = s2[i] ;
            int index = newChar - 'a';
            count2[index]++;

            int oldChar = s2[i-s1.length()];
            index = oldChar - 'a';
            count2[index]--;

            if(checkEqual(count1,count2)){
                return 1;
            }
            
            i++;
        }
        return 0;
    }
};

int main(){

    string s1, s2;

    cout<<"Enter the strins : ";
    cin>>s1>>s2;

    Solution s;
    cout<<"The answer is : "<<s.checkInclusion(s1,s2);
}

