#include<iostream>
using namespace std;
int main(){
    string S;
    cin>>S;
    int f=0,a=0;
        for(int j=0;S[j]!='\0';j++){
            for(int i=j-1;i>=0;i--){
                if(S[j]==S[i]){
                    f=1;
                    break;
                }
            }
            if(f==0)
            a++;
            f=0;
        }
        if(a%2==0){
            cout<<"CHAT WITH HER!";
        }
        else{
            cout<<"IGNORE HIM!";
        }

}
