/*" https://www.codingninjas.com/codestudio/problems
/deque_1170059?leftPanelTab=0" */

#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;

    d.push_front(12);
    d.push_back(14);


    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
   cout<<endl;
    d.pop_front();

    cout<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<endl;
    d.pop_back();
    cout<<endl;
    
    if (d.empty()){
        cout<<"queue is empty"<<endl;   
         }
    else{
        cout<<"queu is not empty";    
        }


}