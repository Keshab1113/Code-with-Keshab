#include<iostream>
using namespace std;
int fibonachi(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int ans = fibonachi(n-1)+fibonachi(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans = fibonachi(n);
    cout<<"The "<<n<<"th number of fibonachi series is "<<ans<<endl;
    return 0;
}
