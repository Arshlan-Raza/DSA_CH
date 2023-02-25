#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(string s , int i){

    int n = s.length()-1-i;

    if(i>(n)){
        return true;
    }

    if(s[i]!=s[n]){
        return false;
    }
    else{
        i++;
        // j--;
        return checkPalindrome(s,i);
    }
    
}
int main(){

    string str = "raza";

    bool ans  = checkPalindrome(str,0);
    
    if(ans){
        cout<<"It is palindorme"<<endl;
    }
    else{
        cout<<"It is not palindorme"<<endl;
    }
}