#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	vector<double> m(n);
	
	for(int i=0;i<n;i++)
		cin>>m[i];
	
	sort(m.begin(),m.end());
	cout<<m[n-1]-m[0]<<endl;
		
}