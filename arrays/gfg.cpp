#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={6,-3,-10,0,2};
    int n=5;
    long long int currp=1;
	   long long int maxproduct=INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        currp=currp*arr[i];
            cout<<currp<<endl;
	        maxproduct=max(maxproduct,currp);
	        
	        if (currp=0){
	            currp=1;
	        }
	    }

        cout<<maxproduct<<endl;
        

        
}