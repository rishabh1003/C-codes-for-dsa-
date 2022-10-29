#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s, int i){
    if (i>=s.length()/2){
        return true;
    }

    if (s[i]!=s[s.length()-i-1]){
        return false;
    }

     return ispalindrome(s,i+1);


}

int main(){

    string s="madam";

    cout<< ispalindrome(s,0)<<endl;;


}