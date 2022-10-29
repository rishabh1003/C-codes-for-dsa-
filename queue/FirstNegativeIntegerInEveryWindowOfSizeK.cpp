#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> l;
    vector<int> v;
    int n=8;
    int arr[n]={12,-1,-7,8,-16,30,16,28};
    int k=3;
    int i=0;int j=0; 
    while(j<n){
        if (arr[j]<0){
            l.push(arr[j]);
        }
       if (j-i+1 <k){
         j++;
       }

       else if (j-i+1 == k){
           if (l.size()==0){
              cout<<0<<" "; 
                   
            }
           else{ 
             cout<<l.front()<<" ";
             if (arr[i]==l.front()){
                l.pop();
             }

             i++;j++;
           }
           

       }


    }

    



}