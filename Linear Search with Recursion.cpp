#include<iostream>
using namespace std;


bool linearSearch(int arr[],int size, int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remain = linearSearch(arr+1,size-1,k);
        return remain;
    }
}

int main(){
    int arr[5]={3,5,4,8,7};
    int size = 5;
    int key = 7;
    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
}

//Output: Present
