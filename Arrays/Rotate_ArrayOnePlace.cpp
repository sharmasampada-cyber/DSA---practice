#include <iostream>
using namespace std;

int rotate_array(int arr[] , int n){
    int temp =arr[0];
    for(int i=1 ; i<n ; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Initial array : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    rotate_array(arr,n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
    return 0;
}