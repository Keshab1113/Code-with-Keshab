#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int n,m;
    cout<<"Enter two number: "<<endl;
    cin>>n>>m;
    int ans = gcd(n,m);
    cout<<"The GCD of "<<n<<" and "<<m<<" is: "<<ans<<endl;
}
