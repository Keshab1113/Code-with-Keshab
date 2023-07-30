#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    int k;
    cin>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    bubble_sort(arr, k);
     for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }   
}
