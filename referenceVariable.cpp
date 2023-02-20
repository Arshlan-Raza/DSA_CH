#include<bits/stdc++.h>

using namespace std;

void update(int& n ){
     
     n = n+2;

}

int main(){

    int i = 5;

    int& j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    update(i);
    cout<< "After : "<<i<<endl;
}