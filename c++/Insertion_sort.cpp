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
    int didswap=0;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                didswap=1;
            }
        }
        if(didswap==0){ // This is for less time complexity
            break; // This is for when the arr is already sorted, then we did not want to run the for loop again
        }
        //Now the time complexity is o(n), this is base case. the average and worst case is o(n^2)
    }
}
void insertion_sort(int arr[], int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
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
    insertion_sort(arr, k);
     for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }   
}
