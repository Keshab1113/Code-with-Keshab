#include<iostream>
using namespace std;

// int max(int *arr,int size,int index,int sum){

//     // if(size==0){
//     //     return size;
//     // }
//     if(index==size){
//         return sum;
//     }
//     sum+=arr[index];
//     cout<<sum<<endl;
//     max(arr,size,index+1,sum);
// }

int max(int *arr,int size,int sum){
    if(size==0){
        return sum;
    }
    sum+=arr[0];
    max(arr+1,size-1,sum);
}
int main(){
    int arr[]={2,4,5,7,8};
    int size=5;
    int sum=0;
    cout<<max(arr,size,sum);
}

//Output: 26
