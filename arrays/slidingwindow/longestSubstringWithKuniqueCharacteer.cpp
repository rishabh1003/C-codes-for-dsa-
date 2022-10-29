#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char,int> mp;
    string s="aabacbebebe";
    int k=3;
    int maxlen=INT_MIN;

    int i=0;int j=0;
    while(j<s.size()){
        mp[s[j]]++;

        if(mp.size()<k){
            j++;
        }

        else if (mp.size() ==k){
            maxlen=max(j-i+1,maxlen);
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