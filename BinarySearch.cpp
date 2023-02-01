#include<iostream>

using namespace std;

int binarySearch(int arr[] , int size , int key ){

    int start = 0;

    int end = size - 1;

    int mid = start + (end - start)/2;

    while (start <= end){

        if (arr[mid] == key){
            
            return mid ;

        }

        if(key > arr[mid]){

            start = mid + 1;

        }
        else{

            end = mid  - 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main(){

    int even[6] = {2 , 6 , 11 , 17 , 21 , 26};
    int odd[5] = {6 , 12 , 16 , 21 , 35};

    int evenIndex = binarySearch(even , 6 , 11);
    int oddIndex = binarySearch(odd, 5 , 21);

    cout<<"The element 11 is present at index : "<<evenIndex<<endl;
    cout<<"The element 21 is present at index : "<<oddIndex<<endl;

}