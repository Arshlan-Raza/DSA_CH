#include<bits/stdc++.h>

using namespace std;

void update(int** p ){

    // kuch change hoga? - No 
    p = p + 1 ;

    // kuch change hoga? - Yes 
    // *p = *p + 1;

    // kuch change hoga? - Yes 
    // **p = **p + 1;


}

int main(){

    int val = 3 ;
    int *p = &val;
    int **p2 = &p ;

    cout<<"Before : "<<endl;
    cout<<val<<endl;
    cout<<p<<endl;
    cout<<&p2<<endl;
    update(p2);
    cout<<"After : "<<endl;
    cout<<val<<endl;
    cout<<p<<endl;
    cout<<&p2<<endl;

}