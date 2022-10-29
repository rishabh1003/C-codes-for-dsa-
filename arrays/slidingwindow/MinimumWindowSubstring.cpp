#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<char,int> mp;
  string s="totmtaptat";
  string t="tta";
  
  for(auto it:t){
        mp[it]++;
  }
  int count=mp.size();

  int i=0;int j=0;
  int minlen=INT_MAX;

  while(j<s.size()){
      if (mp.find(s[j])!=mp.end()){
        mp[s[j]]--;
        if (mp[s[j]]==0){
            count--;
        }
      }

      if (count>0){
        j++;
      }

      else if (count==0){
       
        while(count==0 and i<j){
            /* we are comparing length inside while loop because 
            if we increase the value of i then length also varies and we have to find the 
            min len in which the character is present .*/
             minlen=min(minlen,j-i+1);
            if (mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
                if (mp[s[i]]>0){
                    count++;
                }
            }
            i++;
        }
        j++;
      }
  }

cout<<minlen<<endl;

}