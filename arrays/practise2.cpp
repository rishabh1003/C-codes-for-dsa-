#include <iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int> a;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;i<nums.size();j++){
                if (nums[i]+nums[j]==target){
                 return []int{i,j}; 

            }
            
            }
        }
        return a;
    }   

int main(){
  /*  int third[10]={4,7};
    int fourth[10]={0};
    int fifth[20]={1};
    

    //printarray(third,10);
    //printarray(fourth,10);
   // printarray(fifth,20);

    int sizefive=sizeof(fifth)/sizeof(int);
    //cout<<"size of fifth element "<<sizefive;


    /*char ch[5]={'a','b','c','d','e'};
    for (int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }

    double firstdouble [6];
    float firstfloat[7];
    bool firstbool[8];

    cout<<"every thing is fine"<<endl;*/

  vector<int> b;
  b.push_back(3);
  b.push_back(2);
  b.push_back(4);

 for(int i=0;i<twoSum(b,6).size();i++) {
     cout<<twoSum(b,6)[i]<<" ";
 }
 cout<<endl;
}

  