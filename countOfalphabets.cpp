#include<iostream>
#include<string>

using namespace std;

char getMaxOcc(string s){

    int arr[26] = {0};

    for (int i = 0 ; i<s.length(); i++){
        
        int  numb = s[i] - 'a';
        arr[numb]++;
    }

    int maxi = -1 , ans = 0;

    for(int i = 0; i<26; i++){

        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    return ans+'a';
}

int main(){

    string s;
    cin>>s;

    cout<<getMaxOcc(s);
}