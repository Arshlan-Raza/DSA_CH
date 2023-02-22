#include<bits/stdc++.h>

using namespace std;

void reachHome(int src, int dest){

    cout<<"Source "<<src<<" Destination "<<dest<<endl;

    // base case 
    if(src == dest ){
        cout<<endl<<"Pahuch gaya "<<endl;
        return;
    }

    // processing 
    src++;

    // recursive relation 
    reachHome(src , dest);
}

int main(){

    int dest = 10;
    int src = 1;

    reachHome(src,dest);

    return 0;
}