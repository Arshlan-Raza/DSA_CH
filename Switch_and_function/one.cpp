#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter operation :";
    char operation=' ';
    cin>>operation;
    switch (operation)
    {
    case '+':cout<<a+b<<endl;
            break;
    case '-':cout<<a-b<<endl;
            break;
    case '*':cout<<a*b<<endl;
            break;
    case '/':cout<<a/b<<endl;
            break;
    
    default:cout<<"Invalid Operation"<<endl;
        break;
    }
}