#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="cbaebabacd";
    string ptr="abc";

   int k=ptr.length();
   //cout<<k<<endl;
   int i=0;int j=0;

   unordered_map<char,int>mp;

   for(auto it:ptr){
    mp[it]++;
    
   }
   int count=mp.size();
   
   int ans=0;

   while(j<s.size()){
        if(mp.find(s[j])!=mp.end()){
           mp[s[j]]--;
            if (mp[s[j]]==0){
            count--;
        }
          }
         

     /* for(auto it:mp){
            cout<<it.first<<":"<<it.second<<endl;;
        }
        cout<<count<<endl;
        cout<<"operation done"<<"j " << j <<" "<< "i "<< i<<endl;*/
    
       if (j-i+1 <k){
        j++;
       } 

       else if  (j-i+1 ==k){
          if (count==0){
            ans++;
          }

          if (mp.find(s[i])!=mp.end()){
             ++ mp[s[i]];
              if (mp[s[i]]==1){
                  count++;
              }
                          
          }
         
         i++;j++;
       }

   }

 cout<<ans<<endl;

}