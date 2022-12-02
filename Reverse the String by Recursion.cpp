#include<iostream>
using namespace std;

void reverse(string& name, int i,int j){
    if(j<i){
        return ;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    reverse(name,i,j);
}

int main(){
    string name="Keshab";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
}

// Output: bahseK
