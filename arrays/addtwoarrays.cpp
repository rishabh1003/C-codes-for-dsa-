#include<bits/stdc++.h>
using namespace std;
vector<int > reverse(vector<int>v){
	int s=0;
	int e=v.size()-1;
	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}




vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1 ;
	int j=m-1;
	vector<int> v;
	int carry=0;
	while(i>=0 && j>=0){
		int sum=a[i]+b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);
		i--;
		j--;
	}
	// case 1 when n>m
	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);
		i--;
	}
	// case 2 when m>n
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);
		j--;
	}
	while(carry!=0){
		int sum =carry;
		carry=sum/10;
		sum=sum%10;
		v.push_back(sum);
	}
	return reverse(v);
}
int main(){
    vector<int >b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);

    vector<int >a;
    a.push_back(6);
    findArraySum(a,a.size(),b,b.size());
    for(int i=0;i<findArraySum(a,a.size(),b,b.size()).size();i++){
        cout<<findArraySum(a,a.size(),b,b.size())[i]<<" ";

    }
    cout<<endl;
}