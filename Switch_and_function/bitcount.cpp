#include<iostream>

using namespace std;

int bitcount(int a , int b){

    int count1 = 0 , count2 = 0;

    while (a!=0 || b!=0 ){

        if(a&1 ){ 

            count1++;

        }
        if(b&1){

            count2++;

        }

        a = a>>1;
        b = b>>1;
    }  



    return (count1+count2);
}

int main(){

    int c , d;

    cout<<"Enter two values : ";

    cin>>c>>d;

    int res = bitcount(c,d);

    cout<<"The number of total 1 bit is : "<<res<<endl;

 

}