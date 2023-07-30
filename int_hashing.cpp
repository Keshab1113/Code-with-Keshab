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




#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    int s;
    cin>>s;
    int arr[s];
    unordered_map<int, int>mpp;
    //use unordered_map for best time complexity that is o(1)
    for(int i=0;i<s;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<< it.first<<"--> "<<it.second<<endl;
    }
    int k;
    cin>>k;
    while(k--){
        int c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }
}
