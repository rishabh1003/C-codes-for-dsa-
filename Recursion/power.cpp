#include<iostream>
using namespace std;

int power (int n){
    // base case 
    if (n==0)
        return 1;
    
    // recursive relation

    int smallestproblem=power (n-1);
    int biggerproblem= 2* smallestproblem;

    return biggerproblem;
}



int main(){
    int n;
    cin>>n;

    int ans=power(n);
   cout<<ans<<endl;
    
    }