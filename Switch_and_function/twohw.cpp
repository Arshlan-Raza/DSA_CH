#include<iostream>

using namespace std;

int main(){
    int total;
    int i=1,a,b,c;
    cout<<"Enter the amount :";
    cin>>total;
    switch(i){
        case 1:cout<<total/100<<" 100 rupess note"<<endl;
                    a =total - (total/100)*100;

        case 2:cout<<a/50<<" 50 rupess note"<<endl;
                  b =total - (total/50)*50;

        case 3:cout<<b/20<<" 20 rupess note"<<endl;
                   c =total - (total/20)*20;

        case 4:cout<<c/10<<" 10 rupess note"<<endl;
                    // a =total - (total/100)*100;
    }
}