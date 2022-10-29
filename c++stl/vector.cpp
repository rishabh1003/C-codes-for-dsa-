#include<iostream>
#include<vector>
using namespace std;

int main(){
    // you can create and initialize the vector
    vector <int > a;
    vector<int> b(5,10);// five in twith value 10, init a vector of zeros(n,0)
    vector<int > c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5,6}; 

    // look at how to iterate over vector

     for(int i=0;i<c.size();i++){
         cout<<c[i]<<",";

     } 
     cout<<endl;

     for(auto it =b.begin();it!=b.end();it++){
         cout<<(*it)<<endl;
     }

      }