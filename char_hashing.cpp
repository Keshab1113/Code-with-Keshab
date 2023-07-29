#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int k;
    cin>>k;
    while(k--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
}
// if te input is only lowercase then -a, for A then -A
// And when all cheracter then only use hash[s[i]]++;
// Our total char is 256


//using unordered_map
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
