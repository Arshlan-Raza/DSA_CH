#include<bits/stdc++.h>

using namespace std;

//function of reversing using recursion 

void reverse(int i , int j , string &ch){

        // base case 
        if(i>j){
            return;
        }

        //processing 
        swap(ch[i],ch[j]);
        i++;
        j--;

        reverse(i,j,ch);
}

int main(){

    string s = "abcde";

    reverse(0,s.length()-1,s);

    cout<<s;
    
}