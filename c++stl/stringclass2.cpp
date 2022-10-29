#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
     //taking input of n length of string 
     cin.get();

     
     string s[100];//vector

     sort(s,s+n);
     for(int i=0;i<n;i++){
         getline(cin,s[i]);
     }

     for(int i=0;i<n;i++){
         cout<<s[i]<<endl;
     }
}