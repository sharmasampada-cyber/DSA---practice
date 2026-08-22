#include <iostream>
using namespace std;

void merge(int arr[] , int low  , int high){
    //Temporary array jismei we are adding elements after getting sorted into halves
    int temp[1000];
    int k=0;
    int left=low;
    int right =mid+1;
    while(left<=mid && right<=high){
        if(arr[left] < arr[right]){
            temp[k]=arr[left]
            left++;
        }
        else{
            temp[k]=arr[right];
            right++;
        }
    }
}

void merge_sort(int arr[] , int low , int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    //For sorting left half
    merge_sort(arr , low , mid);
    //For sorting right half
    merge_sort(arr , mid+1 , high);
    //For soting all left and right half
    merge_sort(arr , low , mid , high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Before Sorting";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    cout<<"After Sorting";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}