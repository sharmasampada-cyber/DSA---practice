#include <iostream>
using namespace std;

int largest_element(int arr[] , int n){
    int largest=arr[0];
    for(int i=0 ; i<n ; i++){
        if(arr[i]>arr[0]){
            largest=arr[i];
        }
    }
    // cout<<"largest element is : "<<largest;    agar mai ye wla bhi call kru toh 2 baar 5 print hoga ..isliye ya toh ye call hoga ya niche function k aage cout lgega
    return largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Actual array : "
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<largest_element(arr,n);
    return 0;
}