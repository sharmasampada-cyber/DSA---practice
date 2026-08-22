#include <iostream>
using namespace std;

int quick(int arr[] , int low , int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(j>=i){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1 ){
            j--;
        }
        if (i<j) swap(arr[i],arr[j]);
        }
    
    swap(arr[low],arr[j]);
    return j;   // void function agar bnate toh niche int partition mei change ho rha tha sb ...j isliye return kiya kyunki pivot element ki location chahiye taki hum usko partition bna ske
}

void quick_sort(int arr[] , int low , int high){
    if(low<high){
        int partition = quick(arr,low,high);
        quick_sort(arr , low , partition-1);
        quick_sort(arr , partition+1 , high);
}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Before sorting : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"After sorting : ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}