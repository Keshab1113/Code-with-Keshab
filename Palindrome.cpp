#include<iostream>
using namespace std;

bool checkPalindrome(string& name, int i,int j){
    if(j<i){
        return false;
    }
    if(name[i]==name[j]){
        return true;
    }
    i++;
    j--;
    checkPalindrome(name,i,j);
}

int main(){
    string name="Keshabbahsek";
    bool isPalindrome= checkPalindrome(name,0,name.length()-1);
    if(isPalindrome){
        cout<<"This is Palindrome"<<endl;
    }
    else{
        cout<<"This is Not-Palindrome"<<endl;
    }
}

//Output: This is Palindrome
