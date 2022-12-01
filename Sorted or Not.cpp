#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool re = isSorted(arr+1,size-1);
        return re;
    }
}
int main(){
    int arr[5]={2,9,7,8,9};
    int size=5;
    bool ans=isSorted(arr, size);
    if(ans){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array is not sorted."<<endl;
    }
    return 0;
}

//Output: The array is sorted.
