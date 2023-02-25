#include<bits/stdc++.h>

using namespace std;

//function of reversing using recursion 

void reverse(int i , string &ch){

         int n = ch.length()-1-i;

        // base case 
        if(i>n){
            return;
        }

        //processing 
        swap(ch[i],ch[n]);
        i++;
        

        reverse(i,ch);
}

int main(){

    string s = "abcde";

    reverse(0,s);

    cout<<s;
    
}