#include <iostream>
using namespace std;

int remove_duplicate(int arr[] , int n){
    int i=0;
    for(int j=1 ; j<n ; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return(i+1);     // we need to return the size of array ..so i is the index and size will be one more of index
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Before removing duplicates : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Size of array : "<<remove_duplicate(arr,n);
    return 0;
}