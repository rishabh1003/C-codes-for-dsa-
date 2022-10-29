#include<bits/stdc++.h>
using namespace std;
int maxlen=INT_MIN;
int main(){
unordered_map<char,int> mp;
string s="abaccab";
int n=7;
int k=2;
int i=0;int j=0;
int maxlen=INT_MIN;
 
 while(j<n){
    mp[s[j]]++;

    if(mp.size()< k){
        j++;
    }

    else if(mp.size()==k){
        maxlen=max(maxlen,j-i+1);
        j++;
    }

    else{
        while(mp.size()>k and i<j){
            mp[s[i]]--;
            if (mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
        }
        j++;
    }
 }
cout<<maxlen<<endl;

}