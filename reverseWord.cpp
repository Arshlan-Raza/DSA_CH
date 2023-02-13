#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string reverse(string s ){
    int st = 0;
    int e = s.length() - 1;
    while(st < e){
        swap(s[st], s[e]);
        st++;
        e--;
    }
    return s;
}

int main(){
    string s;
    cout << "Enter your string: ";
    getline(cin, s);

    vector<string> words;
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i]=='\0') {
            words.push_back(reverse(s.substr(start, i - start)));
            start = i + 1;
        }
    }
    // words.push_back(reverse(s.substr(start)));

    // reverse(words.begin(), words.end());

    // string result = "";
    // for (int i = 0; i < words.size(); i++) {
    //     result += words[i] + " ";
    // }
    // result.pop_back();

    cout << "The reversed string is:" << endl;
    for(int i = 0;i<words.size();i++){
        // cout<<a;
        cout << words[i]<<" " ;
    }
    

    return 0;
}
