#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[10] = {2, 5, 6, 10};

    cout<<"The address is : "<<arr<<endl;
    cout<<"The value is : "<<arr[0]<<endl;
    cout<<"The adress using & is : "<<&arr[0]<<endl;

    cout<<"The value using * is : "<<*arr<<endl;
    cout<<"Using * + 1 is : "<<*arr + 1<<" <-Here 1 got added in the first element"<<endl;

    cout<<"Using * + 1 in the bracket is : "<<*(arr + 1)<<" <-Here we got element at next index"<<endl;
}