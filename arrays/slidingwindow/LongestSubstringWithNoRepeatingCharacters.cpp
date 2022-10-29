#include<bits/stdc++.h>
using namespace std;
int maxlen=INT_MIN;
int main(){
  unordered_map<char,int> mp;
string s="mkmcdefhjgjgndfjvaktubuveaurnvdunuoernvuonjoadnvfonuondvofn";
int i=0;int j=0;

while(j<s.size()){
    mp[s[j]]++;

    if (mp.size()< j-i+1){
          while(mp.size()<j-i+1 and i<j){
            mp[s[i]]--;
            if (mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
          }
          j++;
    }

    else if (mp.size()==j-i+1){
        maxlen=max(maxlen,j-i+1);
        j++;
    }
}

cout<<maxlen<<endl;
} 