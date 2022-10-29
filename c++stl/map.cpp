#include<iostream>
#include<map>
using namespace std;

int main(){
    map <int,string>  m;

    m[1]="rishabh";// map take o(n) time complexity to insert
    m[2]="kumar";
    m[3]="gupta";

    m.insert({5,"bheem"});

/*map<int,string> :: iterator it;
for(it=m.begin();it!=m.end();++it ){
   // cout<<(*it).first<<" "<<(*it).second<<endl; both the statement are same 
    cout<<it->first<<" "<<it-> second<<endl;
}*/


for(auto &pr :m){
    cout<<pr.first<<" "<<pr.second <<endl;
}


auto it = m.find(3);//o(log n)

if (it == m.end() ){
    cout<<"no value";

}else{
    cout<<it->first<<" "<<it->second<<endl;
}
    
}