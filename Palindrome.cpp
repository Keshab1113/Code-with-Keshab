class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string h=to_string(x);
        string h2=h;
        
        int s=0;
        int e=h.size()-1;
        while(s<e){
            swap(h[s++],h[e--]);
        }
        if(h2==h){
        return true;
        }
        return false;
    }
    
};



// #include<iostream>
// using namespace std;

// bool checkPalindrome(string& name, int i,int j){
//     if(j<i){
//         return false;
//     }
//     if(name[i]==name[j]){
//         return true;
//     }
//     i++;
//     j--;
//     checkPalindrome(name,i,j);
// }

// int main(){
//     string name="Keshabbahsek";
//     bool isPalindrome= checkPalindrome(name,0,name.length()-1);
//     if(isPalindrome){
//         cout<<"This is Palindrome"<<endl;
//     }
//     else{
//         cout<<"This is Not-Palindrome"<<endl;
//     }
// }

//Output: This is Palindrome
