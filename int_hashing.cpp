#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int hash[10000]={0};
    for(int i=0;i<s;i++){
        hash[arr[i]]++;
    }
    int k;
    cin>>k;
    while(k--){
        int c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
}
