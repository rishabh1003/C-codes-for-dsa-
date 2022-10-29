#include<bits/stdc++.h>
using namespace std;

void print(int n){
  if (n==0){
    return;
  }

 print(n-1);
  cout<<n<<" ";
}

void revprint(int n){
  if (n==0){
   return;
  }

  cout<<n<<" ";
  revprint(n-1);
}

 int main(){
    int n;
    cin>>n;
    print(n);
    cout<<endl;
    revprint(n);
 }