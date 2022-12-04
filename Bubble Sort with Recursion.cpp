#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}

int main(){
    int arr[]={4,8,2,7,1,9};
    int size=6;
    sortArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//Output: {1,2,4,7,8,9}
