#include<iostream>

using namespace std;

long long int sqrtNum(int n ){

    int s = 0, e =n;

    long long int ans = -1;

    long long int mid = s + (e - s)/2;

    while(s<=e){

        if((mid * mid ) == n){
            return mid;
        }
        else if((mid * mid) < n){

            ans = mid;

            s = mid +1;

        }
        else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
        
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol){

    double factor = 1;

    double ans = tempsol;

    for(int i = 0; i<precision; i++){
        factor/=10;
        for(double j = ans ; (j*j)<n; j=j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int n ;

    cout<<"Enter the number : ";
    cin>>n;
    int tempSol = sqrtNum(n);

    cout<<"Answer is "<<morePrecision(n, 3, tempSol);

}