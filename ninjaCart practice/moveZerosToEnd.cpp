#include<bits/stdc++.h>
using namesapce std;

void pushZerosToEnd(vector<int>&nums){
    int n = nums.size();
    int m=0;
    vector<int>temp(n);
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            count++;
        }else{
            temp[m++]=nums[i];
        }
    }
    for(int j=0;j<n;j++){
        if(temp[j]){
        nums[j]=temp[j];
        }else{
        nums[j]=0;
        }
    }
    }
}

int main(){
    vector<int>arr = {1,0,5,0,4,8,0};
    pushZerosToEnd(arr);
    for(int n:arr){
        cout<<arr[n]<<" ";
    }
    return 0;
}