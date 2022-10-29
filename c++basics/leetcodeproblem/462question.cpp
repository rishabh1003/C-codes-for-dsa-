#include<bits/stdc++.h>
using namespace std;

int minMoves2(vector<int>& nums) {
        int n=nums.size();
        cout<<n<<endl;
    int sum=0;
  for(int i=0;i<n;i++){
      sum=sum+nums[i];
  }
  cout<<sum<<endl;
        int avg=sum/n;
        cout<<avg<<endl;
        int answer=0;
        
        for (int i=0;i<n;i++){
           answer=+abs(avg-nums[i]);
            }
            
            
        return answer;      
        
    }

int main(){
    vector<int> v{1,10,2,9};
      cout<<minMoves2(v)<<endl;


}