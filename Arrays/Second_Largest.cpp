#include <iostream>
using namespace std;

int second_largest_element(int arr[] , int n){
    int largest=arr[0];
    for(int i=0 ; i<n ; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int second_largest=-1;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    return second_largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Actual array : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<second_largest_element(arr,n);
    return 0;
}