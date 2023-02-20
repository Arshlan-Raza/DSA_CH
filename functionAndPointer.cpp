#include<bits/stdc++.h>

using namespace std;

int getSum(int *arr, int n ){

    int sum = 0;

    for(int i = 0; i< n;i++){

        sum += arr[i];
    }

    return sum;
}

void update (int *p){

    *p = *p + 1;

}

int main(){

    int value ;
    cout<<"Enter the value : ";
    cin>>value;

    int *p = &value ;

    cout<<"Before : "<<*p<<endl;
    update(p);
    cout<<"After : "<<*p<<endl;

    int arr[5] = {1, 2, 3, 4, 5};

    cout<<"Sum is : "<<getSum(arr,5)<<endl;


}